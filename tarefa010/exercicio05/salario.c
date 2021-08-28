#include <stdio.h>

int main(){

double salario, usuario, nm_salarios;

    scanf("%lf", &salario);
    scanf("%lf", &usuario);

    nm_salarios= usuario/salario;

    prinf("%.2lf\n", nm_salarios);

    return 0;

}