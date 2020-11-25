#include "stdio.h" 
#include "stdlib.h" 
#include "machine.h"


int main(void)
{
	uint8 menu[]="\n 1.VODKA TONIC \n 2.PALOMA \n 3.PARIS DE NOCHE\n";
	tenStates encheckweight = 0;
	tenStates enchange = 0;
	unsigned int u8Delay = 0;
	uint8 u8number=0;
	uint8 u8glass=0;

	while(1)
	{
      printf("pon el vaso\n Ya coloco el vaso?\n");
      printf("Si ya lo puso presione 1 si no presione 0\n");
      scanf("%d",&u8glass); 

       if(u8glass==glass)
       {  
          printf("Bienvenido\n seleccione la bebida que quiera:%s",menu);
	      scanf("%d",&u8number);
	      switch(u8number)
	        {
	         	case 1:
	         	{
                    switch  (encheckweight)
	         	        {
	         	        	case enIce:
	         	        	{
                               printf("hielo puesto\n");
                               u8Delay = VODKA;
                               while(u8Delay--);
                               encheckweight=Delay;
                               enchange=enAguatonica;
	         	        	}

	         	        	case enAguatonica:
	         	        	{
                               printf("agua servida\n");
                               u8Delay = VODKA;
                               while(u8Delay--);
                               encheckweight=Delay;
                               enchange=enVodka;
	         	        	}
                            
                            case enVodka:
	         	        	{
                               printf("Vodka servido\n");
                               u8Delay = VODKA;
                               while(u8Delay--);
                               encheckweight=Delay;
                               enchange=enRodajadelimon;
	         	        	
	         	        	case enRodajadelimon:
	         	        	{
                               printf("rodaja de limon puesta\n");
                               u8Delay = VODKA;
                               while(u8Delay--);
                               encheckweight=Delay;
	         	        	}
	         	        	case Delay:
	         	        	{
	         	        		printf("Todo bien\n");
	         	        		encheckweight=enchange;
	         	        	}
	         	        }
	         	        printf("bebida servida\n");
                        break;
	         	}
	         	break;       
	   	        case 2:
	   	        {
                    switch  (encheckweight)
	         	        {
	         	        	case enTequila:
	         	        	{
                               printf("tequila servido\n");
                               u8Delay = PALOMA;
                               while(u8Delay--);
                               encheckweight=Delay;
                               enchange=enRefrescotoronja;
	         	        	}

	         	        	case enRefrescotoronja:
	         	        	{
                               printf("juice serve\n");
                               u8Delay = PALOMA;
                               while(u8Delay--);
                               encheckweight=Delay;
                               enchange=enIce;
	         	        	}
                            case enIce:
	         	        	{
                               printf("ice serve\n");
                               u8Delay = PALOMA;
                               while(u8Delay--);
                               encheckweight=Delay;
	         	        	}
	         	        	case Delay:
	         	        	{
	         	        		printf("Todo bien\n");
	         	        		encheckweight=enchange;
	         	        	}
	         	        }
	         	        printf("bebida servida\n");
                        break;
	   	        }
                break;
	   	        case 3:
	   	        {
	   	        	switch  (encheckweight)
	         	        {
	         	        	case enRefrescocola:
	         	        	{
                               printf("Refresco servido \n");
                               u8Delay = PARIS;
                               while(u8Delay--);
                               encheckweight=Delay;
                               enchange=enCognac;
	         	        	}

	         	        	case enCognac:
	         	        	{
                               printf("Cognac servido \n");
                               u8Delay = PARIS ;
                               while(u8Delay--);
                               encheckweight=Delay;
                               enchange=enFruts;
	         	        	}
                            
                            
	         	        	case enIce:
	         	        	{
                               printf("hielo servido \n");
                               u8Delay =PARIS;
                               while(u8Delay--);
                               encheckweight=Delay;
	         	        	}
	         	        	case Delay:
	         	        	{
	         	        		printf("todo bien\n");
	         	        		encheckweight=enchange;
	         	        	}
	         	        }
	         	        printf("bebida servida\n");
                        break;
	   	        }
	   	        default:
	         	     break;
	        
	         }
       } // noting to do 
	}
}