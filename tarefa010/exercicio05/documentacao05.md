## Exercício 05 da tarefa009.

5. Implementar um programa que:
  * leia o valor do salário mínimo e o valor do salário de um usuário,
  * calcule a quantidade de salários mínimos esse usuário ganha e imprima o resultado. (1SM=R$1.045,00).


###### Documentação: 

Realizado a declaração de variáveis: 

  #include <stdio.h>

  int main(){

  double salario, usuario, nm_salarios;

Declaração realizada com double visto que seria necessário realizar o cálculo com base em um salário com precisão dupla após a vírgula. 

    scanf("%lf", &salario);
    scanf("%lf", &usuario);  

Realizada a leitura das variaveis solicitadas pelo programa que são respectivamente o salário do usuário e, o salário minimo definido como base pra operação.
    
    nm_salarios= usuario/salario;

    prinf("%.2lf\n", nm_salarios);

    return 0;
  }

Retorno ao usuário sendo o nm_salarios definido pelo salário do usuário dividido pelo salário coletado coo base pelo programa. 