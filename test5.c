#include<stdio.h>
//void max(int* p,int sz,int* x)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		if (*(p + i) > *x)
//		{
//			*x = *(p + i);
//			p++;
//		}
//	}
//	//return x;
//}
//int main()
//{
//	int x;
//	int arr[10] = {1,4,8,3,25,11,9,5,2,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	max(arr, sz, &x);
//	printf("%d\n", x);
//
//}
//int* max(int* x, int n)
//{
//	int i, * p;
//	p = x;
//	for (i = 1; i < n; i++)
//	{
//		if (*(x + i) > *p)
//		p = x + i;
//	}
//	return p;//����p��ַ��p��ַ���Ѿ������ֵ
//}
//void main()
//{
//	int a[10] = { 1,4,8,3,25,11,9,5,2,10 };
//	int* pmax;
//	pmax = max(a, 10);
//	printf("max=%d\n", *pmax);//��p��ַ�����ú�õ����ֵ
//}