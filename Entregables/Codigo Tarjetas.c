
#include "stdio.h"
#include "codigotarj.h"


void main (void)

{
	
	uint8 au8CardNumber[16]= {5,2,3,1,7,9,5,3,8,1,5,3,1,8,9,2};
	uint8 u8Check = 0;

	u8Check = u8LuhnCheck (&au8CardNumber[0]);

	printf("NUMERO DE TARJETA");
	
	for(int n=0; n<16; n++)
	{
		printf("%d", au8CardNumber[n]);
	}
	u8Check= u8LuhnCheck(&au8CardNumber[0]);

	if ( u8Check == 0 )
	{
		printf("\n NUMERO DE TARJETA VALIDO ");	
	}
	else
	{
		printf("\n NUMERO DE TARJETA INVALIDO")
	}	
	
}

uint8 u8LuhnCheck ( uint8 *pu8Data )
{
      uint8 u8TempCardNumber = 0;
      uint8 u8Check = 0;

      for(int i = 0 , i< Largodelnumdetarj;++1)

      {
      	if(i % 2 == 0)
      	{
      		//none
      	}	
      	else
      	{
      		printf("por favor intenta de nuevo");
      	}
      }
}
