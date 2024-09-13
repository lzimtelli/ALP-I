#include <stdio.h>

int main(){
    int exatas, faltas;
    float h;

    printf("Digite o numero de horas exatas, em minutos: ");
    scanf("%d", &exatas);
    printf("Digite o numero de horas-faltas, em minutos: ");
    scanf("%d", &faltas);

    h = (exatas) - (0.66 * (faltas));

    if(h>2400)
        printf("Premio: R$ 500,00");
    else if(h>=1801)
        printf("Premio: R$ 400,00");
    else if(h>=1201)
        printf("Premio: R$ 300,00");
    else if(h>=600)
        printf("Premio: R$ 200,00");
    else if(h<600)
        printf("Premio: R$ 100,00");
    
}