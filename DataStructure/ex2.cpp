#include <stdio.h>
 struct Point{
	int x;
	int y;
} ;
int main() {

	Point pt = { 1,2 };

	Point* pp = &pt;
	printf(" (%d,%d) ", pt.x, pt.y);
	printf(" (%d,%d) ", (*pp).x, (*pp).y);
	printf(" (%d,%d) ", pp->x, pp->y);
	printf(" (%d,%d) ", (&pt)->x,(&pt)->y);

	return 0;
}


//#include <stdio.h>
//typedef struct _Point_tag {
//
//	int x;
//	int y;
//} Point;
//int main() {
//
//	Point pt = { 1,2 };
//
//	printf(" (%d,%d) ", pt.x, pt.y);
//
//
//	return 0;
//}


//#include <stdio.h>
//struct _Point_tag {
//
//	int x;
//	int y;
//};
//typedef struct _Point_tag Point;
//int main() {
//
//	Point pt = { 1,2 };
//
//	printf(" (%d,%d) ", pt.x, pt.y);
//
//
//	return 0;
//}

//#include <stdio.h>
//struct Point {
//
//	int x;
//	int y;
//};
//
//int main() {
//
//	struct Point pt = { 1,2 };
//
//	printf(" (%d,%d) ",pt.x,pt.y);
//
//
//	return 0;
//}


//#include <stdio.h>
//struct Point {
//
//	int x;
//	int y;
//};
//
//int main() {
//
//	int n;
//	Point p1;
//	Point p2;
//	n = 10;
//
//	p1.x = 1;
//	p1.y = 2;
//
//	p2.x = 2;
//	p2.y = 4;
//	
//	printf("(%d, %d) ", p1.x, p1.y);
//	printf("(%d, %d) ", p2.x, p2.y);
//
//	return 0;
//}


//#include <stdio.h>
//int main() {
//
//	int x, y;
//	int x2, y2;
//
//	x = 1;
//	y = 2;
//
//	x2 = 2;
//	y2 = 4;
//	//.....
//
//	printf("(%d, %d) ", x, y);
//	printf("(%d, %d) ", x2, y2);
//
//	return 0;
//}


//#include <stdio.h>
//int main() {
//
//	int x, y;
//	x = 1;
//	y = 2;
//
//	printf("(%d, %d) ", x, y);
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//int garr[10];
//int main() {
//
//	int size=0;
//	printf("최대 원소의 개수 입력:");
//	scanf_s("%d", &size);
//	//int arr[size]; // 컴파일시 정적배열의 사이즈를 알야아하는데 변수로 지정하면 안됨 컴파일링할때 상수값이 배열의 크기로 지정되어야함
//	int* pa = (int*)malloc(sizeof(int) * size);
//
//	for (int i = 0; i < size; ++i) {
//
//	//	arr[i] = 10 * i;
//		pa[i] = 10 * i;
//	}
//
//	for (int i = 0; i < size; ++i) {
//		printf("%d %d \n",  pa[i]);
//	}
//
//	free(pa);
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//int garr[10];
//int main() {
//
//	int arr[5];
//	int* pa = (int*)malloc(sizeof(int) * 5);
//
//	for (int i = 0; i < 5; ++i) {
//
//		arr[i] = 10 * i;
//		pa[i] = 10*i;
//	}
//
//	for (int i = 0; i < 5; ++i) {
//		printf("%d %d \n", arr[i], pa[i]);
//	}
//
//	free(pa);
//
//	return 0;
//}

//
//
//#include <stdio.h>
//#include <stdlib.h>
//int garr[10];
//int main() {
//
//	int arr[10];
//	arr[0] = 10;
//	arr[1] = 20;
//	arr[2] = 30;
//	arr[3] = 40;
//	arr[4] = 50;
//	arr[5] = 60;
//	arr[6] = 70;
//	arr[7] = 80;
//	arr[8] = 90;
//	arr[9] = 100;
//
//	for (int i = 0; i < 10; ++i) {
//
//		printf("%d\n", arr[i]);
//	}
//
//
//	int* p;
//
//	p = (int*)malloc(sizeof(int)*10);
//	p[0] = 10;
//	p[1] = 20;
//	p[2] = 30;
//	p[3] = 40;
//	p[4] = 50;
//	p[5] = 60;
//	p[6] = 70;
//	p[7] = 80;
//	p[8] = 90;
//	p[9] = 100;
//	for (int i = 0; i < 10; ++i) {
//
//		printf("%d\n", p[i]);
//	}
//
//	free(p);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//int garr[10];
//int main() {
//	int* p;
//	p = (int*)malloc(int(4));
//
//	*p = 100;
//
//	printf("int : %d\n", *p);
//
//	free(p);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int garr[10];
//int main() {
//
//	int arr[10];
//	arr[0] = 10;
//	arr[1] = 20;
//	arr[2] = 30;
//	arr[3] = 40;
//	arr[4] = 50;
//	arr[5] = 60;
//	arr[6] = 70;
//	arr[7] = 80;
//	arr[8] = 90;
//	arr[9] = 100;
//
//	for (int i = 0; i < 10; ++i) {
//
//		printf("%d\n", arr[i]);
//	}
//
//
//	int* p;
//
//	p = (int*)malloc(4*10);
//	p[0] = 10;
//	p[1] = 20;
//	p[2] = 30;
//	p[3] = 40;
//	p[4] = 50;
//	p[5] = 60;
//	p[6] = 70;
//	p[7] = 80;
//	p[8] = 90;
//	p[9] = 100;
//	for (int i = 0; i < 10; ++i) {
//
//		printf("%d\n", p[i]);
//	}
//
//	free(p);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//
//	int* p;
//	
//	p = (int*)malloc(40);
//	p[0] = 10;
//	p[1] = 20;
//	p[2] = 30;
//	p[3] = 40;
//	p[4] = 50;
//	p[5] = 60;
//	p[6] = 70;
//	p[7] = 80;
//	p[8] = 90;
//	p[9] = 100;
//	for (int i = 0; i < 10; ++i) {
//
//		printf("%d\n", p[i]);
//	}
//	
//	free(p); 
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//
//	int* p;
//	printf("start main\n");
//	p = (int*)malloc(4);
//	*p = 10;
//
//	printf("%d\n", *p);
//
//	free(p);
//	printf("end main\n");
//
//
//	return 0;
//}


//#include <stdio.h>
//int garr[10];//GlobalData 영역
//
//void func() {
//
//	int farr[10];//stack 영역
//	//..
//
//}
//int main() {
//
//	int arr[10];//stack 영역
//
//	func();
//	printf("Hello!");
//	func();
//
//	return 0;
//}

//#include <stdio.h>
//int garr[10];
//int main() {
//
//	int arr[10];
//
//	return 0; 
//}


//#include <stdio.h>
//
//int main() {
//
//	int n = 10;
//	int m = 20;
//
//	printf("%d %d\n", n, m);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//
//	printf("ex2\n"); 
//
//	return 0;
//}