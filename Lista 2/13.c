#include <stdio.h>

/*13. Dona Conceição revende roupas para a Empresa Malhada. Sabe-se que sobre o preço de custo das
roupas, a Empresa Malhada coloca 50% de ganho e repassa para a Dona Conceição que irá revendê-las.
Dona Conceição, por sua vez, repassa para seus clientes com 35% de ganho. Faça um algoritmo que ao
ser fornecido o preço de custo de uma roupa, calcule:
- valor da venda pela Empresa Malhada;
- valor da venda pela Dona Conceição;
- lucro da empresa Malhada;
- lucro da Dona Conceição.
Todos os valores calculados deverão ser apresentados ao usuário.*/

float lerfloat()
{
    float num;
    scanf("%f", &num);
    return (num);
}

int main()
{
    float roupa, conceicao, cliente, lucroempresa, lucroconceicao;
    printf("\n Digite o valor da roupa: ");
    roupa = lerfloat();
    conceicao = roupa + (0.50 * roupa);
    cliente = conceicao + (0.35 * conceicao);
    lucroempresa = conceicao - roupa;
    lucroconceicao = cliente - conceicao;

    printf("\n Valor da venda pela Empresa Malhada: %.2f", conceicao);
    printf("\n Valor da venda pela Dona Conceicao: %.2f", cliente);
    printf("\n Lucro da Empresa Malha: %.2f", lucroempresa);
    printf("\n Lucro da Dona Conceicao: %.2f\n", lucroconceicao);
}