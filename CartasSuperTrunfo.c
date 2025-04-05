#include <stdio.h>
#include <stdlib.h>



int main(){

char estado1 [30], estado2 [30], codigodacarta1 [30], codigodacarta2 [30], nomedacidade1 [30], nomedacidade2 [30], pais1 [50], pais2 [50];
unsigned long int populacao1, populacao2;
int pontosturisticos1, pontosturisticos2, opcao, atributo;
float area1, area2, PIB1, PIB2,D_D1, D_D2, PIBpercapita1, PIBpercapita2, SuperPoder1, SuperPoder2;

  printf("Menu Principal\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

switch ( opcao)
{ 
    case 1:

printf("\n #### SUPER TRUNFO ##### \n");


printf ("\n CARTA 1: \n");

printf ("\n ESCREVA O NOME DO PAIS:\n");
scanf ("%s", &pais1);

printf ("ESCREVA O ESTADO DA CARTA DE A-H: \n");
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

D_D1 = (float) (populacao1 / area1);
PIBpercapita1 = (PIB1 * 1e9) / (populacao1);
SuperPoder1 = populacao1 + area1 + PIB1 + pontosturisticos1 + PIBpercapita1 + (1.0 / D_D1);

printf (" \n CARTA 2: \n");

printf ("\n ESCREVA O NOME DO PAIS:\n");
scanf ("%s", &pais2);

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

D_D2 = (float) (populacao2 / area2);
PIBpercapita2 = (PIB2 * 1e9) / (populacao2);
SuperPoder2 = populacao2 + area2 + PIB2 +pontosturisticos2 + PIBpercapita2 + (1.0 / D_D2);

printf (" \n SUPER TRUNFO \n");

printf (" \n CARTA 1: \n");

printf ("PAIS: %s\n", pais1);
printf ("Estado: %s\n", estado1);
printf ("CODIGO DA CARTA: %s\n", codigodacarta1);
printf ("NOME DA CIDADE: %s\n", nomedacidade1);
printf ("POPULACAO: %lu habitantes\n", populacao1);
printf ("AREA: %.2f km²\n", area1);
printf ("PIB: %.2f BILHOES DE REAIS\n", PIB1);
printf ("PONTOS TURISTICOS: %d\n", pontosturisticos1);
printf ("DENSIDADE DEMOGRAFICA: %.2f hab/km²\n", D_D1);
printf ("PIB PER CAPITA: %.2f REAIS \n", PIBpercapita1);
printf ("SUPER PODER: %.2f \n", SuperPoder1);


printf (" \nCARTA 2: \n");

printf ("PAIS: %s\n", pais2);
printf ("Estado: %s\n", estado2);
printf ("CODIGO DA CARTA: %s\n", codigodacarta2);
printf ("NOME DA CIDADE: %s\n", nomedacidade2);
printf ("POPULACAO: %lu habitantes\n", populacao2);
printf ("AREA: %.2f km²\n", area2);
printf ("PIB: %.2f BILHÕES DE REAIS\n", PIB2);
printf ("PONTOS TURISTICOS: %d\n", pontosturisticos2);
printf ("DENSIDADE DEMOGRAFICA: %.2f hab/km²\n", D_D2);
printf ("PIB PER CAPITA: %.2f REAIS \n", PIBpercapita2);
printf ("SUPER PODER: %.2f \n", SuperPoder2);


printf (" \n COMPARAÇÃO DE CARTAS \n");

printf ("1. PAIS \n");
printf ("2. POPULÇÃO \n");
printf ("3. ÁREA \n");
printf ("4. PIB \n");
printf ("5. NUMERO DE PONTOS TURISTICOS \n");
printf ("6. DENSIDADE DEMOGRAFICA \n ");
printf ("7. PIP PER CAPITA \n");
printf ("8. SUPER PODER \n");
printf ("\n ESCOLHA QUAL ATRIBUTO DESEJA COMPARAR DENTRE AS OPÇÕES ACIMA:\n");
scanf ("%d", &atributo);

switch (atributo)
{

case 1:

printf ("\n PAIS CARTA 1: %s PAIS CARTA 2: %s . \n", pais1, pais2);
break;

case 2:

printf ("\n POPULAÇÃO:\n " , populacao1 > populacao2 );

if (populacao1 > populacao2 )
{
    printf ("PAIS CARTA 1: %s PAIS CARTA 2: %s . \n", pais1, pais2);
    printf ("CARTA 1 MAIOR QUE (>) CARTA 2:\n");
    printf ("PUPULAÇÃO CARTA 1: %d, POPULAÇÃO CARTA 2: %d. \n", populacao1, populacao2);
    printf ("CARTA 1 VENCEU\n" );
}
    else if (populacao1 < populacao2)
    {
        printf ("PAIS CARTA 1: %s PAIS CARTA 2: %s\n", pais1, pais2);
        printf ("CARTA 1 MENOR QUE (<) CARTA 2:\n");
        printf ("PUPULAÇÃO CARTA 1: %d, POPULAÇÃO CARTA 2: %d. \n", populacao1, populacao2);
        printf ("CARTA 2 VENCEU\n" );
    }
    else if (populacao1 == populacao2)
    {
        printf ("PAIS CARTA 1: %s PAIS CARTA 2: %s\n", pais1, pais2);
        printf ("CARTA 1 IGUAL (=) CARTA 2:\n");
        printf ("PUPULAÇÃO CARTA 1: %d, POPULAÇÃO CARTA 2: %d. \n", populacao1, populacao2);
        printf ("EMPATE");
    }
    break;

case 3:
printf ("AREA:" , area1 > area2 );

if ( area1 > area2 )
{
        printf ("PAIS CARTA 1: %s PAIS CARTA 2: %s\n", pais1, pais2);
        printf ("CARTA 1 MAIOR QUE (>) CARTA 2:\n");
        printf ("ÁREA CARTA 1: %d, ÁREA CARTA 2: %d. \n", area1, area2);
        printf ("CARTA 2 VENCEU\n" );
    }
    else if (area1 < area2)
    {
        printf ("PAIS CARTA 1: %s PAIS CARTA 2: %s\n", pais1, pais2);
        printf ("CARTA 1 MENOR QUE (<) CARTA 2:\n");
        printf ("ÁREA CARTA 1: %d, ÁREA CARTA 2: %d. \n", area1, area2);
        printf ("CARTA 2 VENCEU\n" );
    }
    else if (area1 == area2)
    {
        printf ("PAIS CARTA 1: %s PAIS CARTA 2: %s\n", pais1, pais2);
        printf ("CARTA 1 IGUAL (=) CARTA 2:\n");
        printf ("ÁREA CARTA 1: %d, ÁREA CARTA 2: %d. \n", area1, area2);
        printf ("EMPATE");
    }
    break;

case 4:
printf ("PIB: (%d) " , PIB1 > PIB2 );

if ( PIB1 > PIB2 )
{
        printf ("PAIS CARTA 1: %s PAIS CARTA 2: %s\n", pais1, pais2);
        printf ("CARTA 1 MAIOR QUE (>) CARTA 2:\n");
        printf ("PIB CARTA 1: %d, PIB CARTA 2: %d. \n", PIB1, PIB2);
        printf ("CARTA 2 VENCEU\n" );
    }
    else if ( PIB1 < PIB2)
    {
        printf ("PAIS CARTA 1: %s PAIS CARTA 2: %s\n", pais1, pais2);
        printf ("CARTA 1 MENOR QUE (<) CARTA 2:\n");
        printf ("PIB CARTA 1: %d, PIB CARTA 2: %d. \n", PIB1, PIB2);
        printf ("CARTA 2 VENCEU\n" );
    }
    else if ( PIB1 == PIB2)
    {
        printf ("PAIS CARTA 1: %s PAIS CARTA 2: %s\n", pais1, pais2);
        printf ("CARTA 1 IGUAL (=) CARTA 2:\n");
        printf ("PIB CARTA 1: %d, PIB CARTA 2: %d. \n", PIB1, PIB2);
        printf ("EMPATE");
    }
    break;

case 5:
printf ("PONTOS TURISTICOS: (%d) " , pontosturisticos1 > pontosturisticos2 );

if ( pontosturisticos1 > pontosturisticos2 )
{
    printf ("PAIS CARTA 1: %s PAIS CARTA 2: %s\n", pais1, pais2);
        printf ("CARTA 1 MAIOR QUE (>) CARTA 2:\n");
        printf ("PONTOS TURISTICOS CARTA 1: %d, PONTOS TURISTICOS CARTA 2: %d. \n", pontosturisticos1, pontosturisticos2);
        printf ("CARTA 2 VENCEU\n" );
    }
    else if ( pontosturisticos1 < pontosturisticos2)
    {
        printf ("PAIS CARTA 1: %s PAIS CARTA 2: %s\n", pais1, pais2);
        printf ("CARTA 1 MENOR QUE (<) CARTA 2:\n");
        printf ("PONTOS TURISTICOS CARTA 1: %d, PONTOS TURISTICOS CARTA 2: %d. \n", pontosturisticos1, pontosturisticos2);
        printf ("CARTA 2 VENCEU\n" );
    }
    else if ( pontosturisticos1 == pontosturisticos2)
    {
        printf ("PAIS CARTA 1: %s PAIS CARTA 2: %s\n", pais1, pais2);
        printf ("CARTA 1 IGUAL (=) CARTA 2:\n");
        printf ("PONTOS TURISTICOS CARTA 1: %d, PONTOS TURISTICOS CARTA 2: %d. \n", pontosturisticos1, pontosturisticos2);
        printf ("EMPATE");
    }
    break;

case 6:
printf ("DENSIDADE DEMOGRAFICA: (%d) " , D_D1 < D_D2 );

if ( D_D1 < D_D2 )
{
    printf ("PAIS CARTA 1: %s PAIS CARTA 2: %s\n", pais1, pais2);
        printf ("CARTA 1 MENOR QUE (<) CARTA 2:\n");
        printf ("DENSIDADE DEMOGRAFICA CARTA 1: %d, DENSIDADE DEMOGRAFICA CARTA 2: %d. \n", D_D1, D_D2);
        printf ("CARTA 1 VENCEU\n" );
    }
    else if ( D_D1 > D_D2)
    {
        printf ("PAIS CARTA 1: %s PAIS CARTA 2: %s\n", pais1, pais2);
        printf ("CARTA 1 MAIOR QUE (>) CARTA 2:\n");
        printf ("DENSIDADE DEMOGRAFICA CARTA 1: %d, DENSIDADE DEMOGRAFICA CARTA 2: %d. \n", D_D1, D_D2);
        printf ("CARTA 2 VENCEU\n" );
    }
    else if ( D_D1 == D_D2)
    {
        printf ("PAIS CARTA 1: %s PAIS CARTA 2: %s\n", pais1, pais2);
        printf ("CARTA 1 IGUAL (=) CARTA 2:\n");
        printf ("DENSIDADE DEMOGRAFICA CARTA 1: %d, DENSIDADE DEMOGRAFICA CARTA 2: %d. \n", D_D1, D_D2);
        printf ("EMPATE");
    }
    break;

case 7:
printf ("PIB PER CAPITA: (%d) " , PIBpercapita1 > PIBpercapita2 );

if ( PIBpercapita1 > PIBpercapita2 )
{
    printf ("PAIS CARTA 1: %s PAIS CARTA 2: %s\n", pais1, pais2);
        printf ("CARTA 1 MAIOR QUE (>) CARTA 2:\n");
        printf ("PIP PER CAPITA CARTA 1: %d, PIB PER CAPITA CARTA 2: %d. \n", PIBpercapita1, PIBpercapita2);
        printf ("CARTA 2 VENCEU\n" );
    }
    else if ( PIBpercapita1 < PIBpercapita2)
    {
        printf ("PAIS CARTA 1: %s PAIS CARTA 2: %s\n", pais1, pais2);
        printf ("CARTA 1 MENOR QUE (<) CARTA 2:\n");
        printf ("PIB PER CAPITA CARTA 1: %d, PIB PER CAPITA 2: %d. \n", PIBpercapita1, PIBpercapita2);
        printf ("CARTA 2 VENCEU\n" );
    
    }
    else if ( PIBpercapita1 == PIBpercapita2)
    {
        printf ("PAIS CARTA 1: %s PAIS CARTA 2: %s\n", pais1, pais2);
        printf ("CARTA 1 IGUAL (=) CARTA 2:\n");
        printf ("PIP PER CAPITA CARTA 1: %d, PIP PER CAPITA CARTA 2: %d. \n", PIBpercapita1, PIBpercapita2);
        printf ("EMPATE");
    }
    break;

case 8:
printf ("SUPER PODER: (%d) " , SuperPoder1 > SuperPoder2 );

if (SuperPoder1 > SuperPoder2)
{
    printf ("PAIS CARTA 1: %s PAIS CARTA 2: %s\n", pais1, pais2);
        printf ("CARTA 1 MAIOR QUE (>) CARTA 2:\n");
        printf ("SUPER PODER CARTA 1: %d, SUPER PODER CARTA 2: %d. \n", SuperPoder1, SuperPoder2);
        printf ("CARTA 2 VENCEU\n" );
    }
    else if ( SuperPoder1 < SuperPoder2)
    {
        printf ("PAIS CARTA 1: %s PAIS CARTA 2: %s\n", pais1, pais2);
        printf ("CARTA 1 MENOR QUE (<) CARTA 2:\n");
        printf ("SUPER PODER CARTA 1: %d, SUPER PODER CAPITA 2: %d. \n", SuperPoder1, SuperPoder2);
        printf ("CARTA 2 VENCEU\n" );
    }
    else if ( SuperPoder1 == SuperPoder2)
    {
        printf ("PAIS CARTA 1: %s PAIS CARTA 2: %s\n", pais1, pais2);
        printf ("CARTA 1 IGUAL (=) CARTA 2:\n");
        printf ("SUPER PODER CARTA 1: %d, SUPER PODER CARTA 2: %d. \n", SuperPoder1, SuperPoder2);
        printf ("EMPATE"); 
    break;
}
} break;
case 2:

printf ("\n ************** REGRAS **************\n");
printf ("\n 1. CADASTRE AS CARTAS.\n 2. ESCOLHA QUAL ATRIBUTO DESEJA COMPARAR COM O ADVERSARIO.\n");
break;

case 3:
printf ("\n ###################### ATÉ A PRÓXIMA #####################\n \n");
    
    printf   ("**********         ****       ****     *************\n");
    printf   ("**********          ***       ***      *************\n");
    printf   ("**        ***        ***     ***       ***\n");
    printf   ("**        ***         ***   ***        ***\n");
    printf   ("**********              *****          ********\n");
    printf   ("**********               ***           ********\n");
    printf   ("**        ***            ***           ***\n");
    printf   ("**        ***            ***           ***\n");
    printf   ("**********               ***           *************\n");
    printf   ("**********               ***           *************\n");
    break;
}
    return 0;
}