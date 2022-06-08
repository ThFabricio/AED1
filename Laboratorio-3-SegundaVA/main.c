#include <stdio.h>
#include <stdlib.h>
#define numeros 1000

void preencherVet(int *vet);

void ordVet (int *vetCop);

void removerVet (int *vetCop, int *vet, int valor);

int main(void) {

  int vetCop[10], vet[10];
  int i = 0, aux, j, remov;

  preencherVet(vet);

  for(j = 0; j < 10; j++){

    vetCop[j] = vet[j];
  }

  ordVet(vetCop);

  do{

    printf("[====================================]\n");
    printf("|        Selecione uma Opção         |\n");
    printf("| 1 - Exibir o Vetor                 |\n");
    printf("| 2 - Retirada de Elemento do Vetor  |\n");
    printf("| 0 - Encerrar o Programa            |\n");
    printf("[====================================]\n");

    scanf("%d", &aux);

    switch (aux){

      case 1:

        printf("Vetor Desordenado: ");

        for(j = 0; j < 10; j++){
          printf("%d ", vet[j]);
        }

        printf("\n");

        printf("Vetor Ordernado: ");

        for(j = 0; j < 10; j++){
          printf("%d ", vetCop[j]);
        }

        printf("\n\n");
        break;

      case 2:

      printf("Digite o valor a ser removido: ");
      scanf("%d", &remov);
      removerVet(vetCop, vet, remov);
      printf("Valor removido\n\n");

      break;

      case 0:

        i++;
        break;

      default:

      printf("Opção invalida, por favor digitar uma opção valida \n");
    }

  }while(i == 0);

  return 0;
}

void preencherVet(int *vet){

  int i;

  for(i = 0; i < 10; i++){
    vet[i] = rand()%1000;
    }

}

void ordVet (int *vetCop){

  int maior = vetCop[0], menor = vetCop[0], vetOrd[10];

  int i = 0, j = 0, k = 9;

  int pMaior, pMenor;

  while(j < 5){

    while(i < 10){

      if(vetCop[i] >= maior){

        maior = vetCop[i];
        pMaior = i;
      }

      if(vetCop[i] < menor){

        if (vetCop[i] != 0){
          menor = vetCop[i];
          pMenor = i;
        }
      }

      i ++;
    }

  vetCop[pMaior] = 0;
  vetCop[pMenor] = 0;

  vetOrd[j] = maior;
  vetOrd[k] = menor;

  j ++;
  k --;

  menor = maior;
  maior = 0;
  i = 0;
  }

  for(i = 0; i < 10; i++){

    vetCop[i] = vetOrd[i];
  }


}

void removerVet(int *vetCop, int *vet, int numero){

  int i, j;

  for(i = 0; i < 10; i++){

    if(numero == vet[i]){

      vet[i] = 0;
    }

    if(numero == vetCop[i]){

      for(j = i; j < 10; j++){

          if(j != 9){

            vetCop[j] = vetCop[j+1];
          }else{

            vetCop[j] = 0;
          }
      }
    }
  }
}
