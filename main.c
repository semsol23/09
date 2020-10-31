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
			printf("%d\n", i); //다른값이 여러개면 인덱스 하나 나오고 한칸 내려서 다음 다른 인덱스 
			flag_same = 0;
		}
	}
	

	return 0;
}
