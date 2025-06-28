#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    // Variáveis para armazenar os nomes das cidades.

    // Cidade 1 
    char estado1 [10] = "A";
    char codigo1 [5] = "01"; // Código da Cidade. Ex: A01, A02...
    char cidade1 [20] = "Blumenau"; // Nome da Cidade.
    unsigned long int populacao1 = 12325000; // População da cidade
    float area1 = 1521.11; // Área da cidade em km2
    float pib1 = 699.28; // PIB da cidade em bilhões
    int turistico1 = 50; // Número de pontos turísticos
    float densidade1; // Calculado como população / área
    float capita1; // Calculado como PIB / população
    float poder1; // Soma de população, área, pib, pib per capita, densidade invertida e número de pontos turísticos.

    // Cidade 2
    char estado2 [10] = "B";
    char codigo2 [5] = "02";
    char cidade2 [20] = "Fortaleza";
    unsigned long int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int turistico2 = 150;
    float densidade2;
    float capita2;
    float poder2;

    // Cidade para cadastro
    char estado0 [10];
    char codigo0 [5];
    char cidade0 [20];
    unsigned long int populacao0;
    float area0;
    float pib0;
    int turistico0;
    float densidade0;
    float capita0;
    float poder0;

    // Carta 0
    poder0 = populacao0 + area0 + pib0 + capita0 + turistico0 + densidade0; // Cálculo do super poder
    densidade0 = 1 / populacao0 / area0;// Cálculo Densidade
    capita0 = pib0 / populacao0; // Cálculo  PIB per capita

    // Carta 1
    poder1 = populacao1 + area1 + pib1 + capita1 + turistico1 + densidade1; // Cálculo do super poder
    densidade1 = 1 / populacao1 / area1;// Cálculo Densidade
    capita1 = pib1 / populacao1; // Cálculo  PIB per capita

    // Carta 2
    poder2 = populacao2 + area2 + pib2 + capita2 + turistico2 + densidade2; // Cálculo do super poder
    densidade2 = 1 / populacao2 / area2; // Cálculo Densidade 
    capita2 = pib2 / populacao2; // Cálculo PiB per capita

    // Comparar 2 Cartas
    int resultado1, resultado2, resultado3, resultado4;
    char primeiroAtributo, segundoAtributo, terceiroAtributo, quartoAtributo;
    int somar1, somar2;

    // Gerar número aleatório
    //srand(time(0));
   // ataque1 = rand() % 100 + 1; // Número entre 1 e 100
    //ataque2 = rand() % 100 + 1; // Número entre 1 e 100
   // defesa1 = rand() % 100 + 1; // Número entre 1 e 100
   // defesa2 = rand() % 100 + 1; // Número entre 1 e 100
   // recuo1 = rand() % 100 + 1; // Número entre 1 e 100
   // recuo2 = rand() % 100 + 1; // Número entre 1 e 100

    int opcao;
    int jogo;

    printf("*** Super Trunfo ***\n");
    printf("Escolha uma opção:\n");
    printf("1. Comparar 1 Carta\n");
    printf("2. Comparar 2 Cartas\n");
    printf("3. Cadastrar Carta\n");
    printf("4. Regras do Jogo:\n");
    printf("5. Sair\n");
    printf("Escolha:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("*** Comparar 1 Carta ***\n");
        printf("1.População\n");
        printf("2.Área\n");
        printf("3.PIB\n");
        printf("4.Pontos Turísticos\n");
        printf("5.Densidade\n");
        printf("6.Capita\n");
        printf("7.Poder\n");
        printf("Escolha:\n");
        scanf("%d", &jogo);

        switch (jogo)
        {
        case 1:
            printf("*** Comparação População ***\n");
            printf("Carta 1: %u\n", populacao1);
            printf("Carta 2: %u\n", populacao2);

            if (populacao1 > populacao2)
            {
                printf("*** Carta 1 Venceu ***!");
            } else if (populacao1 < populacao2){
                printf("*** Carta 2 Venceu! ***");
            } else {
                printf ("*** Empate! ***");
            }
            
            break;
        case 2:
            printf("*** Comparação Área ***\n");
            printf("Carta 1: %.2f\n", area1);
            printf("Carta 2: %.2f\n", area2);

            if (area1 > area2)
            {
                printf("*** Carta 1 Venceu! ***");
            } else if (area1 < area2){
                printf("*** Carta 2 Venceu! ***");
            } else {
                printf ("*** Empate! ***");
            }
            break;
        case 3:
            printf("*** Comparação PIB ***\n");
            printf("Carta 1: %.2f\n", pib1);
            printf("Carta 2: %.2f\n", pib2);

            if (pib1 > pib2)
            {
                printf("*** Carta 1 Venceu! ***");
            } else if (pib1 < pib2){
                printf("*** Carta 2 Venceu! ***");
            } else {
                printf ("*** Empate! ***");
            }
            break;
        case 4:
            printf("*** Comparação Pontos Turísticos ***\n");
            printf("Carta 1: %d\n", turistico1);
            printf("Carta 2: %d\n", turistico2);

            if (turistico1 > turistico2)
            {
                printf("*** Carta 1 Venceu! ***");
            } else if (turistico1 < turistico2){
               printf("*** Carta 2 Venceu! ***");
            } else {
                printf ("*** Empate! ***");
            }
            break;
        case 5:
            printf("*** Comparação Densidade Populacional ***\n");
            printf("Carta 1: %.2f\n", densidade1);
            printf("Carta 2: %.2f\n", densidade2);

            if (densidade1 < densidade2)
            {
                printf("*** Carta 1 Venceu! ***");
            } else if (densidade1 > densidade2){
                printf("*** Carta 2 Venceu! ***");
            } else {
                printf ("*** Empate! ***");
            }
            break;
        case 6:
            printf("*** Comparação PIB per Capita ***\n");
            printf("Carta 1: %.2f\n", capita1);
            printf("Carta 2: %.2f\n", capita2);

            if (capita1 > capita2)
            {
                printf("*** Carta 1 Venceu! ***");
            } else if (capita1 < capita2){
                printf("*** Carta 2 Venceu! ***");
            } else {
                printf ("*** Empate! ***");
            }
            break;
        case 7:
            printf("*** Comparação Super Poder ***\n");
            printf("Carta: %.2f\n", poder1);
            printf("Carta: %.2f\n", poder2);

            if (poder1 > poder2)
            {
                printf("*** Carta 1 Venceu! ***");
            } else if (poder1 < poder2){
               printf("*** Carta 2 Venceu! ***");
            } else {
                printf ("*** Empate! ***");
            }
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }
        break;

    case 2:

        printf("*** Comparar Várias Cartas ***\n");
        printf("Escolha os Atributos da Carta 1.\n");
        printf("A. População\n");
        printf("B. Área\n");
        printf("C. PIB\n");
        printf("D. Pontos Turísticos\n");
        printf("E. Densidade Populacional\n");
        printf("F. PIB per Capita\n");
        printf("G. Super Poder\n");

        printf("Escolha a comparação:");
        scanf(" %c", &primeiroAtributo);
       
         switch (primeiroAtributo){
    case 'A':
    case 'a':
        printf("Você escolheu a opção População!\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;

    case 'B':
    case 'b':
        printf("Você escolheu a opção Área!\n");
        resultado1 = area1 > populacao2 ? 1 : 0;
        break;

    case 'C':
    case 'c':
        printf("Você escolheu a opção PIB!\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;

    case 'D':
    case 'd':
        printf("Você escolheu a opção Pontos Turísticos!\n");
        resultado1 = turistico1 > turistico2 ? 1 : 0;
        break;

    case 'E':
    case 'e':
        printf("Você escolheu a opção Densidade Populacional!\n");
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;

    case 'F':
    case 'f':
        printf("Você escolheu a opção PIB per Capita!\n");
        resultado1 = capita1 > capita2 ? 1 : 0;
        break;

    case 'G':
    case 'g':
        printf("Você escolheu a opção Super Poder!\n");
        resultado1 = poder1 > poder2 ? 1 : 0;
        break;
    
    default:
        printf("Opção de jogo inválida\n");
        break;
    }


        printf("Escolha o Segundo atributo da Carta 1.\n");
        printf("A. População\n");
        printf("B. Área\n");
        printf("C. PIB\n");
        printf("D. Pontos Turísticos\n");
        printf("E. Densidade Populacional\n");
        printf("F. PIB per Capita\n");
        printf("G. Super Poder\n");

        printf("Escolha a comparação:");
        scanf(" %c", &segundoAtributo);

        if (primeiroAtributo == segundoAtributo){
            printf("Você escolheu o mesmo atributo!\n");
        } else {
          switch (segundoAtributo){
    case 'A':
    case 'a':
        printf("Você escolheu a opção População!\n");
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;

    case 'B':
    case 'b':
        printf("Você escolheu a opção Área!\n");
        resultado2 = area1 > populacao2 ? 1 : 0;
        break;

    case 'C':
    case 'c':
        printf("Você escolheu a opção PIB!\n");
        resultado2 = pib1 > pib2 ? 1 : 0;
        break;

    case 'D':
    case 'd':
        printf("Você escolheu a opção Pontos Turísticos!\n");
        resultado2 = turistico1 > turistico2 ? 1 : 0;
        break;

    case 'E':
    case 'e':
        printf("Você escolheu a opção Densidade Populacional!\n");
        resultado2 = densidade1 < densidade2 ? 1 : 0;
        break;

    case 'F':
    case 'f':
        printf("Você escolheu a opção PIB per Capita!\n");
        resultado2 = capita1 > capita2 ? 1 : 0;
        break;

    case 'G':
    case 'g':
        printf("Você escolheu a opção Super Poder!\n");
        resultado2 = poder1 > poder2 ? 1 : 0;
        break;
    
    default:
        printf("Opção de jogo inválida\n");
        break;
    }

    printf("Primeiro Atributo Carta 1: %d\n", resultado1);
    printf("Segundo Atributo Carta 1: %d\n", resultado2);


        printf("*** Agora escolha os Atributos da Carta 2. ***\n");
        printf("A. População\n");
        printf("B. Área\n");
        printf("C. PIB\n");
        printf("D. Pontos Turísticos\n");
        printf("E. Densidade Populacional\n");
        printf("F. PIB per Capita\n");
        printf("G. Super Poder\n");

        printf("Escolha a comparação:");
        scanf(" %c", &terceiroAtributo);
       
         switch (terceiroAtributo){
    case 'A':
    case 'a':
        printf("Você escolheu a opção População!\n");
        resultado3 = populacao2 > populacao1 ? 1 : 0;
        break;

    case 'B':
    case 'b':
        printf("Você escolheu a opção Área!\n");
        resultado3 = area2 > populacao1 ? 1 : 0;
        break;

    case 'C':
    case 'c':
        printf("Você escolheu a opção PIB!\n");
        resultado3 = pib2 > pib1 ? 1 : 0;
        break;

    case 'D':
    case 'd':
        printf("Você escolheu a opção Pontos Turísticos!\n");
        resultado3 = turistico2 > turistico1 ? 1 : 0;
        break;

    case 'E':
    case 'e':
        printf("Você escolheu a opção Densidade Populacional!\n");
        resultado3 = densidade2 < densidade1 ? 1 : 0;
        break;

    case 'F':
    case 'f':
        printf("Você escolheu a opção PIB per Capita!\n");
        resultado3 = capita2 > capita1 ? 1 : 0;
        break;

    case 'G':
    case 'g':
        printf("Você escolheu a opção Super Poder!\n");
        resultado3 = poder2 > poder1 ? 1 : 0;
        break;
    
    default:
        printf("Opção de jogo inválida\n");
        break;
    }


        printf("*** Escolha o Segundo atributo da Carta 2. ***\n");
        printf("A. População\n");
        printf("B. Área\n");
        printf("C. PIB\n");
        printf("D. Pontos Turísticos\n");
        printf("E. Densidade Populacional\n");
        printf("F. PIB per Capita\n");
        printf("G. Super Poder\n");

        printf("Escolha a comparação:");
        scanf(" %c", &quartoAtributo);

        if (terceiroAtributo == quartoAtributo){
            printf("Você escolheu o mesmo atributo!\n");
        } else {
          switch (quartoAtributo){
    case 'A':
    case 'a':
        printf("Você escolheu a opção População!\n");
        resultado4 = populacao2 > populacao1 ? 1 : 0;
        break;

    case 'B':
    case 'b':
        printf("Você escolheu a opção Área!\n");
        resultado4 = area2 > populacao1 ? 1 : 0;
        break;

    case 'C':
    case 'c':
        printf("Você escolheu a opção PIB!\n");
        resultado4 = pib2 > pib1 ? 1 : 0;
        break;

    case 'D':
    case 'd':
        printf("Você escolheu a opção Pontos Turísticos!\n");
        resultado4 = turistico2 > turistico1 ? 1 : 0;
        break;

    case 'E':
    case 'e':
        printf("Você escolheu a opção Densidade Populacional!\n");
        resultado4 = densidade2 < densidade1 ? 1 : 0;
        break;

    case 'F':
    case 'f':
        printf("Você escolheu a opção PIB per Capita!\n");
        resultado4 = capita2 > capita1 ? 1 : 0;
        break;

    case 'G':
    case 'g':
        printf("Você escolheu a opção Super Poder!\n");
        resultado4 = poder2 > poder1 ? 1 : 0;
        break;
    
    default:
        printf("Opção de jogo inválida\n");
        break;
    }

    printf("Primeiro Atributo Carta 1: %d\n", resultado3);
    printf("Segundo Atributo Carta 1: %d\n", resultado4);

    printf("*** Comparando Atributos ***\n");

    if (resultado1 && resultado2)
    {
        printf("Parabéns, você venceu!\n");
    } else if (resultado1 != resultado3){
        printf("Empatou!\n");
    } else {
        printf("Infelizmente, você perdeu!\n");
    }
    
    if (resultado3 && resultado4)
    {
        printf("Parabéns, você venceu!\n");
    } else if (resultado2 != resultado4){
        printf("Empatou!\n");
    } else {
        printf("Infelizmente, você perdeu!\n");
    }

    printf("*** Somando Atributos ***\n");

    somar1 = resultado1 + resultado2;
    somar2 = resultado3 + resultado4;
    printf("A soma total dos Atributos da Carta 1 é: %d\n", somar1);
    printf("A soma total dos Atributos da Carta 1 é: %d\n", somar2);

    printf("*** Resultado Final do Jogo ***\n");
    printf("Atributos Carta 1: %c, %c\n", primeiroAtributo, segundoAtributo);
    printf("Valores Carta 1: %d, %d\n", resultado1, resultado2);
    printf("Soma Valores Carta 1: %d\n", somar1);

    printf("Atributos Carta 2: %c, %c\n", primeiroAtributo, segundoAtributo);
    printf("Valores Carta 2: %d, %d\n", resultado3, resultado4);
    printf("Soma Valores Carta 2: %d\n", somar2);   
    if (somar1 > somar2)
    {
        printf("Atributos Carta 1 Venceu!");
    } else {
        printf("Atributos Carta 2 Venceu!");
    }    

       break;
        
        }

    case 3:
        printf("*** Cadastrar Carta ***\n");

        // Dados da cidade
    printf ("Estado: \n", estado0);
    scanf (" %s", &estado0);

    printf ("Código: \n", codigo0);
    scanf (" %s", &codigo0);

    printf ("Nome da Cidade: \n", cidade0);
    scanf (" %s", &cidade0);

    printf ("População: \n", populacao0);
    scanf (" %d", &populacao0);

    printf ("Área (km²): \n", area0);
    scanf (" %f", &area0);

    printf ("PIB (em bilhões): \n", pib0);
    scanf (" %f", &pib0);

    printf ("Número de Pontos Turísticos: \n", turistico0);
    scanf (" %d", &turistico0);

    // Função para listar carta cadastrada
    printf ("*** Carta 1! ***\n");
    printf ("Estado: %s \n", estado0);
    printf ("Código: %s%s \n", estado0, codigo0);
    printf ("Nome da Cidade: %s\n", cidade0);
    printf ("População: %d\n", populacao0);
    printf ("Área (km²): %.2f\n", area0);
    printf ("PIB (em bilhões): %.2f\n", pib0);
    printf ("Número de Pontos Turísticos: %d\n", turistico0);
    printf ("Densidade Populacional: %.2f\n", densidade0);
    printf ("PIB per Capita: %.2f\n", capita0);
    printf ("Super Poder: %.2f\n", poder0);

        break;

    case 4:
        printf("*** Regras do Jogo ***\n");
        printf("Primeiro passo: Escolha o atributo que deseja comparar nas cartas\n");
        break;

    case 5:
        printf("Saindo...\n");
        break;
          
    default:
        printf("Opção Inválida\n");
        break;
    }

    return 0;


    }}
