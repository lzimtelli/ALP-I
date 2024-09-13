#include <stdio.h>
#include <conio.h>

/*9. Três amigos, Carlos, André e Felipe decidiram rachar uma determinada conta da melhor forma possível
em três pessoa, porém somente um deles pagará valores em centavos. Ou seja, conforme previamente
acertado os dois primeiros a acertarem a conta não pagarão os centavos e o restante é o valor a ser pago
pelo último. Fazer um algoritmo capaz de calcular o valor pago pelos dois primeiros e pelo último.*/

int main()
{
    int i, resp;
    float valor, cents, cada, primeiro, segundo, terceiro;

    printf("\n Digite o valor a ser divido: ");
    scanf("%f", &valor);

    cada = valor / 3;
    i = cada;               // recebe parte inteira
    cents = (cada - i) * 3; // separa centavos de real e recebe dos tres

    printf("\n Quem pagara primeiro?\n 1. Andre\n 2. Carlos\n 3. Felipe\n ");
    scanf("%d", &resp);

    switch (resp)
    {
    case 1:
        printf("\n Quem pagara depois?\n 1. Carlos\n 2. Felipe\n ");
        scanf("%d", &resp);
        switch (resp)
        {
        case 1:
            primeiro = i;
            segundo = i;
            terceiro = i + cents;
            printf("\n Andre Pagara: %.2f\n Carlos pagara: %.2f\n Felipe pagara: %.2f\n", primeiro, segundo, terceiro);
            break;

        case 2:
            primeiro = i;
            segundo = i;
            terceiro = i + cents;
            printf("\n Andre Pagara: %.2f\n Felipe pagara: %.2f\n Carlos pagara: %.2f\n", primeiro, segundo, terceiro);
            break;
        }
        break;

    case 2:
        printf("\n Quem pagara depois?\n 1. Andre\n 2. Felipe\n ");
        scanf("%d", &resp);
        switch (resp)
        {
        case 1:
            primeiro = i;
            segundo = i;
            terceiro = i + cents;
            printf("\n Carlos Pagara: %.2f\n Andre pagara: %.2f\n Felipe pagara: %.2f\n", primeiro, segundo, terceiro);
            break;

        case 2:
            primeiro = i;
            segundo = i;
            terceiro = i + cents;
            printf("\n Carlos Pagara: %.2f\n Felipe pagara: %.2f\n Andre pagara: %.2f\n", primeiro, segundo, terceiro);
            break;
        }
        break;

    case 3:
        printf("\n Quem pagara depois?\n 1. Carlos\n 2. Andre\n ");
        scanf("%d", &resp);
        switch (resp)
        {
        case 1:
            primeiro = i;
            segundo = i;
            terceiro = i + cents;
            printf("\n Felipe Pagara: %.2f\n Carlos pagara: %.2f\n Andre pagara: %.2f\n", primeiro, segundo, terceiro);
            break;

        case 2:
            primeiro = i;
            segundo = i;
            terceiro = i + cents;
            printf("\n Felipe Pagara: %.2f\n Andre pagara: %.2f\n Carlos pagara: %.2f\n", primeiro, segundo, terceiro);
            break;
        }
        break;

    default:
        printf("\nDigite uma opcao valida.");
    }
}