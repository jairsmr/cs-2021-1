#include <stdio.h>
#include <stdlib.h>
int main()
{
int codigo1, codigo2, total1, total2;
int valor1, valor2, q1, q2;
float IPI, resultado, total;
    printf("Informe o codigo, valor e quantidade da peça 1:");
    
    scanf("%c", "%d","%d",&codigo1, &valor1, &q1);
        total1 = q1 *valor1;
    printf("Informe o codigo, valor e quantidade da peça 2:");

    scanf("%c",  "%d",  "%d" ,&codigo2, &valor2, &q2);
        total2= q2 * valor2;
    printf("Informe o percentual de desconto IPI:");

    scanf("%f", &IPI);
        total = ((total1 + total2 )* (IPI/100));
        resultado = ((valor1*q1)+ (valor2*q2)) * ((IPI/100)+1);
            printf("O valor total a ser pago e o resultado e: %2.f %2.f", total, resultado);
    system ("pause");

return 0;
}