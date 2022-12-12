#include <stdlib.h>
#include <stdio.h>

int main()
{
    system("chcp 1251");
    int **mass;
    int n;
    printf("¬ведите размер матрицы n: ");
    int check = scanf("%d", &n);
    if (n <= 0 || check != 1)
    {
        printf("\n¬ведите число");
    }
    printf("\n");
    mass = (int **)malloc(sizeof(int *) * n);

    int k = 1;
    
    for (int i = 0; i < n; i++)
    {
        mass[i] = (int *)malloc(sizeof(int) * n);
    }

    for (int i = n-1; i >= 0; --i)
    {
        for (int j = n-1; j >= 0; --j)
        {
            mass[j][i] = k;
            k++;
        }
    }

    for (int i = 0; i < n; ++i)
    {

        for (int j = 0; j < n; ++j)
        {
            printf("%4d", mass[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
