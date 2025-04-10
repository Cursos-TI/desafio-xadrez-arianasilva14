#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    //Mover a torre 5 casas para a direita
    for (int i = 0; i < 5; i++)
    {
        printf("Direita Torre\n");
    }

        printf("\n");

    //Mover o bispo 5 casas para a esqueda
    for (int i = 0; i < 5; i++)
    {
        printf("Esquerda Bispo\n");
    }

        printf("\n");

    //Mover o rainha 3 casas para a esqueda
    for (int i = 0; i < 3; i++)
    {
        printf("Horizontal Rainha\n");
    }

        printf("\n");

    //Mover o cavalo 4 casas para a esqueda
    for (int i = 0; i < 4; i++)
    {
        printf("Esquerda Cavalo\n");
    }

        printf("\n");

        int movimentoCompleto = 1;

        while (movimentoCompleto--)
        {
            for (int i = 0; i < 2; i++)
            {
                printf("Cima\n");
            }

            printf("Direita\n");
            
        }

    return 0;
}
