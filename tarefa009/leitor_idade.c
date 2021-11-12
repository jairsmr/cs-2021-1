#include <stdio.h>

int main(){

    int dia, mes, ano, anos, meses, total;
    printf("digite os anos, meses e dias desde seu nascimento: \n");

    scanf("%d %d %d", &ano, &mes, &dia);

    anos = (ano*12)*30;
    meses = mes*30;
    total = anos + meses + dia;

    printf("%d\n", total);
    
}