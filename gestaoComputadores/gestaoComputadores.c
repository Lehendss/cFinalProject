#include <stdio.h>
#include "funcoesGenericas.h"
#include "gestaoComputadores.h"

void acrescentaComputadores (tipoComputador vetorComputadores[], int *quantComputadores)
{
    int posicao, opcao=0;

    if (*quantComputadores == MAX_COMPUTADORES)
    {
        printf("\nATENCAO: o total de de computadores ja atingiu o maximo permitido\n");
    }
    else
    {

        do
        {
            vetorComputadores[*quantComputadores].idComputador = lerDadosComputador(vetorComputadores[*quantComputadores].nome);

            posicao = procuraComputadores(vetorComputadores, *quantComputadores, vetorComputadores[*quantComputadores].idComputador );
            if (posicao == -1)
            {
                vetorComputadores[*quantComputadores].ram = -1;
                (*quantComputadores)++;
                opcao = 0;
            }
            else
            {
                printf("\nERRO: o aluno indicado ja se encontra inscrito\n");
                opcao = lerInteiro("\nDeseja inserir novo aluno (0-Nao; 1-Sim)", 0, 1);
            }
        }
        while (opcao == 1);
    }
}

int lerDadosComputador(char nome[])
{
    int num;

    num = lerInteiro("\nNr. De identificacao", MIN_NUMID, MAX_NUMID);
    lerString("\nNome: ", nome, MAX_STRING);

    return num;
}


void mostrarDadosComputador(tipoComputador vetorComputadores[], int quantComputadores)
{
    int i;

    if (quantComputadores==0)
    {
        printf("\nATENCAO: nao existem COMPUTADORES REGISTRADOS\n\n");
    }
    else
    {
        for (i=0; i < quantComputadores; i++)
        {
            printf("\n\nComputador %d\n", i+1);
            printf("Nr de identificacao: %d\n", vetorComputadores[i].idComputador);
            printf("Nome: %s\n", vetorComputadores[i].nome);

        }
    }
}

int lerQuantidadeComputadores(void)
{
    int num;

    num = lerInteiro("\nIndique o numero de computadores registrados", 0, MAX_COMPUTADORES);

    return num;
}

int procuraComputadores(tipoComputador vetorComputadores[], int quantComputadores, int numComputador)
{
    int i, posicao=-1;

    for(i=0; i < quantComputadores; i++)
    {
        if (vetorComputadores[i].idComputador == numComputador)
        {
            posicao = i;
            i = quantComputadores;
        }
    }

    return posicao;
}
