#include <stdio.h>
#include <stdlib.h>
void PrintList(int list[], int size)
{
	for (int i = 0; i < size; ++i)
		printf("%5d", list[i]);
	printf("\n");
}
int BSearch(int data, int list[], int size, int (*cmp)(int, int))
{
	int left = 0;
	int right = size - 1;
	while (left <= right)
	{
		int middle = (left + right) / 2;
		switch (cmp(data, list[middle]))
		{
		case 1:
			right = middle - 1;
			break;
		case -1:
			left = middle + 1;
			break;
		case 0:
			return middle;
		}
	}

	return -1;
}
/////////////////////
int cmp(int data1, int data2)
{
	if (data2 < data1)
		return -1;
	else if (data2 > data1)
		return 1;
	else
		return 0;
}

int main()
{
	int list[10] = { 20, 23, 25, 35, 42, 51, 56, 65, 70, 89 };

	PrintList(list, 10);
	int idx = BSearch(100, list, 10, cmp);
	if (idx != -1)
		printf("list[%d]:%d\n", idx, list[idx]);
}

//#include <stdio.h>
//#include <stdlib.h>
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//int BSearch(int data, int list[], int size, int (*cmp)(int,int))
//{
//	int left = 0;
//	int right = size - 1;
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;
//		switch (cmp(data, list[middle]))
//		{
//		case 1:
//			right = middle - 1;
//			break;
//		case -1:
//			left = middle + 1;
//			break;
//		case 0:
//			return middle;
//		}
//	}
//
//	return -1;
//}
///////////////////////
//int cmp(int data1, int data2)
//{
//	if (data2 < data1)
//		return -1;
//	else if (data2 > data1)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int list[10] = { 20, 23, 25, 35, 42, 51, 56, 65, 70, 89 };
//
//	PrintList(list, 10);
//	int idx = BSearch(100, list, 10, cmp);
//	if (idx != -1)
//		printf("list[%d]:%d\n", idx, list[idx]);
//}

//#include <stdio.h>
//#include <stdlib.h>
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//int BSearch(int list[], int size, int (*cmp)(int))
//{
//	int left = 0;
//	int right = size - 1;
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;
//		switch (cmp(list[middle]))
//		{
//		case 1:
//			right = middle - 1;
//			break;
//		case -1:
//			left = middle + 1;
//			break;
//		case 0:
//			return middle;			
//		}
//	}
//
//	return -1;
//}
///////////////////////
//int cmp(int data)
//{
//	if (data < 51)
//		return -1;
//	else if (data > 51)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int list[10] = { 20, 23, 25, 35, 42, 51, 56, 65, 70, 89 };
//
//	PrintList(list, 10);
//	int idx = BSearch(list, 10, cmp);
//	if (idx != -1)
//		printf("list[%d]:%d\n", idx, list[idx]);
//}

//#include <stdio.h>
//#include <stdlib.h>
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//int BSearch(int list[], int size, int data)
//{
//	int left = 0;
//	int right = size - 1;
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;
//		if (data < list[middle])
//			right = middle - 1;
//		else if (data > list[middle])
//			left = middle + 1;
//		else
//			return middle;
//	}
//
//	return -1;
//}
//int main()
//{
//	int list[10] = { 20, 23, 25, 35, 42, 51, 56, 65, 70, 89 };
//
//	PrintList(list, 10);
//	int idx = BSearch(list, 10, 24);
//	if (idx != -1)
//		printf("list[%d]:%d\n", idx, list[idx]);
//}

//#include <stdio.h>
//#include <stdlib.h>
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//int BSearch(int list[], int size, int data)
//{
//	int left = 0;
//	int right = size - 1;
//	while (1)
//	{
//		int middle = (left + right) / 2;
//		if (data < list[middle])
//			right = middle - 1;
//		else if (data > list[middle])
//			left = middle + 1;
//		else
//			return middle;
//	}
//	return 2;
//}
//int main()
//{
//	int list[10] = { 20, 23, 25, 35, 42, 51, 56, 65, 70, 89 };
//
//	PrintList(list, 10);
//	int idx = BSearch(list, 10, 25);
//	if (idx != -1)
//		printf("list[%d]:%d\n", idx, list[idx]);
//}

