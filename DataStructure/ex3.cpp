#include <stdio.h>
#include <stdlib.h>
struct Point {
	int x;
	int y;
};

int main() {

	Point arr[5] = { {1,1},{2,2},{3,3},{4,4},{5,5} };
	Point* p = (Point*)malloc(sizeof(Point) * 5);

	p[0].x = 1;
	p[0].y = 1;
	p[1].x = 2;
	p[1].y = 2;
	p[2].x = 3;
	p[2].y = 3;
	p[3].x = 4;
	p[3].y = 4;
	p[4].x = 5;
	p[4].y = 5;

	for (int i = 0; i < 5; ++i) {
		printf("(%d, %d)\n", arr[i].x, arr[i].y);
	}

	for (int i = 0; i < 5; ++i) {
		printf("(%d, %d)\n", p[i].x, p[i].y);
	}


	free(p);
	return 0;
}

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