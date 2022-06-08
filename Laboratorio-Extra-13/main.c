#include <stdio.h>
#include <stdlib.h>


int main(){

    long long int m, n, aux;

    scanf("%lld %lld", &n, &m);

    if (m > n)
        printf("-1");

    else{

        aux = n / 2;

        if(aux%m == 0)

            printf("%lld", aux);

        else{

            while(aux%m != 0)
                aux += 1;

            printf("%lld", aux);
        }


    }

    return 0;
}
