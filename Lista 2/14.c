#include <stdio.h>

/*14. A galera da faculdade foi no Boteco do João pois souberam que no boteco há um desconto de 10% para
os alunos do curso de Bacharelado em Ciência da Computação, faça um algoritmo que a partir do total
da conta, calcula o valor a ser pago, com o desconto. E também o valor a ser pago individualmente pelos
integrantes da confraternização.*/

int main()
{
    float conta, desconto, individual;
    int integrantes;

    printf("\n Digite o valor a ser pago: ");
    scanf("%f", &conta);
    printf("\n Digite a quantidade de integrantes: ");
    scanf("%d", &integrantes);

    desconto = conta - (0.10 * conta);
    individual = ((float)desconto / integrantes);

    printf("\n Valor a ser pago: %.2f", conta);
    printf("\n Valor a ser pago com disconto: %.2f", desconto);
    printf("\n Valor a ser pago individual: %.2f\n", individual);
}