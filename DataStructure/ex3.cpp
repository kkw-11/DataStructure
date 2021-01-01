#include <stdio.h>
#include <stdlib.h>
void PrintList(int list[], int size) {

	for (int i = 0; i < size; ++i)
		printf("%5d", list[i]);

	printf("\n");
}

int Search(int list[], int size, int data) {
	
	for (int i = 0; i < size; ++i)
		if (list[i] == data)
			return i;

	return -1;
}

int main() {

	int list[10] = { 20,23,56,70,35,42,65,51,89,25 };
	PrintList(list, 10);
	int idx = Search(list, 10, 42);

	if (idx != -1)
		printf("list[%d]:%d", idx, list[idx]);
	else
		printf("cannot data\n");

	return 0;



}

//#include <stdio.h>
//#include <stdlib.h>
//void PrintList(int list[], int size) {
//
//	for (int i = 0; i < size; ++i)
//		printf("%5d", list[i]);
//
//	printf("\n");
//}
//
//stub code
//int Search(int list[], int size, int target) {
//
//	return 1;
//}
//
//int main() {
//
//	int list[10] = { 20,23,56,70,35,42,65,51,89,25 };
//	PrintList(list, 10);
//	int idx = Search(list, 10, 42);
//
//	if (idx != -1)
//		printf("list[%d]:%d", idx, list[idx]);
//
//	return 0;
//
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//void PrintList(int list[], int size) {
//
//	for (int i = 0; i < size; ++i)
//		printf("%5d", list[i]);
//
//	printf("\n");
//}
//
//int main() {
//
//	int list[10] = {20,23,56,70,35,42,65,51,89,25};
//	PrintList(list, 10);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node {
//	int data;
//	Node* link;
//};
//
//int main() {
//
//	Node n1 = { 10,NULL };
//	Node n2 = { 20, NULL };
//	Node n3 = { 30, NULL };
//
//	n1.link = &n2;
//	n2.link = &n3;
//
//	printf("%d \n", n1.data);
//	printf("%d \n", n1.link->data);
//	printf("%d \n", n1.link->link->data);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node {
//
//	int data;
//	Node* link;
//
//};
//
//int main() {
//
//	Node n1 = { 10,NULL };
//	Node n2 = { 20, NULL };
//	Node n3 = { 30, NULL };
//
//	n1.link = &n2;
//	n2.link = &n3;
//
//	printf("%d \n", n1.data);
//	printf("%d \n", n2.data);
//	printf("%d \n", n3.data);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node {
//
//	int data;
//	int data2;
//	int data3;
//	Node* link;
//	Node* link2;
//	Node* link3;
//
//};
//
//int main() {
//
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node {
//
//	int data;
//	Node* link;
//};
//
//int main() {
//
//
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//struct Point {
//	int x;
//	int y;
//};
//
//int main() {
//
//	Point arr[5] = { {1,1},{2,2},{3,3},{4,4},{5,5} };
//	Point* p = (Point*)malloc(sizeof(Point) * 5);
//
//	p[0].x = 1;
// 	p[0].y = 1;
//	p[1].x = 2;
//	p[1].y = 2;
//	p[2].x = 3;
//	p[2].y = 3;
//	p[3].x = 4;
//	p[3].y = 4;
//	p[4].x = 5;
//	p[4].y = 5;
//
//	for (int i = 0; i < 5; ++i) {
//		printf("(%d, %d)\n", arr[i].x, arr[i].y);
//	}
//
//	for (int i = 0; i < 5; ++i) {
//		printf("(%d, %d)\n", p[i].x, p[i].y);
//	}
//
//
//	free(p);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Point {
//	int x;
//	int y;
//};
//
//int main() {
//
//	Point arr[5] = { {1,1},{2,2},{3,3},{4,4},{5,5} };
//	Point* p = (Point*)malloc(sizeof(Point)*5);
//
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
//	for (int i = 0; i < 5; ++i) {
//		printf("(%d, %d)\n", arr[i].x, arr[i].y);
//	}
//
//	for (int i = 0; i < 5; ++i) {
//		printf("(%d, %d)\n", p[i].x, p[i].y);
//	}
//
//
//	free(p);
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//struct Point {
//	int x;
//	int y;
//};
//
//int main() {
//
//	Point p1 = { 2,3 };
//	Point* p =(Point*)malloc(sizeof(Point));
//
//	p->x = 2;
//	p->y = 3;
//
//	printf("(%d, %d)", p1.x, p1.y);
//	printf("(%d, %d)", p->x, p->y);
//
//	free(p);
//	return 0;
//}

//#include<stdio.h>
//
//struct Point {
//	int x;
//	int y;
//};
//
//int main(){
//
//	Point p1 = {2,3};
//
//	printf("(%d, %d)",p1.x,p1.y);
//
//	return 0;
//}