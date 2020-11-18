#include "stdio.h"
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;





void main ( void )
{
	printf("Seleccione su bebida\n");
	uint32 bebida;
	printf("MENU:\n 1.Mojito tradicional\n  2.Paloma\n  3.Perla Negra\n");
	scanf("%d",&bebida);


	switch(bebida){
		case 1: printf("seleccionaste Mojito Tradicional\n");
				printf("sirviendo limon\n");
				printf("sirviendo hierbabuena\n");
				printf("sirviendo jarabe\n");
				printf("sirviendo hielos\n");
				printf("sirviendo ron\n");
				printf("sirviendo agua mineral\n");
				break;
		case 2: printf("seleccionaste Paloma\n");
				printf("sirviendo hielos\n");
				printf("sirviendo tequila\n");
				printf("sirviendo limon\n");
				printf("sirviendo squirt\n");
				printf("sirviendo agua mineral\n");
				break;
		case 3: printf("seleccionaste Perla Negra\n");
				printf("sirviendo hielos\n");
				printf("sirviendo jagermeister\n");
				printf("sirviendo boost\n");
				break;
		default: printf("ERROR, no hay bebida con ese numero");

	}


*//*while (1)
	{

		if( bebida == Bebida1)  //bebida1= mojito, limon-ron-jarabe-hierbabuena-aguamineral
		{
			printf("sirviendo limon\n");
			printf("sirviendo hierbabuena\n");
			printf("sirviendo jarabe\n");
			printf("sirviendo hielos\n");
			printf("sirviendo ron\n");
			printf("sirviendo agua mineral\n");
		}
		if( bebida == Bebida2)  //bebida2= paloma, tequila-aguamineral-squirt-limon
		{
			printf("sirviendo hielos\n");
			printf("sirviendo tequila\n");
			printf("sirviendo limon\n");
			printf("sirviendo squirt\n");
			printf("sirviendo agua mineral\n");
		}
		if( bebida == Bebida3)  //bebida3= perlanegra, jagermeister-boost
		{
			printf("sirviendo hielos\n");
			printf("sirviendo jagermeister\n");
			printf("sirviendo boost\n");

		}


	}
//*