#include <stdio.h>
#include <stdlib.h>

void somar(int n1, int n2, int *resultado);

int main(){

    int n1 = 10;
    int n2 = 20;
    int resultado = 0;
    somar(n1, n2, &resultado);
    printf("%d\n", resultado);

    return 0;
}

//passando parâmetro por referência
void somar(int n1, int n2, int *resultado){
    *resultado = n1 + n2;
}
