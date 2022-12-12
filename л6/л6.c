#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	system("chcp 1251");
	int n;
	scanf("%d", &n);
	int A[n][n];
	int i, j;
	int k = 1;
	int maxx = -9999;
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			A[i][j] = rand() % 10 - 10;
		}
	}
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			printf("%4d ", A[i][j]);
		}
		printf("\n");
	}
	int maxk = 1;
	for (i = 1; i < n; i++){
		for (j = 0; j+i < n; j++){
			if (A[n-i][j+i] >= maxx){
				if (A[n-i][j+i] == maxx){
					k++;
					if (k > maxk){
						maxk = k;
					}
				}
				else{
					maxx = A[n-i][j+i];
					k = 1;
				}
			}
		}
	}
	printf("%d ", maxk);
	float srarf[n];
    for (j = 0; j<n;j++){
   		float srarf1 = 0;
        for (i = 0; i<n;i++){
            srarf1 += A[i][j];
        }
        srarf1 = srarf1/n;
        srarf[j] = srarf1;

        printf("\n");
    }
        for (i = 0; i<n;i++){
        printf("%f ", srarf[i]);
    }
    float temp;
    int item,counter; 
    for (counter = 1; counter < n; counter++)
    {
        temp = srarf[counter];
        item = counter-1;
        while(item >= 0 && srarf[item] > temp) 
        {
            srarf[item + 1] = srarf[item];
            for(i = 0; i<n;i++){
                int temp1 = A[i][item];
                A[i][item] = A[i][item+1];
                A[i][item+1] = temp1;
            }
            srarf[item] = temp;
            item--;
            
        }
    }
    printf("\n");
    for (i = 0; i<n;i++){
        printf("%f ", srarf[i]);
    }
    
    printf("\n \n");
    printf("222:\n");
    for (i = 0; i<n;i++){
        for (j = 0;j<n;j++){
        printf("%4d ", A[i][j]);
    }
    printf("\n");
    }
    return 0;

}