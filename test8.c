#include<stdio.h>
void tran(int arr[5][5], int m, int n)
{
	int i, j;
	float y;
	for (i = 0; i < m; i++)
	{
		for (j = i+1; j < n; j++)
		{
			y = *(*(arr + i) + j);
			*(*(arr + i) + j) = *(*(arr + j) + i);
			*(*(arr + j) + i) = y;
		}
	}
}
int main()
{
	int i, j;
	int arr[5][5] = { {1,2,3,4,5},{11,12,13,14,15},{21,22,23,24,25},{31,32,33,34,35},{41,42,43,44,45} };
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%4d ", arr[i][j]);
		}
		printf("\n");
	}
	tran(arr, 5, 5);
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%4d ", arr[i][j]);
		}
		printf("\n");
	}
}