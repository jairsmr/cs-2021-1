## Exercício 02 da tarefa009.

2. Implementar um programa que:
  * imprima a média aritmética dos números 8,9 e 7.
  * A média dos números 4, 5 e 6.
  * A soma das duas médias.
  * A média das médias.


  ###### Documentação: 

Realizado a declaração de variáveis: 

    #include <stdio.h>

    int main(){
    int a,b,c, g,h,i, media, media2, soma, media_medias;

Declaração realizada com inteiros visto que não se tratava de números com ponto fluruante. 

    scanf("%d %d %d", &a, &b, &c);
    media= (a+b+c)/3;
    printf("%d", media);

    scanf("%d, %d, %d", &g, &h, &i);
    media2 = (g+h+i)/3;
    printf("%d", media2);    
    
    soma = media+media2;
    printf("%d", soma); 

    media_medias = soma/2;
    printf("%d", media_medias);     

Realizada a leitura das variaveis solicitadas pelo programa e, retornado média aritimética das variáveis. 
Feito o retorno das operações para o usuário.
