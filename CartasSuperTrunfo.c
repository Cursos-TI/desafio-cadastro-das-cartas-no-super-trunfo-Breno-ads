#include <stdio.h>



int main() {

char estado1 [30], estado2 [30], codigodacarta1 [30], codigodacarta2 [30], nomedacidade1 [30], nomedacidade2 [30];
int populacao1, populacao2, pontosturisticos1, pontosturisticos2;
float area1, area2, PIB1, PIB2;

printf("SUPER TRUNFO\n");

printf ("CARTA 1: \n");

printf ("ESCREVA O ESTADO DA CARTA DE A-H: \n");
scanf (" %s", &estado1);

printf ("ESCREVA O CODIGO DA CIDADE:\n");
scanf ("%s", &codigodacarta1);

printf ("ESCREVA O NOME DA CIDADE: \n");
scanf ("%s", &nomedacidade1);

printf ("ESCREVA A POPULACAO DA CIDADE: \n ");
scanf (" %d", &populacao1);

printf ("ESCREVA A AREA DA CIDADE: \n ");
scanf (" %f", &area1);

printf ("ESCREVA O PIB DA CIDADE: \n");
scanf (" %f" , &PIB1);

printf ("QUANTIDADE DE PONTOS TURISTICOS DA CIDADE: \n");
scanf ("%d", &pontosturisticos1);

printf ("CARTA 2: \n");

printf ("ESCREVA O ESTADO DA CARTA DE A-H: \n");
scanf (" %s", &estado2);

printf ("ESCREVA O CODIGO DA CIDADE:\n");
scanf ("%s", &codigodacarta2);

printf ("ESCREVA O NOME DA CIDADE: \n");
scanf ("%s", &nomedacidade2);

printf ("ESCREVA A POPULACAO DA CIDADE: \n ");
scanf (" %d", &populacao2);

printf ("ESCREVA A AREA DA CIDADE: \n ");
scanf (" %f", &area2);

printf ("ESCREVA O PIB DA CIDADE: \n");
scanf (" %f" , &PIB2);

printf ("QUANTIDADE DE PONTOS TURISTICOS DA CIDADE: \n");
scanf ("%d", &pontosturisticos2);

printf ("SUPER TRUNFO \n");

printf ("CARTA 1: \n");

printf("Estado: %s\n", estado1);
printf("CODIGO DA CARTA: %s\n", codigodacarta1);
printf("NOME DA CIDADE: %s\n", nomedacidade1);
printf("POPULACAO: %.d habitantes\n", populacao1);
printf("AREA: %.3f km²\n", area1);
printf("PIB: %.3f\n", PIB1);
printf("PONTOS TURISTICOS: %d\n", pontosturisticos1);

printf ("CARTA 2: \n");

printf("Estado: %s\n", estado2);
printf("CODIGO DA CARTA: %s\n", codigodacarta2);
printf("NOME DA CIDADE: %s\n", nomedacidade2);
printf("POPULACAO: %.d habitantes\n", populacao2);
printf("AREA: %.3f km²\n", area2);
printf("PIB: %.3f\n", PIB2);
printf("PONTOS TURISTICOS: %d\n", pontosturisticos2);

    return 0;
}
