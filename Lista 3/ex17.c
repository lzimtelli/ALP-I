#include <stdio.h>

int main(){
    int x, y;

    printf("Digite a coordenada X: ");
    scanf("%d", &x);
    printf("Digite a coordenada Y: ");
    scanf("%d", &y);

    if(x==0 && y == 0)
        printf("O ponto esta na origem do sistema");
    else if(x == 0 && y != 0)
        printf("O ponto esta sobre o eixo Y");
    else if(x != 0 && y == 0)
        printf("O ponto esta sobre o eixo X");
    else if(x > 0 && y > 0)
        printf("O ponto esta sobre o Primeiro Quadrante");
    else if(x < 0 && y > 0)
        printf("O ponto esta sobre o Segundo Quadrante");
    else if(x < 0 && y < 0)
        printf("O ponto esta sobre o Terceiro Quadrante");
    else if(x > 0 && y < 0)
        printf("O ponto esta sobre o Quarto Quadrante");
}