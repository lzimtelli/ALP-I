#include <stdio.h>

/*1. Uma empresa decide dar um aumento de 25% aos funcionários cujo salário é inferior a 1.800,00 reais.
Escreva um algoritmo que receba o salário de um funcionário e imprima o valor do salário reajustado ou
uma mensagem caso o funcionário não tenha direito ao aumento*/

int main(){
    float salario;

    printf("\n Digite o salario: ");
    scanf("%f", &salario);

    if(salario>0 && salario<=1800){
        salario = salario + (0.25 * salario);
        printf("\n Novo salario: %.2f", salario);
    }
    else{
        printf("\n Funcionario nao possui direito ao aumento\n");
    }
}