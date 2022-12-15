#ifndef FUNCOESGENERICAS_H_INCLUDED
#define FUNCOESGENERICAS_H_INCLUDED

#define RESIDENCIAS 0
#define CAMPUS1 1
#define CAMPUS2 2
#define CAMPUS5 5
#define MIN_ANO 2000
#define MAX_ANO 2024


typedef struct
{
    int ano;
    int mes;
    int dia;

}   tipoData;

tipoData lerData (char msg[]);
void limparBuffer(void);
int lerInteiro (char msg[], int limMin, int limMax);
void lerString(char mensagem[], char vetorCaracteres[], int maximoCaracteres);



#endif // FUNCOESGENERICAS_H_INCLUDED
