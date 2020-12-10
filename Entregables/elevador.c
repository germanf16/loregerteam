#include <stdio.h>
#include "elevadorh.h"

void int32EstadoDetenido(sElevador_t *Elevador);
void Subiendo(sElevador_t *Elevador);
void Bajando(sElevador_t *Elevador);

int main()
{
    sElevador_t Elevador = {PB, STATE_STOP, STATE_STOP};
    sElevador_t *pElevador = &Elevador;

    pElevador->level = PB;
    pElevador->state = STATE_STOP;
    printf("\nElevador en el piso: %d", pElevador->level);
    for (;;)
    {
        switch (pElevador->state)
        {
        case STATE_STOP:
            int32EstadoDetenido(pElevador);
            break;
        case STATE_UP:
            Subiendo(pElevador);
            break;
        case STATE_DOWN:
            Bajando(pElevador);
            break;
        default:
            int32EstadoDetenido(pElevador);
            break;
        }
    }
}

void int32EstadoDetenido(sElevador_t *Elevador){
    int i32level = 0;
    eEstados_t state = Elevador->state;

    printf("\nSe abren las puertas del elevador");
    printf("\nIngrese el piso deseado: ");
    scanf("%d", &i32level);
    printf("\nHas elegido el piso %d", i32level);
    printf("\nSe cierran las puertas");
    if(i32level >= PB && i32level < MAX_PISOS)
    {        
        if (i32level > Elevador->level){
        state = STATE_UP;
    }
    else if (i32level < Elevador->level)
    {
        state = STATE_DOWN;
    }
    else
    {
        printf("\nEstas en ese piso");
    }
    Elevador->level = i32level;
    Elevador->state = state;
    }
    else
    {
        printf("\n%d es una selección no válida", i32level);
        printf("\nEste es un edificio de %d pisos", MAX_PISOS);
    }
};

void Subiendo(sElevador_t *Elevador)
{   
    printf("\nSubiendo...");
    if(Elevador->level == 0)
    {
        printf("\nHas llegado a la planta baja");
        Elevador->state = STATE_STOP;
    }
    else
    {
        printf("\nHas llegado al piso %d", Elevador->level);
        Elevador->state = STATE_STOP;
    }
};

void Bajando(sElevador_t *Elevador)
{
    printf("\nBajando...");
    printf("\nHas llegado al piso %d", Elevador->level);
    Elevador->state = STATE_STOP;
};
