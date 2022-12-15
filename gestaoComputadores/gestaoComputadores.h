#ifndef GESTAOCOMPUTADORES_H_INCLUDED
#define GESTAOCOMPUTADORES_H_INCLUDED


#include "gestaoComputadores.h"

#define MAX_COMPUTADORES 50
#define MAX_STRING 80

#define MIN_NUMID 1
#define MAX_NUMID 99999


typedef struct
{
    int idPortatil;
    int ram;
    char nome;

}   tipoPortatil;

int lerDadosComputadores(char nome[]);


#endif // GESTAOCOMPUTADORES_H_INCLUDED

