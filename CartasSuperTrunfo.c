#include <stdio.h>



int main(){

char estado1 [30], estado2 [30], codigodacarta1 [30], codigodacarta2 [30], nomedacidade1 [30], nomedacidade2 [30];
unsigned long int populacao1, populacao2;
int pontosturisticos1, pontosturisticos2;
float area1, area2, PIB1, PIB2,D_P1, D_P2, PIBpercapita1, PIBpercapita2, SuperPoder1, SuperPoder2;


printf("\n SUPER TRUNFO \n");


printf ("\n CARTA 1: \n");


printf ("\n ESCREVA O ESTADO DA CARTA DE A-H: \n");
scanf ("%s", &estado1);

printf ("ESCREVA O CODIGO DA CIDADE, (estado + nº de 1-4):\n");
scanf ("%s", &codigodacarta1);

printf ("ESCREVA O NOME DA CIDADE: \n");
scanf ("%s", &nomedacidade1);

printf ("ESCREVA A POPULACAO DA CIDADE: \n ");
scanf ("%lu", &populacao1);

printf ("ESCREVA A AREA DA CIDADE: \n ");
scanf ("%f", &area1);

printf ("ESCREVA O PIB DA CIDADE: \n");
scanf ("%f" , &PIB1);

printf ("QUANTIDADE DE PONTOS TURISTICOS DA CIDADE: \n");
scanf ("%d", &pontosturisticos1);

D_P1 = (float) (populacao1 / area1);
PIBpercapita1 = (PIB1 * 1e9) / (populacao1);
SuperPoder1 = populacao1 + area1 + PIB1 + pontosturisticos1 + PIBpercapita1 + (1.0 / D_P1);

printf (" \n CARTA 2: \n");

printf (" \n ESCREVA O ESTADO DA CARTA DE A-H: \n");
scanf ("%s", &estado2);

printf ("ESCREVA O CODIGO DA CIDADE, (estado + nº de 1-4): \n");
scanf ("%s", &codigodacarta2);

printf ("ESCREVA O NOME DA CIDADE: \n");
scanf ("%s", &nomedacidade2);

printf ("ESCREVA A POPULACAO DA CIDADE: \n ");
scanf ("%lu", &populacao2);

printf ("ESCREVA A AREA DA CIDADE: \n ");
scanf ("%f", &area2);

printf ("ESCREVA O PIB DA CIDADE: \n");
scanf ("%f" , &PIB2);

printf ("QUANTIDADE DE PONTOS TURISTICOS DA CIDADE: \n");
scanf ("%d", &pontosturisticos2);

D_P2 = (float) (populacao2 / area2);
PIBpercapita2 = (PIB2 * 1e9) / (populacao2);
SuperPoder2 = populacao2 + area2 + PIB2 +pontosturisticos2 + PIBpercapita2 + (1.0 / D_P2);

printf (" \n SUPER TRUNFO \n");

printf (" \n CARTA 1: \n");

printf("Estado: %s\n", estado1);
printf("CODIGO DA CARTA: %s\n", codigodacarta1);
printf("NOME DA CIDADE: %s\n", nomedacidade1);
printf("POPULACAO: %lu habitantes\n", populacao1);
printf("AREA: %.2f km²\n", area1);
printf("PIB: %.2f BILHOES DE REAIS\n", PIB1);
printf("PONTOS TURISTICOS: %d\n", pontosturisticos1);
printf ("DENSIDADE POPULACIONAL: %.2f hab/km²\n", D_P1);
printf ("PIB PER CAPITA: %.2f REAIS \n", PIBpercapita1);
printf ("SUPER PODER: %.2f \n", SuperPoder1);


printf (" \nCARTA 2: \n");

printf("Estado: %s\n", estado2);
printf("CODIGO DA CARTA: %s\n", codigodacarta2);
printf("NOME DA CIDADE: %s\n", nomedacidade2);
printf("POPULACAO: %lu habitantes\n", populacao2);
printf("AREA: %.2f km²\n", area2);
printf("PIB: %.2f BILHÕES DE REAIS\n", PIB2);
printf("PONTOS TURISTICOS: %d\n", pontosturisticos2);
printf ("DENSIDADE POPULACIONAL: %.2f hab/km²\n", D_P2);
printf ("PIB PER CAPITA: %.2f REAIS \n", PIBpercapita2);
printf ("SUPER PODER: %.2f \n", SuperPoder2);


printf (" \n COMPARAÇÃO DE CARTAS \n");


printf (" \n POPULAÇÃO: (%d) " , populacao1 > populacao2 );

if ( populacao1 > populacao2 )
{
    printf ( "CARTA 1 VENCEU\n" );
    }
    else
    {
    printf ( "CARTA 2 VENCEU\n" );
    }

printf ("AREA: (%d) " , area1 > area2 );

if ( area1 > area2 )
{
    printf ( "CARTA 1 VENCEU\n" );
    }
    else
    {
    printf ( "CARTA 2 VENCEU\n" );
    }

printf ("PIB: (%d) " , PIB1 > PIB2 );

if ( PIB1 > PIB2 )
{
    printf ( "CARTA 1 VENCEU\n" );
    }
    else
    {
    printf ( "CARTA 2 VENCEU\n" );
    }

printf ("PONTOS TURISTICOS: (%d) " , pontosturisticos1 > pontosturisticos2 );

if ( pontosturisticos1 > pontosturisticos2 )
{
    printf ( "CARTA 1 VENCEU\n" );
    }
    else
    {
    printf ( "CARTA 2 VENCEU\n" );
    }

printf ("DENSIDADE POPULACIONAL: (%d) " , D_P1 < D_P2 );

if ( D_P1 < D_P2 )
{
    printf ( "CARTA 1 VENCEU\n" );
    }
    else
    {
    printf ( "CARTA 2 VENCEU\n" );
    }

printf ("PIB PER CAPITA: (%d) " , PIBpercapita1 > PIBpercapita2 );

if ( PIBpercapita1 > PIBpercapita2 )
{
    printf ( "CARTA 1 VENCEU\n" );
    }
    else
    {
    printf ( "CARTA 2 VENCEU\n" );
    }

printf ("SUPER PODER: (%d) " , SuperPoder1 > SuperPoder2 );

if (SuperPoder1 > SuperPoder2)
{
    printf ( "CARTA 1 VENCEU\n" );
    }
    else
    {
    printf ( "CARTA 2 VENCEU\n" );
    }



return 0;
}