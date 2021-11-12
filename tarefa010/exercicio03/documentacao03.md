## Exercício 03 da tarefa009.

3. Implementar um programa que:
  * Leia o valor de um saldo e imprima-o com reajuste de 15%.


###### Documentação: 

Realizado a declaração de variáveis: 

  #include <stdio.h>

  int main(){

    double valor, reajuste, total;

Declaração realizada com double visto que seria necessário realizar o cálculo com base em um salário com precisão dupla após a vírgula. 

    scanf("%lf", &valor);

    reajuste = (valor/100)*15;
    total = reajuste + valor;    

Realizada a leitura das variaveis solicitadas pelo programa e, operação realizada.
    
    printf("reajuste = %.2lf\n", total);

Retorno ao usuário do total = reajuste + valor. 