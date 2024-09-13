#include <stdio.h>

/*2. Faça um algoritmo que verifique a validade de uma senha fornecida pelo usuário. A senha é o número
2023. O programa deve imprimir mensagem de permissão ou negação de acesso.*/

int main(){
    int senha;

    printf("\n Digite a senha: ");
    scanf("%d", &senha);

    if(senha==2023)
        printf("\n Acesso concedido\n");
    else
        printf("\n Acesso negado\n");
}