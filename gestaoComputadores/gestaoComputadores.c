

#include "funcoesGenericas.h"
#include "gestaoComputadores.h"


int lerDadosComputadores(char nome[])
{
    int num;

    num = lerInteiro("\nNr. De identificacao", MIN_NUMID, MAX_NUMID);
    lerString("\nNome: ", nome, MAX_STRING);

    return num;
}


