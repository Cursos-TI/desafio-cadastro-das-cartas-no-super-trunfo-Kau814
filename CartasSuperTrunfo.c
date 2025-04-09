#include <stdio.h>

int main(){

    int NPT;
    int populacao;
    float KM, PIB;
    char estado;
    char cidade[20];
    char codigo[5];
    float media1, media2, supertrunfo1, supertrunfo2;

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

    media1 = (populacao / KM);
    printf("A Densidade populacional da carta 1 é: %.2f HAB/KM²\n", media1 );
    media2 = (PIB / populacao);
    printf("O PIB per Capita da carta 1 é: %2.f Reais\n", media2);




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

    media1 = (populacao / KM);
    printf("A Densidade populacional da carta 2 é: %.2f HAB/KM²\n", media1 );
    media2 = (PIB / populacao);
    printf("O PIB per Capita da carta 2 é: %2.f Reais\n", media2);


    printf("Carta 1 > Carta 2: %d\n", supertrunfo1 > supertrunfo2);
    printf("Carta 1 < Carta 2: %d\n", supertrunfo1 < supertrunfo2);





    return 0;

}