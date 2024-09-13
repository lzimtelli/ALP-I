#include <stdio.h>

/*3. Faça um algoritmo que calcule e imprima o salário reajustado de um funcionário de acordo com a
seguinte regra:
• salários até 2.500,00, reajuste de 15%
• salários maiores que 2.500,00, reajuste de 10%*/

int main(){
    float salario;

    printf("\n Digite o salario: ");
    scanf("%f", &salario);

    if(salario>0 && salario<=2500)
        salario = salario + (salario * 0.15);
    else if (salario > 2500)
        salario = salario + (salario * 0.10);

    printf("\n Salario reajustado: %.2f\n", salario);
}