//#include <stdio.h>
//#include <stdlib.h>
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//int BSearch(int list[], int size, int data)
//{
//	int left = 0;
//	int right = size - 1;
//	int middle = (left + right) / 2;
//	if (data < list[middle])
//		return -1;
//	else if (data > list[middle])
//		return -1;
//	else
//		return middle;
//
//	return 2;
//}
//int main()
//{
//	int list[10] = { 20, 23, 25, 35, 42, 51, 56, 65, 70, 89 };
//
//	PrintList(list, 10);
//	int idx = BSearch(list, 10, 42);
//	if (idx != -1)
//		printf("list[%d]:%d\n", idx, list[idx]);
//}


//#include <stdio.h>
//#include <stdlib.h>
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//int BSearch(int list[], int size, int data)
//{
//	return 2;
//}
//int main()
//{
//	int list[10] = { 20, 23, 25, 35, 42, 51, 56, 65, 70, 89 };
//
//	PrintList(list, 10);
//	int idx = BSearch(list, 10, 42);
//	if (idx != -1)
//		printf("list[%d]:%d\n", idx, list[idx]);
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int list[10] = { 20, 23, 25, 35, 42, 51, 56, 65, 70, 89 };
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int Add(int a, int b)
//{
//	return a + b;
//}
//void Print(int n) {}
//int main()
//{
//	int (*pf)(int , int );
//	void (*pf2)(int);
//
//	pf = Add;
//	pf2 = Print;
//	int result = pf(10, 20);
//	printf("result : %d\n", result);
//	printf("result : %d\n", Add(30,40));
//	printf("result : %d\n", pf(50,60));
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int Add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int result = Add(10, 20);
//
//	printf("result : %d\n", result);
//	printf("%p\n", Add);
//	printf("%p\n", main);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
////////////////////서버
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//int Search(int list[], int size, int (*cmp)(int))
//{
//	for (int i = 0; i < size; ++i)
//		if (cmp(list[i])) //콜백
//			return i;
//	return -1;
//}
/////////////////////클라이언트
//int cmp(int data)//콜백함수
//{
//	return data > 50 && data % 2 == 0;
//}
//int main()
//{
//	int list[10] = { 20,23,56,70,35,42,65,51,89,25 };
//
//	PrintList(list, 10);
//	int idx = Search(list, 10, cmp);
//	if (idx != -1)
//		printf("list[%d]:%d\n", idx, list[idx]);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
////////////////////서버
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//int Search(int list[], int size, int (*cmp)(int))
//{
//	for (int i = 0; i < size; ++i)
//		if ( cmp(list[i]) ) //콜백
//			return i;
//	return -1;
//}
/////////////////////클라이언트
//int cmp(int data)//콜백함수
//{
//	return data>50 && data%2==0;
//}
//int main()
//{
//	int list[10] = { 20,23,56,70,35,42,65,51,89,25 };
//
//	PrintList(list, 10);
//	int idx = Search(list, 10, cmp);
//	if (idx != -1)
//		printf("list[%d]:%d\n", idx, list[idx]);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
////////////////////서버
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//int Search(int list[], int size, int (*cmp)(int))
//{
//	for (int i = 0; i < size; ++i)
//		if ( cmp(list[i]) )
//			return i;
//	return -1;
//}
/////////////////////클라이언트
//int cmp(int data)
//{
//	return data == 42;
//}
//int main()
//{
//	int list[10] = { 20,23,56,70,35,42,65,51,89,25 };
//
//	PrintList(list, 10);
//	int idx = Search(list, 10, cmp);
//	if (idx != -1)
//		printf("list[%d]:%d\n", idx, list[idx]);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//int Search(int list[], int size, int data)
//{
//	for (int i = 0; i < size; ++i)
//		if (list[i] == data)
//			return i;
//	return -1;
//}
//int main()
//{
//	int list[10] = { 20,23,56,70,35,42,65,51,89,25 };
//
//	PrintList(list, 10);
//	int idx = Search(list, 10, 48);
//	if (idx != -1)
//		printf("list[%d]:%d\n", idx, list[idx]);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//int Search(int list[], int size, int data)
//{
//	for (int i = 0; i < size; ++i)
//		if (list[i] == data)
//			return i;
//	return -1;
//}
//int main()
//{
//	int list[10] = { 20,23,56,70,35,42,65,51,89,25 };
//
//	PrintList(list, 10);
//	int idx = Search(list, 10, 42);
//	if (idx != -1)
//		printf("list[%d]:%d\n", idx, list[idx]);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//int Search(int list[], int size, int data)
//{
//	return 1;
//}
//int main()
//{
//	int list[10] = { 20,23,56,70,35,42,65,51,89,25 };
//
//	PrintList(list, 10);
//	int idx = Search(list, 10, 42);
//	if (idx != -1)
//		printf("list[%d]:%d\n", idx, list[idx]);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//int main()
//{
//	int list[10] = { 20,23,56,70,35,42,65,51,89,25 };
//
//	PrintList(list, 10);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node
//{
//	int data;
//	Node* link;
//};
//int main()
//{
//	Node n1 = { 10, NULL };
//	Node n2 = { 20, NULL };
//	Node n3 = { 30, NULL };
//
//	n1.link = &n2;
//	n2.link = &n3;
//
//	printf("%d\n", n1.data);
//	printf("%d\n", n1.link->data);
//	printf("%d\n", n1.link->link->data);
//		
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node
//{
//	int data;
//	Node* link;
//};
//int main()
//{
//	Node n1 = { 10, NULL };
//	Node n2 = { 20, NULL };
//	Node n3 = { 30, NULL };
//
//	n1.link = &n2;
//	n2.link = &n3;
//
//	printf("%d\n", n1.data);
//	printf("%d\n", n2.data);
//	printf("%d\n", n3.data);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node
//{
//	int data;
//	int data2;
//	int data3;
//	Node* link;
//	Node* link2;
//	Node* link3;
//};
//int main()
//{
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node
//{
//	int data;
//	Node* link;
//};
//int main()
//{
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Point
//{
//	int x;
//	int y;
//};
//int main()
//{
//	Point arr[5] = { {1,1}, {2,2}, {3,3},{4,4}, {5,5} };
//	Point* p = (Point*)malloc(sizeof(Point)*5);
//	p[0].x = 1;
//	p[0].y = 1;
//	p[1].x = 2;
//	p[1].y = 2;
//	p[2].x = 3;
//	p[2].y = 3;
//	p[3].x = 4;
//	p[3].y = 4;
//	p[4].x = 5;
//	p[4].y = 5;
//
//	for (int i = 0; i < 5; ++i)
//		printf("(%d, %d)\n", arr[i].x, arr[i].y);
//	for (int i = 0; i < 5; ++i)
//		printf("(%d, %d)\n", p[i].x, p[i].y);
//
//	free(p);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Point
//{
//	int x;
//	int y;
//};
//int main()
//{
//	Point p1 = { 2,3 };
//	Point* p = (Point*)malloc(sizeof(Point));
//	p->x = 2;
//	p->y = 3;
//
//	printf("(%d, %d)\n", p1.x, p1.y);
//	printf("(%d, %d)\n", p->x, p->y);
//
//	free(p);
//	return 0;
//}

//#include <stdio.h>
//struct Point
//{
//	int x;
//	int y;
//};
//int main()
//{
//	Point p1 = { 2,3 };
//
//	printf("(%d, %d)\n", p1.x, p1.y);
//	return 0;
//}
