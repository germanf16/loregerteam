

typedef unsigned char uint8;


int obtenerMinasCercanas(int fila, int columna, char tablero[FILAS][COLUMNAS])
int aleatorioEnRango(int minimo, int maximo) 
void iniciarTablero(char tablero[FILAS][COLUMNAS])
void colocarMina(int fila, int columna, char tablero[FILAS][COLUMNAS])
void colocarMinasAleatoriamente(char tablero[FILAS][COLUMNAS])
void imprimirSeparadorEncabezado()
void imprimirSeparadorFilas()
void imprimirEncabezado() 
char enteroACaracter(int numero)
void imprimirTablero(char tablero[FILAS][COLUMNAS], int deberiaMostrarMinas)
int abrirCasilla(char filaLetra, int columna, char tablero[FILAS][COLUMNAS]) 
int noHayCasillasSinAbrir(char tablero[FILAS][COLUMNAS])


#define ERROR_MINA_ENCONTRADA 1
#define ERROR_ESPACIO_YA_DESCUBIERTO 2
#define ERROR_NINGUNO 3


#define COLUMNAS 15
#define FILAS 15
#define ESPACIO_SIN_DESCUBRIR '.'
#define ESPACIO_DESCUBIERTO ' '
#define MINA '*'
#define CANTIDAD_MINAS 10
  
#define DEBUG 0