#include <stdio.h>

/*2. Faça um programa que receba o custo de um espetáculo teatral e o preço do convite desse espetáculo.
Esse programa deve calcular e mostrar a quantidade de convites que devem ser vendidos para que, pelo
menos o custo do espetáculo seja alcançado.*/

int main()
{
    float precoteatro, precoconvite;
    int i = 1, convites = 0;

    printf("\n Digite o preco do teatro: ");
    scanf("%f", &precoteatro);
    printf("\n Digite o preco do convite: ");
    scanf("%f", &precoconvite);

    while (i <= precoteatro)
    {
        i = i + precoconvite;
        convites++;
    }

    printf("\n A quantidade minima de convites para cobrir o custo sera de %d convites\n", convites);
}