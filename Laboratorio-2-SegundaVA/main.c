#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{

  char nomes[20];
}cidades;


void merge(cidades *p, int inicio, int meio, int fim);

void mergesort(cidades *p, int inicio, int fim);

void conversor_strings(char *p);


int main (){

  cidades Cidades[20];

  strcpy(Cidades[0].nomes, "Caetes");
  strcpy(Cidades[1].nomes, "Garanhuns");
  strcpy(Cidades[2].nomes, "muribeca");
  strcpy(Cidades[3].nomes, "Remigio");
  strcpy(Cidades[4].nomes, "tabuao da serra");
  strcpy(Cidades[5].nomes, "serra talhada");
  strcpy(Cidades[6].nomes, "Recife");
  strcpy(Cidades[7].nomes, "Lajedo");
  strcpy(Cidades[8].nomes, "jacuma");
  strcpy(Cidades[9].nomes, "Brasilia");
  strcpy(Cidades[10].nomes, "Londrina");
  strcpy(Cidades[11].nomes, "penedo");
  strcpy(Cidades[12].nomes, "Floresta");
  strcpy(Cidades[13].nomes, "recife");
  strcpy(Cidades[14].nomes, "lajedo");
  strcpy(Cidades[15].nomes, "caetes");
  strcpy(Cidades[16].nomes, "Manaus");
  strcpy(Cidades[17].nomes, "Natal");
  strcpy(Cidades[18].nomes, "Arcoverde");
  strcpy(Cidades[19].nomes, "arcoverde");

  for (int i = 0; i < 20; i++){
    printf("%s\n", Cidades[i].nomes);
  }

  mergesort(Cidades, 0, 19);

  printf("\n\nOrdenado\n\n");

  for (int i = 0; i < 20; i++){

    printf("%s\n", Cidades[i].nomes);
  }

  return 0;
}


void merge(cidades *p, int inicio, int meio, int fim) {

  int aE = meio - inicio + 1;
  int aD = fim - meio;

  char **E = malloc(sizeof(char *) * aE);
  char **AE = malloc(sizeof(char *) * aE);
  char **D = malloc(sizeof(char *) * aD);
  char **AD = malloc(sizeof(char *) * aD);


  int i;
  for (i = 0; i < aE; i++) {
    E[i] = malloc(sizeof(p[inicio + i]));
    strcpy(E[i], p[inicio + i].nomes);

    AE[i] = malloc(sizeof(p[inicio + i]));
    strcpy(AE[i], p[inicio + i].nomes);
  }
  for (i = 0; i < aD; i++) {
    D[i] = malloc(sizeof(p[meio + i + 1]));
    strcpy(D[i], p[meio + i + 1].nomes);

    AD[i] = malloc(sizeof(p[meio + i + 1]));
    strcpy(AD[i], p[meio + i + 1].nomes);
  }

  int j = 0, k;
  i = 0;
  k = inicio;

  while (i < aE && j < aD) {

      conversor_strings(AE[i]);
      conversor_strings(AD[j]);

    if (strcmp(AE[i], AD[j]) > 0) {
      strcpy(p[k++].nomes, E[i++]);
    } else {
      strcpy(p[k++].nomes, D[j++]);
    }
  }
  while (i < aE) {
    strcpy(p[k++].nomes, E[i++]);
  }
  while (j < aD) {
    strcpy(p[k++].nomes, D[j++]);
  }

  free(E);
  free(AE);
  free(D);
  free(AD);
}


void mergesort(cidades *p, int inicio, int fim){

  int meio;

  if( inicio < fim ){

    meio = (inicio+fim)/2;
    mergesort(p, inicio, meio);
    mergesort(p, meio+1, fim);
    merge(p, inicio, meio, fim);

  }
}


void conversor_strings(char *p){
   
  int i;

  for(i=0; i<20; i++)
  {                            
    if(p[i] >= 'A' && p[i] <= 'Z')
      p[i] += 32;  
  }
}