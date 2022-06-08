#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void contador_de_caracter (char *frase, char c);

void contador_de_vogais (char *frase);

int main()
{
    char str[150], c;
    int i, tam;

    printf("digite uma string: ");
    scanf("%[^\n]s", str);
    getchar();

    printf("digite um caracter que voce quera sua quantidade na string: ");
    scanf("%c", &c);

    tam = strlen(str);

    for (i = 0; i < tam; i ++){

      str[i] = tolower(str[i]);
    }

    c = tolower(c);

    contador_de_caracter(str, c);

    contador_de_vogais(str);

    return 0;
}


void contador_de_caracter (char *frase, char c){

    int aux, tam, contador;

    contador = 0;

    tam = strlen(frase);

    for(aux = 0; aux < tam; aux ++){

        if(c == frase[aux]){

            contador += 1;
        }
    }

    printf("a string possui %i caracteres doque foi escolhido\n", contador);

}


void contador_de_vogais(char *frase){

    int tam, aux, cont;

    cont = 0;

    tam = strlen(frase);

    for(aux = 0; aux < tam; aux ++){

        if(frase[aux] == 'a'){

            cont += 1;

        } else if(frase[aux] == 'e'){

            cont += 1;
        } else if(frase[aux] == 'i'){

            cont += 1;
        } else if(frase[aux] == 'o'){

            cont += 1;
        } else if(frase[aux] == 'u'){

            cont += 1;
        }
    }

    printf("a String possui %i vogais", cont);

}
