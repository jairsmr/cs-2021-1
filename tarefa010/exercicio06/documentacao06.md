## Exercício 06 da tarefa009.

6. Implementar um programa que:
  * leia um número inteiro
  * e imprima o seu antecessor e seu sucessor.


###### Documentação: 

Realizado a declaração de variáveis: 

  #include <stdio.h>

  int main()

  {

    int x;

Declaração realizada com inteiro por ser somente um número inteiro na leitura de variáveis.

    printf("Digite um numero inteiro: \n");
    scanf("%d", &x);  

Realizada a leitura das variaveis solicitadas pelo programa onde foi especificado que deveria ser um inteiro.
    
    printf("antecessor de %d = %d\n", x, (x-1));

    printf("sucessor de %d = %d\n", x, (x+1));

    return 0;
    }

Retorno ao usuário sendo o antecessor o número menos 1 e, sucessor o número mais 1. 