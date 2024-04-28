#include <stdio.h>
#include <stdlib.h>
/*  Aula 153: Funções e procedimentos recursivos 
    Exemplo: imprimir todos os números de n até 0
*/
int imprimir( int x ){
    if (x == 0)
        printf(" %d ", x);
    else{
        printf(" %d ", x);
        imprimir(x - 1);
    }
}

int main(){
    int n;
    printf("Digite um valor maior que zero:  ");
    scanf("%d", &n);
    imprimir(n);

    return 0 ;
}

