#include <string.h>
#include <stdio.h>

#include "funcoesGenericas.h"

int lerInteiro (char msg[], int limMin, int limMax)
{
    int num, controlo;

    do
    {
        printf("%s [%d, %d]: ", msg, limMin, limMax);
        controlo = scanf("%d", &num);
        limparBuffer();

        if (controlo != 1)
        {
            printf("ERRO: o valor inseridp nao e numerico\n");

        }
        else
        {
            if(num < limMin || num > limMax)
            {
                printf("ERRO: o numero nao pertence ao intervalo");
            }
        }
    }
    while (controlo != 1 || num < limMin || num > limMax);

    return num;
}

void lerString(char mensagem[], char vetorCaracteres[], int maximoCaracteres)
{
    int tamanhoString;

    do
    {
        printf("%s", mensagem);
        fgets(vetorCaracteres, maximoCaracteres, stdin);

        tamanhoString = strlen(vetorCaracteres);

        if (tamanhoString == 1)
        {
            printf("Nao foram introduzidos caracteres!!! . apenas carregou no ENTER \n\n");
        }

    }
    while (tamanhoString == 1);

    if(vetorCaracteres[tamanhoString-1] != '\n')
    {
        limparBuffer();
    }
    else
    {
        vetorCaracteres[tamanhoString-1] = '\0';
    }

}

tipoData lerData (char msg[])
{
    tipoData data;
    int controlo, maxDia;

    do
    {
        printf("%s(dd--mm--aaaa): ", msg);
        controlo = scanf("%d--%d--%d", &data.dia, &data.mes, &data.ano);
        limparBuffer();

        if (controlo != 3)
        {
            printf("ERRO: estrutura da data incorreta");
        }
        else
        {
            if(data.ano < MIN_ANO || data.ano > MAX_ANO)
            {
                printf("\n ERRO: ano invalido. o ano devera pertencer ao intervalo[%d, %d]\n", MIN_ANO, MAX_ANO);

            }
            else
            {
                switch(data.mes)
                {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    maxDia = 31;
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    maxDia = 30;
                    break;
                case 2:
                    if (data.ano % 400 == 0 || (data.ano % 4 == 0 && data.ano % 100 != 0))
                    {
                        maxDia = 29;
                    }
                    else
                    {
                        maxDia = 28;
                    }
                    break;
                default:
                    printf("\n\nERRO: mes incorreto\n\n");
                    maxDia = 31;

                }
                if(data.dia < 1 || data.dia > maxDia)
                {
                    printf("\n\n ERRO: dia incorreto, devera pertencer ao intervalo [%d, %d]\n\n", 1, maxDia);
                }
            }
        }
    }
    while (controlo != 3 ||data.ano < MIN_ANO || data.ano > MAX_ANO ||data.mes < 1 || data.mes > 12 ||data.dia < 1 || data.dia > maxDia);

    return data;
}

void escreverData(tipoData data)
{
    printf("%02d-%02d-%d", data.dia, data.mes, data.ano);
}



void limparBuffer(void)
{

    char letra;

    do
    {
        letra = getchar();
    }
    while (letra != '\n' && letra != EOF);
}
