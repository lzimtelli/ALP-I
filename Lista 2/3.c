#include <stdio.h>

/*3. A média bimestral de cada um dos alunos é formada por 3 notas, que possuem pesos diferentes, porém
para cada uma das atividades é de 0 a 10.
 a) Avaliação bimestral - peso 6;
 b) Trabalho Prático – peso 2;
 c) Simulado – peso 2.
Faça um algoritmo capaz de ler as notas das três atividades de 0 a 10 e calcular a média bimestral.
Apresentando o valor de cada uma das atividades e a média bimestral.*/

int main()
{
    float avaliacao, trabalho, simulado, media;

    printf("\n Digite a nota da Avaliacao Bimestral: ");
    scanf("%f", &avaliacao);
    printf("\n Digite a nota do Trabalho Pratico: ");
    scanf("%f", &trabalho);
    printf("\n Digite a nota do Simulado: ");
    scanf("%f", &simulado);

    media = (avaliacao * 6 + trabalho * 2 + simulado * 2) / (6 + 2 + 2);

    printf("\n A media bimestral foi: %.2f\n", media);
}