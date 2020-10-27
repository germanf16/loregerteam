#include "stdio.h"
#include "estacionamiento.h"

/* Descripcion 

->Crear un programa que simule un estacionamiento con 5 diferentes secciones 0, 1, 2, 3 o 4. Cada seccion tendra un cupo maximo de carros que sera definido por Defines diferentes. 
->Se tiene que usar un arreglo de estructuras para manejar los estacionamientos, la estructura es la de abajo.
->El programa correra en un ciclo infinito y habra funciones aleatorias que metan y saquen carros de las diferentes secciones.
->El programa debe tener una logica que atienda las peticiones siguientes con funciones:
	*Obtener el numero de espacios disponibles de una seccion (F1)
	*Obtener el numero de espacios no disponibles de una seccion (F2)
	*Obtener ganancias de sección(F3)
	*Registrar vehiculo ingresado(F4)
	*Remover vehiculo(F5)
	*Registrar pago de vehiculo ingresado(F6)
*/

/* Fucniones */
/*
->(F1) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento (0, 1, 2, 3 o 4) e imprima la cantidad de espacios disponibles de esa seccion
->(F2) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento (0, 1, 2, 3 o 4) e imprima la cantidad de espacios no disponibles de esa seccion
->(F3) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento (0, 1, 2, 3 o 4) e imprima la cantidad de dinero acumulada en esa sección
->(F4) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento y permita ingresar un vehiculo a esa seccion
->(F5) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento y permita retirar un vehiculo de la cuenta de la seccion
->(F6) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento y registre el pago por haber ingresado el vehiculo
*/

tstParkingInfo astMyParks[enMaxSectors] = INIT_PARKING_SLOTS;						/*Struct to Use*/

void main ( void )
{
	uint8 u8InputAction = 0;
	tenParkingSectors enSector; 
	uint8 u8ConfirmationFromAction = 0;
	uint8 u8AvailableSpots = 0;
	astMyParks[enSector0].u8AvailableSlots = SECTOR0_SLOTS;
	astMyParks[enSector1].u8AvailableSlots = SECTOR1_SLOTS;
	astMyParks[enSector2].u8AvailableSlots = SECTOR2_SLOTS;
	astMyParks[enSector3].u8AvailableSlots = SECTOR3_SLOTS;
	astMyParks[enSector4].u8AvailableSlots = SECTOR4_SLOTS;

	astMyParks[enSector0].u8NotAvailableSlots = 0;
	astMyParks[enSector1].u8NotAvailableSlots = 0;
	astMyParks[enSector2].u8NotAvailableSlots = 0;
	astMyParks[enSector3].u8NotAvailableSlots = 0;
	astMyParks[enSector4].u8NotAvailableSlots = 0;



	while(1)
	{
		fflush(stdin);
		printf("Press 1 to -> Read Available Slots\n");
		printf("Press 2 to -> Read Unavailable Slots\n");
		printf("Press 3 to -> Read Earned Money\n");
		printf("Press 4 to -> Enter a Car to a Section\n");
		printf("Press 5 to -> Remove a Car from a Section\n");
		printf("Enter selection: ");
		scanf("%d", &u8InputAction);
		printf("Action Selected %d\n", u8InputAction );

		printf("Enter Sector from 0 to 4: ");
		scanf("%d", &enSector);
		printf("Sector Selected %d\n", enSector );

		if( enSector < enMaxSectors )
		{
			if( u8InputAction == 1 )
			{

				ShowAvailableSlots (enSector);
			}

			else if( u8InputAction == 2 )
			{

				ShowNotAvailableSlots (enSector);

			}
			else if( u8InputAction == 3 )
			{

				ShowEarnedMoney (enSector);


			}
			else if( u8InputAction == 4 )
			{

				u8ConfirmationFromAction = u8AddCarToSector (enSector);
				u8ConfirmationFromAction = 0;
				if ( u8ConfirmationFromAction == 0)
				{
					printf("The parking place is occupied\n");
				}
				else
				{
					printf("The parking place is free\n");
					u8ImportPaymentOfSlot( enSector );
				}

			}
			else if ( u8InputAction == 5 )
			{

				u8ConfirmationFromAction = u8RemoveCarFromSector ( enSector ); 
				u8ConfirmationFromAction = 0;
				
				if ( u8ConfirmationFromAction == 0)
				{
					printf("The parking place is unoccupied\n");
				}
					else
					{
						printf("The car left the place free\n");
					}
			}
			else
			{

			}
			printf("\n\n");
		}
		else
		{
			/*Not a valid sector*/
		}

	}
}

