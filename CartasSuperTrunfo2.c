#include <stdio.h>
int main(){

    char estado1[1];
    char codigo1[3];
    char cidade1[30];
    int populacao1;
    int numero1;
    float densidade1;
    float area1;
    float pib1;
    float pibcapita1;



    char estado2[1];
    char codigo2[3];
    char cidade2[30];
    int populacao2;
    int numero2;
    float densidade2;
    float area2;
    float pib2;
    float pibcapita2;

printf("Dados para serem inseridos da carta 01:\n");

printf("Qual o estado: ");
scanf("%s", &estado1);

printf("Qual o codigo da carta: ");
scanf("%s", &codigo1);

printf("Qual a cidade: ");
scanf("%s", &cidade1);

printf(" Qual a populacao: ");
scanf("%d", &populacao1);

printf("Qual a area: ");
scanf("%f", &area1);

printf("Qual o pib: ");
scanf("%f", &pib1);

printf("numero de ponto turisticos: ");
scanf("%d", &numero1);

densidade1 = populacao1/area1;

printf("Entre com a população: \n");
scanf("%f", &populacao1);
printf("Entre com a area: \n");
scanf("%f", &area1);

pibcapita1 = pib1/populacao1;

printf("Entre com a pib \n");
scanf("%f", &pib1);
printf("Entre com a populacao1 \n");
scanf("%f", &populacao1);
 
printf("Dados para serem inseridos da carta 02: \n");

printf("Qual o estado: ");
scanf("%s", &estado2);

printf("Qual o codigo da carta: ");
scanf("%s",&codigo2);

printf("Qual a cidade: ");
scanf("%s", &cidade2);

printf("Qual a populacao: ");
scanf("%d", &populacao2);

printf("Qual a area: ");
scanf("%f", &area2);

printf("Qual o pib: ");
scanf("%f", &pib2);

printf("numero de ponto turisticos: ");
scanf("%d", &numero2);

densidade2 = populacao2/area2;

printf("Entre com a população: \n");
scanf("%f", &populacao1);
printf("Entre com a area: \n");
scanf("%f", &area1);

printf("Entre com a pib \n");
scanf("%f", &pib2);
printf("Entre com a populacao2 \n");
scanf("%f", &populacao2);




printf("*-------------------------------------*\n");

printf("Dados da Carta 01:\n");
printf("O estado1 é: %s\n", estado1);
printf("O codigo1 é: %s\n", codigo1);
printf("A cidade1 é: %s\n", cidade1);
printf("A populacao1 é: %d\n", populacao1);
printf("A area1 é: %f\n", area1);
printf("O pib1 é: %f\n", pib1);
printf("O numero1 é:%d\n", numero1);
printf("Densidade Populacional é:%f\n", densidade1);
printf("PIB per Capita é:%f\n", pib1/populacao1);

printf("*-------------------------------------*\n");

printf("Dados da Carta 02:\n");
printf("O estado2 é: %s\n", estado2);
printf("O codigo2 é: %s\n", codigo2);
printf("A cidade2 é: %s\n", cidade2);
printf("A populacao2 é: %d\n", populacao2);
printf("A area2 é: %f\n", area2);
printf("O pib2 é: %f\n", pib2);
printf("O numero2 é:%d\n", numero2);
printf("Densidade Populacional é:%f\n", densidade2);
printf("PIB per Capita é:%f\n", pib2/populacao2);

}
