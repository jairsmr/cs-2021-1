#include <stdio.h>

int main(){

    int a,b,c, g,h,i, media, media2, soma, media_medias;


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

    return 0;

}