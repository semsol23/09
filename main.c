#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 3 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void addMatrix(int A[][COLS], int B[][COLS], int C[][COLS])
{
	int r, c;
	
	for (r=0; r<ROWS; r++)
		for (c=0; c<COLS; c++)
			C[r][c] = A[r][c]+B[r][c];
			
}

void printMatrix(int C[][COLS])
{
	int r, c;
	
	for (r=0; r<ROWS; r++)
		{
			for (c=0; c<COLS; c++)
				printf("%3d", C[r][c]);
			printf("\n");
		}
}

int main(int argc, char *argv[]) {
	
	int A[ROWS][COLS] = 
	{
		{2,3,0},
		{8,9,1},
		{7,0,5}
	};
	
	int B[ROWS][COLS] = 
	{
		{1,0,0},
		{0,1,0},
		{0,0,1}
	};

	int C[ROWS][COLS];
	
	addMatrix(A,B,C);
	printMatrix(C);
	
	return 0;
}


