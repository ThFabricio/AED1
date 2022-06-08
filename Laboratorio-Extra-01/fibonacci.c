#include "fibonacci.h"

long long int calculo(int x){




    if (x == 0){

        return 0; //Retorno dado como 0, pois Fibonnaci de 0 é 0
    }

    else if (x == 1){

        return 1; //Retorno dado como 1, pois Fibonacci de 1 é 1

    }
    else{

        long long int i;
        long long int Fib_n = 0;     //Para calculos de numeros da Sequencia de Fibonnaci de 2 em diante
        long long int Fib_n1 = 1;//e dada a forma de F(n) = F(n-1) + F(n-2), ou seja e a soma dos 2 numeros da sequencia anterios
        long long int Fib_n2 = 0;

        for(i = 2; i <= x; i ++){

            Fib_n = Fib_n1 + Fib_n2;
            Fib_n2 = Fib_n1;
            Fib_n1 = Fib_n;

        }

        return Fib_n;
    }

}
