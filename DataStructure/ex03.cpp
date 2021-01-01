#include <stdio.h>
#include <stdlib.h>

struct Point {
	int x;
	int y;
};

int main() {

	Point arr[5] = { {1,1},{2,2},{3,3},{4,4},{5,5} };
	Point* p = (Point*)malloc(sizeof(Point)*5);

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

	printf(" (%d, %d) ", arr[0].x, arr[0].y );
	printf(" (%d, %d) ", arr[1].x, arr[1].y );
	printf(" (%d, %d) ", arr[2].x, arr[2].y );
	printf(" (%d, %d) ", arr[3].x, arr[3].y );
	printf(" (%d, %d) ", arr[4].x, arr[4].y );

	for (int i = 0; i < 5; ++i) {
		printf(" (%d, %d) ", p[i].x, p[i].y);
	}

	free(p);

	return 0;
}


//#include <stdio.h>
//#include <stdlib.h>
//
//struct Point {
//	int x;
//	int y;
//};
//
//int main() {
//
//	Point p1 = { 1,1 };
//	Point* p = (Point*)malloc(sizeof(Point));
//
//	p->x = 1;
//	p->y = 1;
//
//	printf(" (%d, %d) ", p1.x, p1.y);
//	printf(" (%d, %d) ", p->x, p->y);
//
//	return 0;
//}
