#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    printf("fatorial de %d = %d", n, fatorial(n));

    return 0;
}

//recursividade
int fatorial(int n){
    if(n == 1) return 1;
    return n * fatorial(n - 1);
}


