#include <stdio.h>

/*12. Ao ser fornecido a quantidade de kw de uma residência e o valor do salário mínimo, calcule e imprima
o valor em reais de cada kw, o valor em reais devido pelo consumidor, e o valor a ser pago por essa
residência com um desconto de 10%. Sabe-se que 100 kilowatts custa 1/7 do salário mínimo.*/

float lerfloat()
{
    float num;
    scanf("%f", &num);
    return (num);
}

int main()
{
    float kwcasa, salario, valorkw, valordevido, valordesconto;

    printf("\n Digite a quantidade de kw da casa: ");
    kwcasa = lerfloat();
    printf("\n Digite o valor do salario minimo: ");
    salario = lerfloat();
    valorkw = (salario * 0.0014); // salario * 1/700
    valordevido = valorkw * kwcasa;
    valordesconto = valordevido - (0.10 * valordevido);

    printf("\n Valor de cada kw: %.2f", valorkw);
    printf("\n Valor devido pelo consumidor: %.2f", valordevido);
    printf("\n Valor a ser pago com desconto: %.2f\n", valordesconto);
}