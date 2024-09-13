#include <stdio.h>

/*1. Você deseja colocar um ar-condicionado em seu quarto e a quantidade de BTUs necessária para
refrigerar um ambiente é calculada com base nas medidas do ambiente, na quantidade de pessoas que
permanecerá no ambiente e na quantidade de equipamentos eletrônicos. Para cada m2 do ambiente são
necessários 500BTUs, para cada uma das pessoas que permanecerão no ambiente deve-se adicionar
600BTUs e para cada um dos equipamentos eletrônicos ligados, deve-se somar mais 300BTUs. Faça um
algoritmo capaz de calcular a capacidade mínima do ar-condicionado para refrigerar um determinado
ambiente.*/

int main(){
    float btus, largura, comprimento, metros;
    int pessoas, equipamentos;

    printf("\n Digite a largura da sala: ");
    scanf("%f", &largura);
    printf("\n Digite o comprimento da sala: ");
    scanf("%f", &comprimento);
    printf("\n Digite a quantidade de pessoas: ");
    scanf("%d", &pessoas);
    printf("\n Digite a quantidade de equipamentos: ");
    scanf("%d", &equipamentos);

    metros = largura * comprimento;

    btus = (metros * 500) + (pessoas * 600) + (equipamentos * 300);

    printf("\n Quantidade de BTUs: %.2f\n", btus);
}