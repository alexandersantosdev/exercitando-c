
int main()
{

    int numeros[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int i = 0;

    while (i < 10)
    {
        printf("%d\n", numeros[i]);
        i++;
    }

    int matrix[2][2];
    matrix[0][0] = 1;
    matrix[0][1] = 2;
    matrix[1][0] = 3;
    matrix[1][1] = 4;

    for (i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\n", matrix[i][j]);
        }
    }

    int matrix2[3][3];

    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite o proximo numero: ");
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("[%d]", matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
