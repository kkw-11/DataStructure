#include <stdio.h>

void push(int* arr, int n, int i)
{
	int a = n;
	arr[0] = a;
	arr[2] = ++a;
	arr[i] = a;
}

int main()
{

	int arr[5];

	push(arr, 10, 3);

	printf("%d\n", arr[0]);
	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);


	return 0;
}