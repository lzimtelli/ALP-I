#include <stdio.h>

/*5. Faça um algoritmo que receba a idade de um nadador e imprima a sua categoria seguindo as regras:
Categoria Idade Idade
Infantil A 5 - 7 anos
Infantil B 8 - 10 anos
Juvenil A 11- 13 anos
Juvenil B 14- 17 anos
Adulto maiores de 18 anos*/

int main(){
    int idade;
    printf("\n Digite a idade: ");
    scanf("%d", &idade);
        
    if(idade>=5 && idade<=7)
        printf("\n Categoria: Infantil A\n");
    else if(idade>=8 && idade<=10)
        printf("\n Categoria: Infantil B\n");
    else if(idade>=11 && idade<=13)
        printf("\n Categoria: Juvenil A\n");
    else if(idade>=14 && idade<=17)
        printf("\n Categoria: Juvenil B\n");
    else if(idade>=18)
        printf("\n Categoria: Adulto maior de 18\n");
}