#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = right / 2 + left / 2;
//
//		if (arr[mid] < k)
//		{
//			left = mid;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	printf("找不到\n");
//	return 0;
//}

 /*void move(char from, char to)
{
	printf("%c to %c\n", from, to);
}
void hanoi(int n, char a, char b, char c)
{
	if (n == 1)
		move(a, c);
	else
	{
		hanoi(n - 1, a, c, b);
		move(a, c);
		hanoi(n - 1, b, a, c);
	}
}

void main()
{
	int n;
	scanf("%d", &n);
	hanoi(n,'A','B','C');
}*/

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int n = 0;
	for (n = 0; n < sz; n++)
	{
		printf("%d ", arr[n]);
	}
	return 0;
}