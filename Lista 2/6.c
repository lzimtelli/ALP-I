#include <stdio.h>

/*6. Certo dia foi realizado um Simulado para avaliar o aprendizado e preparar os alunos para o ENEM, o
simulado foi dividido em 3 partes, Base Comum, Profissionalizante e Redação. A quantidade de questões
para Base Comum e Profissionalizante foram diferentes. Um determinado aluno que obteve N acertos
nas questões da base comum, M acertos nas questões da parte profissionalizante e uma nota X (variando
de 0 a 10) na redação. Faça um algoritmo capaz de calcular e apresentar para esse aluno:
 a) O percentual de acerto nas questões da Base Comum;
 b) O percentual de acerto nas questões da parte Profissionalizante;
 c) O percentual de acerto considerando todas as questões;
 d) Nota final do simulado, onde as questões da base comum têm peso 5, as questões da parte
profissionalizante têm peso 2,5 e a redação tem peso 2,5.*/

int main()
{
    int comum, profissional, redacao;
    float porcentcomum, porcentprofissional, porcentredacao, media;

    printf("\n Acertos em base comum: ");
    scanf("%d", &comum);
    printf("\n Acertos em base profissionalizante: ");
    scanf("%d", &profissional);
    printf("\n Acertos em redacao: ");
    scanf("%d", &redacao);

    porcentcomum = ((float)comum / 10) * 100;
    porcentprofissional = ((float)profissional / 10) * 100;
    porcentredacao = ((float)redacao / 10) * 100;
    media = (comum * 5 + profissional * 2.5 + redacao * 2.5) / 10;

    printf("\n Porcentagem em base comum: %.2f", porcentcomum);
    printf("\n Porcentagem em base profissionalizante: %.2f", porcentprofissional);
    printf("\n Porcentagem em redacao: %.2f", porcentredacao);
    printf("\n Nota final: %.2f\n", media);
}