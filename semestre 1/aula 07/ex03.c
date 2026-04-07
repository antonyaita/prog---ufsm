/*A ORB (Organização Regional de Bocha) numa tentativa de aumentar a
popularidade da competição decidiu chamar para a Grande Final Mundial o
campeão e o vice-campeão de cada cidade, ao invés de apenas o primeiro
lugar. A ORB não armazenou quem foi o segundo classificado, mas armazenou
a pontuação de todos competidores - que foram apenas três, devido ao
sucesso do campeonato. Sabe-se também que as pontuações de todos
jogadores foram diferentes, de forma que não ocorreu empate entre nenhum
deles. Resta agora descobrir quem foi o vice-campeão. Faça um programa
que leia as pontuações dos três competidores e informe a pontuação do vice-campeão*/

#include <stdio.h>

int main(){
    int p1, p2, p3;

    printf("Digite a pontuacao 1: ");
    scanf("%d", &p1);

    printf("Digite a pontuacao 2: ");
    scanf("%d", &p2);

    printf("Digite a pontuacao 3: ");
    scanf("%d", &p3);

    if(p1 == p2 || p2 == p3 || p1 ==p3){
        printf("Todos sao iguais, algo esta errado, refaca");
    }
    else if((p1>p2 && p2>p3) || (p3>p2 && p2>p1))
    {
        printf("Pontuacao 2 e o vice-campeao");
    }
    else if((p1>p2 && p2<p3) || (p1>p3 && p1<p2))
    {
        printf("Pontuacao 1 e o vice campeao");
    }
    else 
    {
        printf("Pontuacao 3 e o vice campeao");
    }

    return 0;
}