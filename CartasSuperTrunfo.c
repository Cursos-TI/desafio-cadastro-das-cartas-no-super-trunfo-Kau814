#include <stdio.h>

int main(){

    int NPT;
    int populacao;
    float KM, PIB;
    char estado;
    char cidade[20];
    char codigo[5];

    printf("*** Bem vindo ao Super Trunfo! ***\n");


    printf("Digite o Estado da Carta 1: \n");
    scanf("%s", &estado);
    printf("Digite o nome da Cidade da carta 1: \n");
    scanf("%s", &cidade);
    printf("Digite o códido da Carta 1: \n");
    scanf("%s", &codigo);
    printf("Digite a área em KM² da Carta 1: \n");
    scanf("%f", &KM);
    printf("Digite a População da Carta 1: \n");
    scanf("%f", &populacao);
    printf("Digite a quantia de Pontos Turísticos da Carta 1: \n");
    scanf("%d", &NPT);
    printf("Digite o PIB da sua Carta 1: \n");
    scanf("%f", &PIB);



    printf("Digite o Estado da Carta 2: \n");
    scanf("%s", &estado);
    printf("Digite o nome da Cidade da carta 2: \n");
    scanf("%s", &cidade);
    printf("Digite o códido da Carta 2: \n");
    scanf("%s", &codigo);
    printf("Digite a área em KM² da Carta 2: \n");
    scanf("%f", &KM);
    printf("Digite a População da Carta 2: \n");
    scanf("%f", &populacao);
    printf("Digite a quantia de Pontos Turísticos da Carta 2: \n");
    scanf("%d", &NPT);
    printf("Digite o PIB da sua Carta 2: \n");
    scanf("%f", &PIB);

    return 0;

}