#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int cartao, cash, gasto, cartao_restante;

    scanf("%lld", &cartao);

    cash = cartao/10;

    if (cartao%10 == 0){

        gasto = cartao + cash;

    } else{

        cartao_restante = (cartao%10) + cash;
        cash += cartao_restante/10;
        gasto = cartao + cash;

    }

    printf("%lld", gasto);

}
