#include "stdio.h"
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
uint16 u16seleccion;

typedef enum //menu
{
	int estado1 = 0;
	int estado2;
	int estado3
}tenStates;




void main ( void )
{
	tenStates bebida = estado1;
	uint16 u16seleccion = 0;
	printf("Seleccione su bebida\n");
	uuint16 u16bebidas;
	uint32 u8Drinks = 0;


	printf("MENU:\n 1.Mojito tradicional\n  2.Paloma\n  3.Perla Negra\n");
	scanf("%d",&bebidas);

while(1)
{
	switch ( bebida )
	{
		case estado1 :
				printf("seleccionaste Mojito Tradicional\n");
				printf("sirviendo limon\n");
				printf("sirviendo hierbabuena\n");
				printf("sirviendo jarabe\n");
				printf("sirviendo hielos\n");
				printf("sirviendo ron\n");
				printf("sirviendo agua mineral\n");
				break;
		case estado2 : 
				printf("seleccionaste Paloma\n");
				printf("sirviendo hielos\n");
				printf("sirviendo tequila\n");
				printf("sirviendo limon\n");
				printf("sirviendo squirt\n");
				printf("sirviendo agua mineral\n");
				break;
		case estado3 : 
				printf("seleccionaste Perla Negra\n");
				printf("sirviendo hielos\n");
				printf("sirviendo jagermeister\n");
				printf("sirviendo boost\n");
				break;
		default: printf("ERROR, no hay bebida con ese numero");

	}
}
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
	typedef enum //bebida1
{

};

typedef enum //bebida2
{

};

typedef enum //bebida3
{

};
//*