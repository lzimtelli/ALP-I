#include <stdio.h>
#include <ctype.h>

/*4. Faça um algoritmo que receba a altura e o sexo de uma pessoa, calcule e imprima o seu peso ideal,
utilizando as seguintes fórmulas:
• para homens: (72.7 * H) - 58
• para mulheres: (62.1 * H) - 44.7*/

int main(){
    char sexo;
    float altura, ideal;

    printf("\n Digite o sexo da pessoa\n 'M' para Masculino\n 'F' para Feminino\n ");
    fflush(stdin);
    scanf("%c", &sexo);
    sexo = toupper(sexo);

    switch (sexo)
    {
    case 'M':
        printf("\n Digite a altura da pessoa: ");
        scanf("%f", &altura);
        ideal = (72.7 * altura) - 58;
        printf("\n Peso ideal: %.2f\n", ideal);
        break;
    
    case 'F':
        printf("\n Digite a altura da pessoa: ");
        scanf("%f", &altura);
        ideal = (62.1 * altura) - 44.7;
        printf("\n Peso ideal: %.2f\n", ideal);
        break;

    default:
        printf("\n Digite uma opcao valida\n");
        break;
    }
}