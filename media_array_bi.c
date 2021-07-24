#include <stdio.h>
#include <stdlib.h>

int main()
{
    //cálculo de média usando matriz, dois primeiros valores são as notas 1 e 2, terceiro é calculado como média aritmética;

    float notas[3][3];

    int i, j;

    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("Digite a nota %d do aluno %d: ", j + 1, i+1);
            scanf("%f", &notas[i][j]);
        }
        notas[i][j] = (notas[i][j-2] + notas[i][j-1])/2;
    }

    for(i=0; i<3; i++){
            printf("Aluno %d: ", i + 1);
        for(j=0; j<2; j++){
            printf(" nota %d: [%.1f]", j+1, notas[i][j]);
        }
        printf(" Media: [%.1f]", notas[i][j]);
        printf("\n");
    }

    return 0;
}

