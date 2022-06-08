#include <stdio.h>
#include <stdlib.h>
#include "fibonacci.h"

int main(){
    int n;
    long long int fibonacci;

    printf("Digite numero da sequencia de Fibonacci, que deseja obter: \n");
    scanf("%d", &n);
    fibonacci = calculo(n);

    printf("O Fibonacci de %d eh %lld", n, fibonacci);

    return 0;
}
