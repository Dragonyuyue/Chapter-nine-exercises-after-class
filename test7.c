//#include<stdio.h>
//#include<math.h>
//float max(float* p, int n)
//{
//	int i;
//	float m;
//	m = fabs(*p);
//	for (i = 1; i < n; i++)
//	{
//		if (fabs(*(p + i)) > m)
//		{
//			m = fabs(*(p + i));
//		}
//		return m;
//	}
//}
//void fun(float arr[2][2],int m ,int n)//m代表行数 n代表列数
//{
//	float x;
//	int i, j;
//	for (i = 0; i < m; i++)
//	{
//		x = max(*(arr + i), n);
//		for(j=0;j<n;j++)
//		{
//			*(*(arr + i) + j)/=x;
//			//arr[i][j] /= x;
//		}
//	}
//}
//int main()
//{
//	int i, j;
//	float arr[2][2] = { {1,2},{3,4} };
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("%f", arr[i][j]);
//			printf("\n");
//		}
//	}
//	fun(arr, 2, 2);
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("%f", arr[i][j]);
//			//printf("\n");
//		}
//	}
//}