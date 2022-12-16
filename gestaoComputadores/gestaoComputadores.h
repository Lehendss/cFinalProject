#ifndef GESTAOCOMPUTADORES_H_INCLUDED
#define GESTAOCOMPUTADORES_H_INCLUDED


#include "gestaoComputadores.h"

#define MAX_COMPUTADORES 50
#define MAX_STRING 80

#define MIN_NUMID 1
#define MAX_NUMID 99999


typedef struct
{
    int idComputador;
    int ram;
    char nome[MAX_STRING];

}   tipoComputador;

int lerDadosComputador(char nome[]);
void mostrarDadosComputador(tipoComputador vetorComputadores[], int quantComputadores);
int lerQuantidadeComputadores(void);
int procuraComputadores(tipoComputador vetorComputadores[], int quantComputadores, int numComputador);
void acrescentaComputadores (tipoComputador vetorComputadores[], int *quantComputadores);





#endif // GESTAOCOMPUTADORES_H_INCLUDED

