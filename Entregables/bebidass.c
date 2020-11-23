#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define limon    3
#define hiervabuena  2
#define jarabe 3
#define hielos 5
#define ron 6
#define aguamineral 8
#define tequila 7
#define squirt 4
#define jagermeister 8
#define boost 8

typedef enum //menu
{
	Mojito;
	Paloma;
	PerlaNegra
}bebidass;



typedef enum //menu
{
	enMenu;
	enServerDrink;
	enWaitTillServed
}tenStates;

void main ( void )
{
	u8Beverage = 0;
	printf("Bienvenidos Maquina\n expendedora de bebidas\n");
	tenStates enCurrentState = enMenu;

	while ( 1 )
	{
		if ( enCurrentState == enMenu )
		{
			printf("Seleccione su bebida: \n");
			printf("Mojito Tradicion 1\n	Paloma 2\n		Perla Negra 3\n");
			scanf("%d", u8Beverage);
		}
		else if ( enCurrentState == enServeDrink )
		{
			enCurrentState = enWaitTillServed;
		}
		else if ( enCurrentState == enWaitTillServed )
		{
			if ( CheckFinalWeight() == TRUE )
			{
				enCurrentState = enMenu;
				Drinks( u8Beverage );
			}
		}
	}
}

//
void Drinks ( uint8 u8Beverage )
{
	if ( u8Beverage ==  Mojito)
	{
		printf("seleccionaste Mojito Tradicional\n");
		printf("sirviendo limon: %d\n", limon);
		printf("sirviendo hierbabuena: %d\n", hiervabuena);
		printf("sirviendo jarabe:%d\n", jarabe);
		printf("sirviendo hielos:%d\n", hielos);
		printf("sirviendo ron:%d\n", ron);
		printf("sirviendo agua mineral:%d\n", aguamineral);
		break;
	}
	else if ( u8Beverage == Paloma )
	{
		printf("seleccionaste Paloma\n");
		printf("sirviendo hielos%d\n", hielos);
		printf("sirviendo tequila%d\n", tequila);
		printf("sirviendo limon%d\n", limon);
		printf("sirviendo squirt%d\n", squirt);
		printf("sirviendo agua mineral%d\n", aguamineral);
		break;
	}
	else if ( u8Beverage == PerlaNegra )
	{
		printf("seleccionaste Perla Negra  \n");
		printf("sirviendo hielos  %d\n", hielos);
		printf("sirviendo jagermeister %d\n", jagermeister);
		printf("sirviendo boost %d\n", boost);
		break;
	}
	default: printf("ERROR, no hay bebida con ese numero");
}