/*F1*/
/*
->(F1) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento (0, 1, 2, 3 o 4) e imprima la cantidad de espacios disponibles de esa seccion
*/
void ShowAvailableSlots ( tenParkingSectors enCurrentSector )
{
	uint8 u8Availability = 0;

	if ( enCurrentSector == enSector0 )
	{
		u8Availability = astMyParks[enSector0].u8AvailableSlots;
		printf("Places Available (Sector 0): %d\n", u8Availability);
	}
	else if ( enCurrentSector == enSector1 )
	{
		u8Availability = astMyParks[enSector1].u8AvailableSlots;
		printf("Places Available (Sector 1): %d\n", u8Availability);
	}
	else if ( enCurrentSector == enSector2 )
	{
		u8Availability = astMyParks[enSector2].u8AvailableSlots;
		printf("Places Available (Sector 2): %d\n", u8Availability);
	}
	else if ( enCurrentSector == enSector3 )
	{
		u8Availability = astMyParks[enSector3].u8AvailableSlots;
		printf("Places Available (Sector 3): %d\n", u8Availability);
	}
	else if ( enCurrentSector == enSector4 )
	{
		u8Availability = astMyParks[enSector4].u8AvailableSlots;
		printf("Places Available (Sector 4): %d\n", u8Availability);
	}
}

/*F2*/
/*
->(F2) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento (0, 1, 2, 3 o 4) e imprima la cantidad de espacios no disponibles de esa seccion
*/
void ShowNotAvailableSlots ( tenParkingSectors enCurrentSector )
{
	uint8 u8NotAvailability = 0;

	if ( enCurrentSector == enSector0 )
	{
		u8NotAvailability = astMyParks[enSector0].u8NotAvailableSlots;
		printf("Places not Available (Sector 0): %d\n", u8NotAvailability);
	}
	else if ( enCurrentSector == enSector1 )
	{
		u8NotAvailability = astMyParks[enSector1].u8NotAvailableSlots;
		printf("Places not Available (Sector 1): %d\n", u8NotAvailability);
	}
	else if ( enCurrentSector == enSector2 )
	{
		u8NotAvailability = astMyParks[enSector2].u8NotAvailableSlots;
		printf("Places not Available (Sector 2): %d\n", u8NotAvailability);
	}
	else if ( enCurrentSector == enSector3 )
	{
		u8NotAvailability = astMyParks[enSector3].u8NotAvailableSlots;
		printf("Places not Available (Sector 3): %d\n", u8NotAvailability);
	}
	else if ( enCurrentSector == enSector4 )
	{
		u8NotAvailability = astMyParks[enSector4].u8NotAvailableSlots;
		printf("Places not Available (Sector 4): %d\n", u8NotAvailability);
	}
}

/*F3*/
/*
->(F3) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento (0, 1, 2, 3 o 4) e imprima la cantidad de dinero acumulada en esa sección
*/
void ShowEarnedMoney ( tenParkingSectors enCurrentSector )
{
	uint32 u32MoneyProfit = 0;

	if ( enCurrentSector == enSector0 )
	{
		u32MoneyProfit = astMyParks[enSector0].u32MoneyEarn;
		printf("Money earnings (Sector 0): $ %d.00\n", u32MoneyProfit);
	}
	else if ( enCurrentSector == enSector1 )
	{
		u32MoneyProfit = astMyParks[enSector1].u32MoneyEarn;
		printf("Money earnings (Sector 1): $ %d.00\n", u32MoneyProfit);
	}
	else if ( enCurrentSector == enSector2 )
	{
		u32MoneyProfit = astMyParks[enSector2].u32MoneyEarn;
		printf("Money earnings (Sector 2): $ %d.00\n", u32MoneyProfit);
	}
	else if ( enCurrentSector == enSector3 )
	{
		u32MoneyProfit = astMyParks[enSector3].u32MoneyEarn;
		printf("Money earnings (Sector 3): $ %d.00\n", u32MoneyProfit);
	}
	else if ( enCurrentSector == enSector4 )
	{
		u32MoneyProfit = astMyParks[enSector4].u32MoneyEarn;
		printf("Money earnings (Sector 4): $ %d.00\n", u32MoneyProfit);
	}
}

