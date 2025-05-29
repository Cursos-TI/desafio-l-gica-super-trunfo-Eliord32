#include <stdio.h>
int main(){

    printf(" ***Super Trunfo*** \n");
    char estado[20];
    char codigo[5];
    char cidade[20];
    int populacao;
    float area;
    float PIB;
    int  pontos;
    float divisao1, divisao2, divisao3, divisao4;

   
    // cadastro da carta 01
    printf("Digite seu estado: \n");
    scanf("%s", &estado);

    printf("Digite seu codigo: \n");
    scanf("%s", &codigo);

    printf("Digite sua cidade: \n");
    scanf("%s", &cidade);

    printf("Digite sua populacao: \n");
    scanf("%d", &populacao);

    printf("Digite sua area: \n");
    scanf("%f", &area);

    printf("Digite seu PIB: \n");
    scanf("%d", &PIB);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos);
    
    // Divisão da polulação, Àrea e PIB e da carta vencedora
    divisao1 =  populacao / area;
    divisao2 =  PIB / populacao;
    divisao2 > divisao4;

    
    //  Carta 01 cadastrada
    printf("Carta 1! \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Cidade: %s \n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %d \n", PIB);
    printf("Número de Pontos Turísticos %d \n", pontos);
    printf("Densidade Populacional: %.3f \n", divisao1);
    printf("PIB per Capita: %f \n", divisao2);
   

    // Cadastro da carta 2
    printf("Digite seu estado: \n");
    scanf("%s", &estado);

    printf("Digite seu código: \n");
    scanf("%s", &codigo);

    printf("Digite sua cidade: \n");
    scanf("%s", &cidade);

    printf("Digite sua populacao: \n");
    scanf("%lu", &populacao);

    printf("Digite sua area: \n");
    scanf("%f", &area);

    printf("Digite seu PIB: \n");
    scanf("%f", &PIB);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos);

    // Divisão da polulação, Àrea e PIB
    divisao3 = populacao / area;
    divisao4 = PIB / populacao;
    divisao2 > divisao4;

    // Carta 02 cadastrada
    printf("Carta: 2! \n");
    printf("Estado: %s \n", estado);
    printf("Código da Carta: %s \n", codigo);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %d \n", PIB);
    printf("Número de Pontos Turísticos %d \n", pontos);
    printf("Densidade Populacional: %.3f \n", divisao3);
    printf("PIB per Capita: %d \n", divisao4);
    //Pontos das cartas 
    printf ("Pontos da carta 01 (%d) Pontos da carta 02 (%d)\n", divisao2, divisao4);
    //Uso do if else para mostrar quem foi a carta vencedora. 
    if (divisao2 > divisao4){
        printf ("A carta 01 venceu");

    } else {
        printf(" A carta 02 venceu");
    }
       
    
    return 0;

    
        
    }
    


  