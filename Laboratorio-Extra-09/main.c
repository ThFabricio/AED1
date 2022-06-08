#include <stdio.h>
#include <stdlib.h>

int main(){

    long long int a, b, c, calculo[6], i, maior, aux = 0;

    scanf("%lld %lld %lld", &a, &b, &c);

    calculo[0] = a + b + c;
    calculo[1] = a * b * c;
    calculo[2] = (a+b) * c;
    calculo[3] = (a*b) + c;
    calculo[4] = a + (b*c);
    calculo[5] = a * (b+c);

    for (i=0; i < 6; i++){

        maior = calculo[i];

        if (maior > aux){

            aux = maior;
        }
    }




    printf("%lld", aux);


    return 0;
}