/*F4*/
/*
->(F4) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento y permita ingresar un vehiculo a esa seccion
*/
uint8 u8AddCarToSector( tenParkingSectors enCurrentSector )
{
	if ( enCurrentSector == enSector0 )
	{
		if ( astMyParks[enSector0].u8AvailableSlots > 0 )
		{
			astMyParks[enSector0].u8AvailableSlots--;
			astMyParks[enSector0].u8NotAvailableSlots++;
			return PARKING_SPOT_AVAILABLE;
		}
		else
		{
			return PARKING_SPOT_UNAVAILABLE;
		}
	}
	else if ( enCurrentSector == enSector1 )
	{
		if ( astMyParks[enSector1].u8AvailableSlots > 0 )
		{
			astMyParks[enSector1].u8AvailableSlots--;
			astMyParks[enSector1].u8NotAvailableSlots++;
			return PARKING_SPOT_AVAILABLE;
		}
		else
		{
			return PARKING_SPOT_UNAVAILABLE;
		}
	}
	else if ( enCurrentSector == enSector2 )
	{
		if ( astMyParks[enSector2].u8AvailableSlots > 0 )
		{
			astMyParks[enSector2].u8AvailableSlots--;
			astMyParks[enSector2].u8NotAvailableSlots++;
			return PARKING_SPOT_AVAILABLE;
		}
		else
		{
			return PARKING_SPOT_UNAVAILABLE;
		}
	}
	else if ( enCurrentSector == enSector3 )
	{
		if ( astMyParks[enSector3].u8AvailableSlots > 0 )
		{
			astMyParks[enSector3].u8AvailableSlots--;
			astMyParks[enSector3].u8NotAvailableSlots++;
			return PARKING_SPOT_AVAILABLE;
		}
		else
		{
			return PARKING_SPOT_UNAVAILABLE;
		}
	}
	else if ( enCurrentSector == enSector4 )
	{
		if ( astMyParks[enSector4].u8AvailableSlots > 0 )
		{
			astMyParks[enSector4].u8AvailableSlots--;
			astMyParks[enSector4].u8NotAvailableSlots++;
			return PARKING_SPOT_AVAILABLE;
		}
		else
		{
			return PARKING_SPOT_UNAVAILABLE;
		}
	}
	
}

/*F5*/
/*
->(F5) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento y permita retirar un vehiculo de la cuenta de la seccion
*/
uint8 u8RemoveCarFromSector( tenParkingSectors enCurrentSector )
{
	if ( enCurrentSector == enSector0 )
	{
		if ( astMyParks[enSector0].u8NotAvailableSlots > 0 )
		{
			astMyParks[enSector0].u8AvailableSlots++;
			astMyParks[enSector0].u8NotAvailableSlots--;
			return PARKING_SPOT_AVAILABLE;
		}
		else
		{
			return PARKING_SPOT_UNAVAILABLE;
		}
	}
	else if ( enCurrentSector == enSector1 )
	{
		if ( astMyParks[enSector1].u8NotAvailableSlots > 0 )
		{
			astMyParks[enSector1].u8AvailableSlots++;
			astMyParks[enSector1].u8NotAvailableSlots--;
			return PARKING_SPOT_AVAILABLE;
		}
		else
		{
			return PARKING_SPOT_UNAVAILABLE;
		}
	}
	else if ( enCurrentSector == enSector2 )
	{
		if ( astMyParks[enSector2].u8NotAvailableSlots > 0 )
		{
			astMyParks[enSector2].u8AvailableSlots++;
			astMyParks[enSector2].u8NotAvailableSlots--;
			return PARKING_SPOT_AVAILABLE;
		}
		else
		{
			return PARKING_SPOT_UNAVAILABLE;
		}
	}
	else if ( enCurrentSector == enSector3 )
	{
		if ( astMyParks[enSector3].u8NotAvailableSlots > 0 )
		{
			astMyParks[enSector3].u8AvailableSlots++;
			astMyParks[enSector3].u8NotAvailableSlots--;
			return PARKING_SPOT_AVAILABLE;
		}
		else
		{
			return PARKING_SPOT_UNAVAILABLE;
		}
	}
	else if ( enCurrentSector == enSector4 )
	{
		if ( astMyParks[enSector4].u8NotAvailableSlots > 0 )
		{
			astMyParks[enSector4].u8AvailableSlots++;
			astMyParks[enSector4].u8NotAvailableSlots--;
			return PARKING_SPOT_AVAILABLE;
		}
		else
		{
			return PARKING_SPOT_UNAVAILABLE;
		}
	}
	
}

/*F6*/
/*
->(F6) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento y registre el pago por haber ingresado el vehiculo
*/
void u8ImportPaymentOfSlot( tenParkingSectors enCurrentSector )
{
	if ( enCurrentSector == enSector0 )
	{
		astMyParks[enSector0].u32MoneyEarn += 10;
	}
	else if ( enCurrentSector == enSector1 )
	{
		astMyParks[enSector1].u32MoneyEarn += 10;
	}
	else if ( enCurrentSector == enSector2 )
	{
		astMyParks[enSector2].u32MoneyEarn += 10;
	}
	else if ( enCurrentSector == enSector3 )
	{
		astMyParks[enSector3].u32MoneyEarn += 10;
	}
	else if ( enCurrentSector == enSector4 )
	{
		astMyParks[enSector4].u32MoneyEarn += 10;
	}

}