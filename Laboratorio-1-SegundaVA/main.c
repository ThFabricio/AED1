#include <stdio.h>
#include <stdlib.h>



struct lista{

  int numero;

  struct lista *proximo;
}; typedef struct lista Lista;


Lista *inicializar(void){

  return NULL;
}


Lista *inserir(Lista *l, int dado){

  Lista* novo= (Lista*)malloc(sizeof(Lista));

  novo->numero = dado;

  novo->proximo = l;

  return novo;

}


void imprime (Lista *l){

    Lista *p;

    for(p = l; p!= NULL; p = p->proximo)
        printf("%d ", p->numero);
}


Lista *concatenacao(Lista *L1, Lista *L2){

    Lista *p;

    Lista *nova = (Lista*)malloc(sizeof(Lista));

    if(L2 == NULL && L1 == NULL){

        return NULL;

    }else if (L2 == NULL){

        nova = L1;
        return nova;

    }else if (L1 == NULL){

        nova = L2;
        return nova;

    } else{

        nova = L2;
        p = nova;

        while(p->proximo != NULL){

                p = p->proximo;

        }

        p->proximo = L1;

        return nova;
    }

}



int main(void) {

    int aux, i, j;

    Lista *L1 = inicializar();
    Lista *L2 = inicializar();
    Lista *L = inicializar();

    printf("Deseja inserir quantos elementos na Lista 1: ");
    scanf("%d", &aux);

    if(aux > 0){

        printf("Digite os numeros que vc quer inseir: ");

        for(i = 0; i < aux; i ++){

            scanf("%d", &j);
            L1 = inserir(L1, j);
        }

    }

    printf("Deseja inserir quantos elementos na Lista 2: ");
    scanf("%d", &aux);

    if(aux > 0){

        printf("Digite os numeros que vc quer inseir: ");

        for(i = 0; i < aux; i ++){

            scanf("%d", &j);
            L2 = inserir(L2, j);
        }

    }

    L = concatenacao(L1, L2);

    if(L != NULL){

        printf("A lista concatenada com a inversao das lista, tera os valores de: ");
        imprime(L);

    }else{

        printf("Como as duas listas possui valores nulos, nao averar uma lista que seja a concatenacao de ambas");
    }

    return 0;
}
