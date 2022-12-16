#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "gestaoComputadores.h"


char menu(int quantComputadores);


int main()
{
    tipoComputador vetorComputadores[MAX_COMPUTADORES];
    int quantComputadores = 0;

    char opcao;

    do
    {
        opcao = menu(quantComputadores);
        switch (opcao)
        {
        case 'C':
            acrescentaComputadores(vetorComputadores, &quantComputadores);
            break;
        case 'A':
            break;
        case 'I':
            break;
        case 'M':
            mostrarDadosComputador(vetorComputadores, quantComputadores);
            break;
        case 'G':
            break;
        case 'L':
            break;
        case 'F':
            break;
        default:
            printf("\nERRO: opcao desconhecida\n");
        }
    }
    while (opcao != 'F');


    return 0;
}


char menu(int quantComputadores)
{
    char opcao;

    printf("\n\t\tGESTAO DA REQUISACAO DE COMPUTADORES\n");
    printf("\t\t____________________________________");
    printf("\n\n\n»»Quantidade de portateis existentes: %d\n", quantComputadores);
    printf("\n»»Quantidade total pedidos efetuados:****\n");
    printf("\n»»Quantidade total de requisicoes efetuadas:****\n");
    printf("\n»»Quantidade de requisicoes ativas:****\n");

    printf("\n\t\t MENU DE OPCOES\n");
    printf("\t\t___________________");
    printf("\n\n C- Registar Computador\n");
    printf("\n\n M- Mostrar Dados- Computador\n");



    scanf(" %c", &opcao);
    opcao = toupper(opcao);

    return opcao;
}
