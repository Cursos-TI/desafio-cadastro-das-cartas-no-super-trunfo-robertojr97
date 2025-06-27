#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void movertorre(int Torre) {

    
    if (Torre > 0)
    {
        printf("Direita\n");
        movertorre(Torre - 1);
    }
}

void moverBispo(int Bispo) {

    
    int movimentoCompleto = 5; // flag para controlar o movimento em 'L'

    while (movimentoCompleto--)
    {
        for (int i = 0; i < 1; i++)
        {
            printf("Cima\n"); // Imprime "Cima" duas vezes
        }
        printf("Direita\n"); //Imprime "Direita" uma vez
    }
}

void moverRainha(int rainha) {

    
    if (rainha > 0)
    {
        printf("Direita\n");
        movertorre(rainha - 1);
    }
}

int main(){
  int escolhajogador;
  int cavalo = 1;

    printf("*** Movimentar Xadrez ***\n");
    
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Torre\n");
    printf("5. Sair\n");
    printf("Escolha:\n");
    scanf("%d", &escolhajogador);


    switch (escolhajogador)
    {
    case 1:
        printf("Movendo Torre!\n");
        movertorre(5);
        break;

    case 2:
        printf("Movendo Bispo!\n");
        moverBispo(5);
        break;

    case 3:
        printf("Movendo Rainha!\n");
        moverRainha(8);
        break;


    case 4: 

    printf("Movendo Cavalo!\n");

    while (cavalo--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Esquerda\n"); // Imprime "Esquerda" duas vezes
        }
        printf("Cima\n"); //Imprime "Cima" uma vez
    }

    break;

    case 5:
        printf("Saindo...\n");
        break;
          
    default:
        printf("Opção Inválida\n");
        break;
    }

 

    return 0;
}