#include <stdio.h>
int main(){

    //Aqui vou fazer o movimento da torre pela estrutura de repetição for

    printf("Movimento da Torre.\n");
    for (int torre = 0; torre < 5; torre++)
    {
        printf("Direita\n");
    }

    //Aqui vou fazer o movimento do bispo pela estrutura de repetição em while

    printf("Movimento do Bispo.\n");
    int bispo = 0;
    while (bispo < 5)
    {
        printf("Cima Direita\n");
        bispo++;
    }

    //Aqui vou fazer o movimento da rainha pela estrutura de repetição em do while

    printf("Movimento da Rainha.\n");
    int rainha = 0;
    do
    {
        printf("Esquerda\n");
        rainha++;
    } while (rainha < 8);

    return 0;
}