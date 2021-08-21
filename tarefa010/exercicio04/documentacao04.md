## Exercício 04 da tarefa009.

4. Implementar um algoritmo que lê:
  * a porcentagem do IPI a ser acrescido no valor das peças;
  * o código da peça 1,
  * valor unitário da peça 1,
  * quantidade de peças 1
  * o código da peça 2,
  * valor unitário da peça 2,
  * quantidade de peças 2
    O programa deve calcular o valor total a ser pago e apresentar o resultado.

    Fórmula : _(valor1*quant1 + valor2*quant2)_*_(IPI/100 + 1)_


###### Documentação: 

Realizado a declaração de variáveis: 

  #include <stdio.h>
  #include <stdlib.h>
  int main()
  {
    int codigo1, codigo2, total1, total2;
    int valor1, valor2, q1, q2;
    float IPI, resultado, total;

Declaração realizada com inteiros, e float. Além da declaração, adicionada biblioteca <stdlib.h>. 

    printf("Informe o codigo, valor e quantidade da peça 1:");
    
    scanf("%c", "%d","%d",&codigo1, &valor1, &q1);
        total1 = q1 *valor1;
    printf("Informe o codigo, valor e quantidade da peça 2:");

    scanf("%c",  "%d",  "%d" ,&codigo2, &valor2, &q2);
        total2= q2 * valor2;
    printf("Informe o percentual de desconto IPI:");

    scanf("%f", &IPI);

Realizada a leitura das variaveis solicitadas pelo programa e, operação realizada.
    
        total = ((total1 + total2 )* (IPI/100));
        resultado = ((valor1*q1)+ (valor2*q2)) * ((IPI/100)+1);

Realizadas operações

            printf("O valor total a ser pago e o resultado e: %2.f %2.f", total, resultado);
    system ("pause");

adicionado "pause" para break da operação. 