#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


// A6(x) - ср арифметическое элементов массива Х
float A6 (int *x, int n)
{
    int A6x = 0, count = 0, i; 
    float sar;
    for (i = 0; i < n; i++)
    {
        A6x += x[i];
        count++;
    }
    sar = A6x / count;
    return sar;
}

// М4(x) - количество элементов массива Х, значение которых больше A6
int M4 (int *x, int n)
{
    int M4x = 0, i;
    for (i = 0; i < n; i++)
    {
        if (x[i] < A6(x, n))
        {
            M4x += 1;
        }
    }
    return M4x;
}

// А5(y) - сумма max и min элементов массива Y
int A5 (int *y, int m)
{
    int min = 0, max = 0, j, sum = 0, flag = 0;
    for (j = 0; j < m; j++)
    {
        if (flag == 0) 
        {
            max = y[j];
            min = y[j];
            flag = 1;
        }
        if(max < y[j]) 
        {
            max = y[j]; 
        }
        if(min > y[j]) 
        {
            min = y[j];
        }
    }
    sum = max + min;
    return sum;
}

// A1(y) - сумма элементов массива Y
int A1 (int *y, int m)
{
    int A1y = 0, j;
    for (j = 0; j < m; j++)
    {
        A1y += y[j];        
    }
    return A1y;
}

// М1(y) - количество элементов массива Y, значения которых меньше A1
int M1 (int *y, int m)
{
    int M1y = 0, j;
    for (j = 0; j < m; j++)                 
    {
        if (y[j] < A1(y, m))
        {
            M1y += 1;
        }
    }
    return M1y;
}


int main(int argc, char *argv[]) {
    system ("chcp 1251");
    srand(time(NULL));
    int n, m;
    printf("Введите размерность массива X(> 1): "); //при 1 M4(X, n) возвращает 0. На 0 делить нельзя
    scanf("%d",&n);
    printf("Введите размерность массива Y: ");
    scanf("%d",&m);
    int X[n], Y[m];
    int i;
    for (i = 0; i < n; i++)
    {
        X[i] = rand() % 20 - 10;
        printf("%d ", X[i]);    
    }
    printf("\n");
    int j;
    for (j = 0; j < m; j++)
    {
        Y[j] = rand() % 20 - 10;
        printf("%d ", Y[j]);
    }
    float result;
    if (A5(Y, m) > 8)
    {
        result = sqrt(A6(X, n) + 2.8 * M1(Y, m));
    }
    else
    {
        result = fabs((A5(Y, m) / M4(X, n)) - 0.72 * pow(10, -2));
    }
    printf("\n");
    printf("%f", result);
    return 0;
}
