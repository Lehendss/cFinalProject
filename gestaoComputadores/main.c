#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "gestaoComputadores.h"


char menu();

int main()
{

    char opcao;

    do
    {
        opcao = menu();
        switch (opcao)
        {
        case 'C':
            //lerDadosComputadores();//
            break;
        case 'A':
            break;
        case 'I':
            break;
        case 'M':
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


char menu()
{
    char opcao;

    printf("\n\t\tGESTAO DA REQUISACAO DE COMPUTADORES\n");
    printf("\t\t____________________________________");
    printf("\n\n\n»»Quantidade de portateis existentes: %d\n", MAX_COMPUTADORES);
    printf("\n»»Quantidade total pedidos efetuados:****\n");
    printf("\n»»Quantidade total de requisicoes efetuadas:****\n");
    printf("\n»»Quantidade de requisicoes ativas:****\n");

    printf("\n\n C- Registar Computador\n");


    scanf(" %c", &opcao);
    opcao = toupper(opcao);

    return opcao;
}
