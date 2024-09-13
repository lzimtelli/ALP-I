#include <stdio.h>

/*5. Um vendedor recebe um salário fixo mais 5% de comissão sobre o total de suas vendas. Faça um
algoritmo que receba o salário fixo do vendedor e o valor de suas vendas. Em seguida, calcule e
apresente a comissão e seu salário final.*/

int main()
{
    float salariofixo, valorvendas, comissao, final;

    printf("\n Digite o salario deste vendedor: ");
    scanf("%f", &salariofixo);
    printf("\n Digite o valor das vendas deste mesmo vendedor: ");
    scanf("%f", &valorvendas);

    comissao = ((float) 5/100) * valorvendas;

    final = salariofixo + comissao;

    printf("\n Valor da Comissao: RS%.2f", comissao);
    printf("\n Salario final: RS%.2f\n", final);
}