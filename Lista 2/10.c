#include <stdio.h>

/*10, O pedreiro Jão da Pedra para calcular o custo de murar um terreno, ele utiliza o perímetro do terreno e
a altura do muro (quantidade de metros quadrados de muro). O valor do metro quadrado do muro pode
variar de acordo com o tipo de bloco utilizado. Faça um algoritmo capaz de calcular o preço total para
murar um terreno retangular, deve-se apresentar a quantidade de metros quadrados de muro a ser
construído.*/

float lerfloat()
{
    float num;
    scanf("%f", &num);
    return (num);
}

int main()
{
    float m2, altura, base1, base2, valor;
    int resp;

    printf("\n Digite o valor(em metros) do lado 1 do terreno: ");
    base1 = lerfloat();
    printf("\n Digite o valor(em metros) do lado 2 do terreno: ");
    base2 = lerfloat();
    printf("\n Digite a altura(em metros) do muro: ");
    altura = lerfloat();
    m2 = 2 * (base1 * altura) + 2 * (base2 * altura);

    printf("\n Escolha o bloco desejado:\n 1. Tijolos\n 2. Tijolos Melhores\n ");
    scanf("%d", &resp);

    switch (resp)
    {
    case 1:
        valor = 30 * m2;
        printf("\n Quantidade de metros quadrados: %.2f", m2);
        printf("\n Valor do bloco escolhido: 30");
        printf("\n Valor total a ser gasto: %.2f\n", valor);
        break;

    case 2:
        valor = 70 * m2;
        printf("\n Quantidade de metros quadrados: %.2f", m2);
        printf("\n Valor do bloco escolhido: 70");
        printf("\n Valor total a ser gasto: %.2f\n", valor);
        break;

    default:
        printf("\n Digite uma opcao valida\n");
    }
}