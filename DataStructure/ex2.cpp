#include <stdio.h>
#include <stdlib.h>
int garr[10];
int main() {

	int arr[10];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	arr[5] = 60;
	arr[6] = 70;
	arr[7] = 80;
	arr[8] = 90;
	arr[9] = 100;

	for (int i = 0; i < 10; ++i) {

		printf("%d\n", arr[i]);
	}


	int* p;

	p = (int*)malloc(4*10);
	p[0] = 10;
	p[1] = 20;
	p[2] = 30;
	p[3] = 40;
	p[4] = 50;
	p[5] = 60;
	p[6] = 70;
	p[7] = 80;
	p[8] = 90;
	p[9] = 100;
	for (int i = 0; i < 10; ++i) {

		printf("%d\n", p[i]);
	}

	free(p);
	return 0;
}


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