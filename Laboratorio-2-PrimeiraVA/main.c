#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Dados das Pessoas */

typedef struct{

    int altura;   /* Irei utilizar centimetros como unidade de medida do tamanho das pessoas */
    char genero[10];
} pessoas;


/* Calculo da Media das Altura */

void media_total (pessoas *D);


/* Calculo da Maior Altura Entre as Pessoas */

void maior_altura (pessoas *D);


/* Calculo das Alturas Medias Entre Homens ou Mulheres */

void medias_entre_generos (pessoas *D);


/* Contagem Dos Homens */

void contagem (pessoas *D);


/* Alteracao de Altura */

void alteracao_altura (pessoas *D);



int main(){

    pessoas Dados[5];

    /*pessoa 1*/

    strcpy(Dados[0].genero, "masculino");
    Dados[0].altura = 184;

    /*pessoa 2*/

    strcpy(Dados[1].genero, "feminino");
    Dados[1].altura = 170;

    /*pessoa 3*/

    strcpy(Dados[2].genero, "masculino");
    Dados[2].altura = 155;

    /*pessoa 4*/

    strcpy(Dados[3].genero, "feminino");
    Dados[3].altura = 166;

    /*pessoa 5*/

    strcpy(Dados[4].genero, "masculino");
    Dados[4].altura = 178;


    /* Chamada das funcoes */

    media_total(&Dados);
    maior_altura(&Dados);
    medias_entre_generos(&Dados);
    contagem(&Dados);

    printf("\n----------------------------------------\n\n");

    /* Chamada da Funcao que altera a Altura */

    alteracao_altura(&Dados);

    /* Chamada das Funcoes Novamente */

    media_total(&Dados);
    maior_altura(&Dados);
    medias_entre_generos(&Dados);

    return 0;
}


/* Calculo da Media das Altura */

void media_total (pessoas *D){

    int soma = 0, aux, media;

    for(aux = 0; aux < 5; aux ++){

        soma += D[aux].altura;
    }

    media = soma/5;

    printf("A media da altura das pessoas eh: %d cm\n", media);

}


/* Calculo da Maior Altura Entre as Pessoas */

void maior_altura (pessoas *D){

    int maior = 0, aux;

    for(aux = 0; aux < 5; aux++){

        if (D[aux].altura >= maior){

                maior = D[aux].altura;
        }
    }

    printf("A maior altura entre as pessoas eh: %d cm\n", maior);
}


/* Calculo das Alturas Medias Entre Homens ou Mulheres */

void medias_entre_generos (pessoas *D){

    int soma = 0, media, aux, divisor = 0;

    /* Calculo da Media das Alturas das Mulheres */

    for(aux = 0; aux < 5; aux ++){

        if(strcasecmp(D[aux].genero, "feminino") == 0){

            soma += D[aux].altura;
            divisor += 1;
        }

    }

    if (divisor > 0){

        media = soma/divisor;
        printf("A altura media das mulheres eh: %d cm\n", media);
    }

    /* Calculo da media da altura dos Homens */

    soma = 0;
    media = 0;
    divisor = 0;

    for(aux = 0; aux < 5; aux ++){

        if(strcasecmp(D[aux].genero, "masculino") == 0){

            soma += D[aux].altura;
            divisor += 1;
        }

    }

   if (divisor > 0){

        media = soma/divisor;
        printf("A altura media dos homens eh: %d cm\n", media);
   }

}


/* Contagem Dos Homens */

void contagem (pessoas *D){

    int aux, contador = 0;

    for(aux = 0; aux < 5; aux ++){

        if(strcasecmp(D[aux].genero, "masculino") == 0){

            contador += 1;
        }
    }

    printf("A quantidade de homens eh: %d\n", contador);

}


/* Alteracao da Altura de Uma Pessoa */

void alteracao_altura (pessoas *D){

    /* Alteracao na pessoa 4 */

    int *p;
    p = &D[3].altura;
    *p = 168;

}
