#include "stdlib.h"
#include "time.h"
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
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
void Drinks ( uint8 u8Beverage );
void delay(int number_of_seconds);

typedef enum //menu
{
	Mojito = 0,
	Paloma,
	PerlaNegra
}Drinks;

typedef enum //menu
{
	enMenu = 0,
	enServerDrink,
	enWaitTillServed
}tenStates;

void delay(int number_of_seconds);



