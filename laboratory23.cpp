#include <stdio.h>
const int R = 10;
const int C = 10;
// experience 3 

// experience 11
void diagonals(int mat[R][C])
{
	int count=0;
	int i, j=0;
	for (i = 0; i < 10; i++)
	{
		if (mat[i][j] == mat[i][9 - i])
			count = count++;
		else
		{
			printf("False");
			break;
		}
		j++;
	}
	if (count == 10)
		printf("true");
}

int main()
{
	int i,j;
	int mat[10][10] = {{0,1,2,3,4,5,6,7,8,0},{0,1,2,3,4,5,6,7,1,9},{0,1,2,6,4,5,6,2,8,9},{0,1,2,3,4,5,3,7,8,9},{0,1,2,3,4,4,6,7,8,9},{0,1,2,3,5,5,6,7,8,9},{0,1,2,6,4,5,6,7,8,9},{0,8,7,3,4,5,6,7,8,9},{0,8,2,3,4,5,6,7,8,9},{9,1,2,3,4,5,6,7,8,9} };
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	diagonals(mat);
}
