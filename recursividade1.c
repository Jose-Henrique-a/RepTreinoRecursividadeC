#include <stdio.h>
#include <stdlib.h>
/*  Aula 160: Desenvolva uma função recursiva que calcule 
    a soma dos números inteíros de 1 a N.
*/
int soma( int n){
    if (n==0){
        return 0;
    }else{
        return n + soma(n - 1);
    }
}

int main(){
    int n;
    printf("Digite N:  ");
    scanf("%d", &n);
    printf("Soma de 1 ate %d eh:  %d\n", n , soma(n));
}

