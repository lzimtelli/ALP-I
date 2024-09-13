#include <stdio.h>

/*15. Desenvolva um algoritmo para calcular e apresentar o novo saldo de uma conta, sabendo que foi feito
um depósito inicial e sobre esse valor é aplicado um determinado percentual de remuneração mensal.
Considerando que o valor ficou aplicado durante uma determinada quantidade de meses, apresente o
valor da conta ao final do período e o valor ganho com essa aplicação. Para o cálculo do valor final da
aplicação utilizamos a seguinte fórmula:
ValorFinal = ValorInicial*(1+(TaxaJuros/100))*QuantidadeMeses*/

int main()
{
    int QuantidadeMeses;
    float ValorInicial, TaxaJuros, ValorFinal;
    printf("\n Digite o deposito inicial: ");
    scanf("%f", &ValorInicial);
    printf("\n Digite a taxa de quantidade de meses: ");
    scanf("%d", &QuantidadeMeses);
    printf("\n Digite a taxa de juros(porcento): ");
    scanf("%f", &TaxaJuros);
    
    ValorFinal = ValorInicial*(1+((float)TaxaJuros/100))*QuantidadeMeses;

    printf("\n Novo saldo: %.2f\n", ValorFinal);   
}  