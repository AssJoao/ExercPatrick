/*
#include <stdio.h>
#include <stdlib.h>

typedef struct data {
int dia;
int mes;
char nomeMes[12];
} Data;
main()
{
Data aniversarios[3] = { {5,1,"JANEIRO"},
{4,2,"FEVEREIRO"},{10,3,"MAIO"} };
int a;
Data *p_dt;
p_dt=&aniversarios[2];
printf("Nome do m�s %d �: %s.", p_dt->mes, p_dt->nomeMes);
strcpy(p_dt->nomeMes, "MAR�O");
printf("\nN�mero de letras : %d=", strlen(p_dt->nomeMes)); // Imprime o valor de 5, pois no aniversario[2] o valor "Maio" � subscrito por "Mar�o" que tem 5 letras
Data p_dt2 = (Data *) malloc(sizeof(Data)); // O correto seria Data * p_dt2 = (Data *) malloc (sizeof(Data));
p_dt2 = &aniversario[0];


*/
