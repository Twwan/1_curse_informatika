#include <stdio.h>
#include <stdlib.h>

int main() {
	system("chcp 1251");
	int n,m;
	printf("������� ���������� ������ ����� ");
	scanf("%d", &n);
	printf("������� ���������� ����� ����� ");
	scanf("%d", &m);

	int i,j,A[n][m];
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			A[i][j] = 0;
			printf("%2d", A[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			printf("������� ��������� ����� %d � ����� %d ", i+1,j+1);
			scanf("%d", &A[i][j]);
		}
	}
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			if (A[i][j] != 0);
			printf("%2d", A[i][j]);
		}
		printf("\n");
	}
	printf("������ ����: ");
	for (i=0;i<n;i++){
		for (j=0;j<=i;j++){
			if (A[i][j] == 1){
				printf("%d-%d ", i+1, j+1);
			}
		}
	}
	return 0;
}