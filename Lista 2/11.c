#include <stdio.h>
#include <math.h>

/*11. Calcule a distância entre dois pontos do plano cartesiano. A coordenada de cada um dos pontos é
formada por (x, y). A distância é calculada de acordo com a figura abaixo. A raiz quadrada é extraída
utilizando sqrt(numero) e expoente deve-se utilizar ^.*/

float chama()
{
    float num;
    printf("\n Digite um numero: ");
    scanf("%f", &num);
    return (num);
}

int main()
{
    float x1, x2, y1, y2, d;

    printf("\n Lendo x1");
    x1 = chama();
    printf("\n Lendo x2");
    x2 = chama();
    printf("\n Lendo y1");
    y1 = chama();
    printf("\n Lendo y2");
    y2 = chama();

    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("\n A distancia entre os pontos e de: %.2f\n", d);
};