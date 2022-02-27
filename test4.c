#include<stdio.h>
//void maxmin(int*p,int sz,int*max, int*min)
//{
//	int i = 0;
//	*p = *max = *min;
//	for (i = 0; i < sz; i++)
//	{
//		if (*(p + i) > *max)
//		{
//			*max = *(p + i);
//		}
//		if (*(p + i) < *min)
//		{
//			*min = *(p + i);
//		}
//	}
//
//}
//int main()
//{
//	int max = 0;
//	int min = 0;
//	int arr[5] = { 0,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	maxmin(arr,sz,&max, &min);
//	printf("最大值=%d, 最小值=%d\n", max, min);
//	return 0;
//}
void cmax(int* p,int sz, int* x)
{
	int i = 0;
	*p = *x;
	for (i = 1; i < sz; i++)
	{
		if (*(p + i) > *x)
		{
			*x = *(p + i);
		}
	}

}
void cmin(int* p,int sz, int* y)
{
	int j = 0;
	*p = *y;
	for (j = 1; j < sz; j++)
	{
		if (*(p + j) < *y)
		{
			*y = *(p + j);
		}
	}
}
int main()
{
	int x=0,y=0;
	int arr[5] = { 5,1,4,7,3 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	cmax(arr,sz,&x);
	cmin(arr,sz,&y);
	printf("最大值=%d，最小值=%d\n", x, y);
}

