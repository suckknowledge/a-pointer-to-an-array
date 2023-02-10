#include<stdio.h>
void xt2(int (*arr)[5],int a,int b)
{
	int i = 0, j = 0;
	for (i = 0;i < a;i++)
	{
		for (j = 0;j < b;j ++ )
		{
			printf(" %d ", *(*(arr + i)+j));
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{11,22,33,44,55},{111,222,333,444,555} };
	xt2(arr, 3, 5);
	printf("%p   %p", &arr, &(arr));
	return 0;
}
//void xt2(int* arr, int a)
//{
//	int i = 0;
//	for (i = 0;i < a;i++)
//	{
//		printf(" %d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[5] = {111,222,333,444,555};
//	xt2(arr, 5);
//	return 0;
//}