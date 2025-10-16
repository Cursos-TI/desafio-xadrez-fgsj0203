#include <stdio.h>

/*
 Desafio de Xadrez - MateCheck
 Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
 O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
*/
int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    // Section of variables / Seção de variáveis
    const int bispo = 5;
    const int torre = 5;
    const int rainha = 8;
    /*
    Variables support
    */
   int i = 1;
   int j = 1;
   int k = 1;
    //-------------- End of section variables ----------------------

    // Implementation of looping for moving parts of chess / Implementando o looping para mover as peças do xadrez
    /* 
    Looping structure for part - Bishop / Estrutura de Loop para a peça - Bispo
    */
    printf("Using structure For\n");
    for ( i = 1; i <= bispo; i++)
    {
        printf("cima -> direita (%d - movimento)\n", i);
    }

    // Using loop While for moving part bishop
    printf("Using structure While \n");
    while (j <= bispo)
    {
        printf("cima -> direita (%d - movimento)\n", j);
        j++; //Counter for controller of repeat in loop
    }

    // Using loop "Do-While" for moving part bishop
    printf("Using structure Do-While \n");
    do
    {
        printf("cima -> direita (%d - movimento)\n", k);
        k++;
    } while (k <= bispo);
    

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

    return 0;
}
