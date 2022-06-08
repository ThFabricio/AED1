#include <stdio.h>
#include <stdlib.h>


int main(){

    long long int a, b, n, contador = 0, aux1, aux2;

    scanf("%lld %lld %lld", &a, &b, &n);

    while(1){

        aux1 = a + b;
        aux2 = b + a;
        contador += 1;

        if(aux1 >= aux2)
            a += b;
        else
            b += a;

        if(a > n || b > n){

            break;
        }
    }

    printf("%lld", contador);

    return 0;
}
