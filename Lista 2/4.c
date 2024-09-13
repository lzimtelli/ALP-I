#include <stdio.h>

/*4. Faça um algoritmo capaz de calcular o IMC – Índice de Massa Corporal, que é determinado pela fórmula
abaixo, onde a massa de uma pessoa é dada em quilogramas e a altura em metros.
𝐼𝑀𝐶 =
𝑝𝑒𝑠𝑜
𝑎𝑙𝑡𝑢𝑟𝑎 × 𝑎𝑙𝑡𝑢𝑟a*/

int main()
{
    float imc, peso, altura;

    printf("\n Digite o peso: ");
    scanf("%f", &peso);
    printf("\n Digite a altura: ");
    scanf("%f", &altura);

    imc = peso/(altura*altura);

    printf("\n O imc e: %.2f\n", imc);
}