#include <stdio.h>

int main(){
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if(idade > 65)
        printf("Valor a pagar: R$ 610,00");
    else if(idade > 59)
        printf("Valor a pagar: R$ 400,00");
    else if(idade > 45)
        printf("Valor a pagar: R$ 340,00");
    else if(idade > 30)
        printf("Valor a pagar: R$ 300,00");
    else if(idade > 18)
        printf("Valor a pagar: R$ 240,00");
    else if(idade <= 18)
        printf("Valor a pagar: R$ 180,00");
}