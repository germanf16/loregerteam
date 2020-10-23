
#include "stdio.h" 
#include "codigotarj.h" 
 
 
void main (void) 
 
{ 
	uint8 au8CardNumber[16]= {5,2,3,1,7,9,5,3,8,1,5,3,1,8,9,2}; 
	uint8 u8Check = 0; 
	u8Check = u8LuhnCheck (&au8CardNumber[0]); 
 
	if ( u8Check == 0 ) 
	{ 
 
	} 
	else 
	{ 
 
	}	 
 
} 
 
uint8 u8LuhnCheck ( uint8 *pu8Data ) 
{ 
	uint8 u8TempCardNumber = 0;
	uint8 u8Check = 0;
	
} 
