//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int arr[5] = {0}, i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p;
//	printf("输入数字：");
//	for (i = 0; i < sz; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz-1; j++)
//		{
//			if (fabs(arr[j]) > fabs(arr[j + 1]))
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}
//int main()
//{
//	int arr[5] = { 0 }, i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p;
//	printf("输入数字：");
//	for (i = 0; i < sz; i++)
//	{
//		scanf_s("%d",&arr[i]);
//	}
//	p = &arr;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)
//		{
//			if (fabs(p[j]) > fabs(p[j+1]))
//			{
//				int tmp =*p;
//				*p = *(p+1);
//				*(p+1) = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",*(p+i));
//	}
//}