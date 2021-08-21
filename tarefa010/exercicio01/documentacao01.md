##### Exercício 01 da tarefa009.

1. Implementar um programa que:
  * leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa em dias.
  * Leve em consideração o ano com 365 dias e o mês com 30.
  * Exemplo: 3 anos, 2 meses e 15 dias = 1170 dias.


  ###### Documentação: 

Realizado a declaração de variáveis: 

    #include <stdio.h>

        int main(){

        int dia, mes, ano, anos, meses, total;

Declaração realizada com inteiros visto que não se tratava de números com ponto fluruante por ser dias, mes e ano. 

    printf("digite os anos, meses e dias desde seu nascimento: \n");

    scanf("%d %d %d", &ano, &mes, &dia);

Realizado o retorno de mensagem ao usuário e, leitura das variaveis solicitadas pelo programa. 

    anos = (ano*12)*30;
    meses = mes*30;
    total = anos + meses + dia;

Operações realizadas sendo anos calculado por número de anos * meses no ano e, o resultado disso *30 por serem 30 dias no mes. 

    printf("%d\n", total);

Retornado ao usuário os dias convertidos.     