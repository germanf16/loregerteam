//
// Created by javia on 12/7/2020.
//

#ifndef UNTITLED2_ELEVADORH_H
#define UNTITLED2_ELEVADORH_H
#define MAX_PISOS 15

typedef enum
{
    STATE_STOP = 0,
    STATE_UP,
    STATE_DOWN,
    STATE_OPEN,
    STATE_CLOSE
} eEstados_t;

typedef struct
{
    int level;
    eEstados_t state;
    eEstados_t nextState;
} sElevador_t;

#define PB 0

extern void int32EstadoDetenido(sElevador_t *Elevador);
extern void vfnSubiendo(sElevador_t *Elevador);
extern void vfnBajando(sElevador_t *Elevador);

#endif //UNTITLED2_ELEVADORH_H
