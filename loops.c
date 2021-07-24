#include <stdio.h>
#include <stdlib.h>

int main(){

    int i = 1;
    int num = 2;

    //tabuada usando while
    while(i <= 10){
        printf("%d X %d = %d\n", num, i, num * i);
        i++;
    }

    //tabuada usando for
    for(i=1; i<=10; i++){
        printf("%d X %d = %d\n", num, i, num * i);
    }

    return 0;
}
