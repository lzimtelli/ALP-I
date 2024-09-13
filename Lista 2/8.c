#include <stdio.h>
#include <ctype.h>

/*8. A pousada Sono Tranquilo calcula o valor total da hospedagem de pessoas em seus apartamentos pela
quantidade de diárias e o total dos outros gastos, como refeições e bebidas. O valor do apartamento é
fixo e definido pelo proprietário. No fechamento da conta, o funcionário pode definir um percentual de
desconto para o cliente. Faça um algoritmo capaz de calcular o valor total da hospedagem, o valor do
desconto e o valor a ser pago pelo cliente.*/

float lerfloat()
{
    float num;
    scanf("%f", &num);
    return (num);
}

int main()
{
    int diarias;
    float precodiaria, refeicoes, valorapto, porcentdesconto, total;
    char resposta;

    printf("\n Digite a quantidade de diarias: ");
    diarias = lerfloat();
    printf("\n Digite o valor da diaria: ");
    precodiaria = lerfloat();
    printf("\n Digite o valor das refeicoes e bebidas: ");
    refeicoes = lerfloat();
    printf("\n Digite o valor do apartamento: ");
    valorapto = lerfloat();
    printf("\n Voce gostaria de dar desconto?\n 'S' ou 'N'\n  ");
    fflush(stdin);
    scanf("%c", &resposta);
    resposta = toupper(resposta);

    switch (resposta)
    {
    case 'S':
        printf("\n Qual a porcentagem de desconto?: ");
        porcentdesconto = lerfloat();
        total = ((diarias * precodiaria) + valorapto + refeicoes);
        total = total - ((float)porcentdesconto / 100 * total);
        printf("\n Total a ser pago: RS %.2f\n", total);
        break;

    case 'N':
        total = ((diarias * precodiaria) + valorapto + refeicoes);
        printf("\n Total a ser pago: RS %.2f\n", total);
        break;
    }
}