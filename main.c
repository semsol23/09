#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int a[SIZE] = {1,2,3,4,5};
	int b[SIZE] = {1,2,3,5,6};
	int flag_same = 1;
	
	for(i=0; i<SIZE; i++)
	{
		if (a[i] != b[i])
		{
			printf("%d\n", i); //�ٸ����� �������� �ε��� �ϳ� ������ ��ĭ ������ ���� �ٸ� �ε��� 
			flag_same = 0;
		}
	}
	

	return 0;
}
