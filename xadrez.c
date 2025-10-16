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
   int l = 1;
   int m = 1;
   int n = 1;
   int o = 1;
   int p = 1;
   int q = 1;
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
    //---------------------------------------------------------------
    // Loop Structure for part - Tower / Estrutura de loop para a peça - Torre
    printf("Loop For - part Tower / Loop for - peça torre\n");
    for ( l = 1; l <= torre; l++)
    {
        printf("Direita -> (%d - movimento)\n", l);
    }
    // Using loop "While" for moving part - Tower / Usando loop "While" para mover a peça - Torre
    printf("Loop While - part tower / Loop for - peça torre\n");
    while (m <= torre)
    {
        printf("Direita -> (%d - movimento)\n", m);
        m++;
    }
    // Loop structure "Do-While" part - Tower / Estrutura de loop para peça - Torre
    printf("Loop Do-While - Part Tower / Loop Do-While - peça torre\n");
    do
    {
        printf("Direita -> (%d - movimento)\n",n);
        n++;
    } while (n <= torre);
    //-----------------------------------------------------------------------------------
    // Looping structure for part - Queen / Estrutura de Loop para a peça - Rainha
    printf("Loop for - part Queen / Estrutura For - peça Rainha\n");
    for (o = 1; o <= rainha; o++)
    {
        printf("Rainha move <- (%d) para esquerda \n", o);
    }
    
    // Looping While for part - Quenn / Estrutura While para a peça - Rainha
    printf("loop while - part Queen / Loop While - peça Rainha\n");
    while (p <= rainha)
    {
        printf("Rainha move <- (%d) para esquerda \n", p);
        p++;
    }

    // Looping Do-While for part - Queen / Estrutura Do-While para a peça - Rainha
    printf("Loop Do-While - part Queen / Loop Do-While - peça Rainha\n");
    do
    {
        printf("Rainha move <- (%d) para esquerda\n", q);
        q++;
    } while (q <= rainha);

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
