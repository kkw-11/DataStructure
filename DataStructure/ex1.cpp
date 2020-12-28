#include<stdio.h>

int main() {
	
	const char* s = "HELLO!\n";//문자열의 시작주소를 s에 담는다.

	printf("%s\n", s);
	printf("%s\n", "Hello!\n");
}

//#include<stdio.h>
//int  TotalInteger(int l, int r) {
//
//	int sum = 0;
//	for (int i = l; i <= r; ++i) {
//		sum += i;
//	}
//	return sum;
//}
//
//int main() {
//	int a = 10, b = 20;
//	int result = TotalInteger(10, 20);
//
//	printf("result: %d\n", result);
//	printf("result: %d\n", TotalInteger(1, 100) );
//}


//#include<stdio.h>
//int  Add(int l, int r) {
//
//	return l + r;
//}
//
//int main() {
//	int a = 10, b = 20;
//	int result = Add(a,b);
//
//	printf("result: %d\n", result);
//}

//#include<stdio.h>
//void PrintHello(int n) {
//	for(int i = 0 ; i<n;++i)
//	printf("Hello! :%d\n",n);
//
//	printf("\n");
//}
//
//int main() {
//
//	PrintHello(2);
//	PrintHello(5);
//	PrintHello(10);
//	PrintHello(100);
//}

//#include<stdio.h>
//void PrintHello() {
//		printf("Hello!\n");
//		printf("Hello!\n");
//		printf("Hello!\n");
//}
//
//int main() {
//
//	PrintHello();
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//
//	printf("Hello!\n");
//	printf("Hello!\n");
//	printf("Hello!\n");
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//
//	int a = 10, b = 20, c = 30, d = 40;
//	int arr[4] = { 10,20,30,40 };
//	
//	int* p = &a;
//	int* pa = arr;// &arr[0]
//
//	printf("%d %d\n", *p, *pa);
//	printf("%d %d %d %d\n", pa[0], pa[1], pa[2], pa[3]);
//	printf("%d %d %d %d\n",arr[0],arr[1],arr[2],arr[3]);
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//
//	int a = 10, b = 20, c = 30, d = 40;
//	int arr[4] = { 10,20,30,40 };
//
//	printf("%d\n", arr[0]);
//	printf("%d\n", arr[1]);
//	printf("%d\n", arr[2]);
//	printf("%d\n", arr[3]);
//	for (int i = 0; i < 4; ++i)
//		printf("%d\n", arr[i]);
//
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//
//	int a = 10, b = 20, c = 30, d = 40;
//	int arr[4] = { 10,20,30,40 };
//
//	printf("%d\n", arr[0]);
//	printf("%d\n", arr[1]);
//	printf("%d\n", arr[2]);
//	printf("%d\n", arr[3]);
//	for(int i = 0; i<4;++i)
//		printf("%d\n", arr[i]);
//
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//
//	int a = 10, b = 20, c = 30, d = 40;
//	int arr[4] = { 10,20,30,40 };
//
//	printf("%d\n", arr[0]);
//	printf("%d\n", arr[1]);
//	printf("%d\n", arr[2]);
//	printf("%d\n", arr[3]);
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//
//	int a=10, b=20, c=30, d=40;
//	int arr[4] = {10,20,30,40};
//
//	//출력결과는 같지만 메모리 구조는 전혀다르다 비연속적이거나 연속적이거나
//	printf("%d %d %d %d \n", a, b, c, d);
//	printf("%d %d %d %d \n", arr[0],arr[1],arr[2],arr[3]);
//
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//
//	int a, b, c, d;
//	int arr[4];
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//
//	for (int i = 1; i <= 10; ++i) {
//		if (i % 2 == 0)
//			printf("Hello!: %d\n", i);
//		else
//			printf("Hello!: %d\n", i * 2);
//	}
//
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//
//	for (int i = 1; i <= 10; ++i) {
//		if (i % 2 == 0)
//			printf("Hello!: %d\n", i);
//		else
//			printf("Hello!: %d\n", i * 2);
//
//	}
//
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//
//	for (int i = 1; i <= 10; ++i) {
//		if (i % 2 == 0)
//			printf("Hello!: %d\n", i);
//		else
//			printf("Hello!: %d\n", i*2);
//
//	}
//
//}


//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//
//	for (int i = 1; i <= 10; ++i) {
//		if (i % 2 == 0)
//			printf("Hello!: %d\n", i);
//
//	}
//
//}


//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//
//	for (int i = 1; i <= 10; ++i) {
//		printf("Hello!: %d\n", i);
//	}
//
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//
//	for (int i = 0; i < 10; ++i) {
//		printf("Hello!: %d\n",i);
//	}
//
//}


//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//
//	for (int i = 0; i < 10; ++i) {
//		printf("Hello!\n");
//		printf("Hi!\n");
//	}
//
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	for(int i = 0; i<10; ++i)
//		printf("Hello!\n");
//
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//
//	int n = 100;
//	//100 = 200;
//	printf("%d\n", n);
//	n = 200;
//	printf("%d\n", n);
//	n = n * 2;//n *=2;
//	printf("%d\n", n);
//
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//
//	int n = 100;
//	
//	printf("%d\n", n);
//	n = 200;
//	printf("%d\n", n);
//	n = n*2;//n *=2;
//	printf("%d\n", n);
//
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	
//	int n = 100;
//	printf("%d\n", n);
//	n = 200;
//	printf("%d\n", n);
//}


//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//
//	printf("Hello!\n");
//	printf("Hello!\n");
//	printf("Hello!\n");
//	system("pause"); //또는 하위시스템 콘솔로 맞추기
//}


//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//
//	printf("Hello!\n");
//	system("pause"); //또는 하위시스템 콘솔로 맞추기
//}
