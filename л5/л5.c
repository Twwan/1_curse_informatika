#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	system("chcp 1251");
	int n;
	printf("������� n - ����������� �������: ");
	scanf("%d",&n);
	int mas[n], i;
	for (i = 0; i < n; i++){
		mas[i] = rand() % 20;
		printf("%d ",mas[i]);	
	}
	printf("\n");
	
	int proizv = 1;
	for (i = 0; i < n; i++){
		if (mas[i] % 7 == 0 && mas[i] % 9 == 0){
			proizv *= mas[i];
			i++;
		}
	}
	if (proizv = 1){
		printf("������������ ������� 7 � 9: ���");
	}
	else{
		printf("%d ������������ ������� 7 � 9:", proizv);
	}
	int minimum = mas[0];
	int index;

	for (i = 0; i < n; i++){
		if (mas[i] < minimum){
			minimum = mas[i];
			index = i + 1;
			i++;
		}
	}
	printf("\n���������� ��������� �������, ������������� ����� ������������ ��������: %d", i-index);
	int z;
	int h = 0;
	printf("\n������ ����� �������� ��������� > �������: ");
	for (i = 0; i < n; i++){
		if (mas[i]>h){
			for (z = i; z < n-1; z++){
				mas[z] = mas[z+1];
			}
			n--;
			i--;
		}
		else{
			printf("%d ", mas[i]);
		}
		h++;
	}

	return 0;
}
