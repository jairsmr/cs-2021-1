#include <stdio.h>

int main(){

    double valor, reajuste, total;

    scanf("%lf", &valor);

    reajuste = (valor/100)*15;
    total = reajuste + valor;

    printf("reajuste = %.2lf\n", total);

}