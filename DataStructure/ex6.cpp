#include <stdio.h>
int _BinarySearch(int arr[], int left, int right, int data) {

	if (left <= right) {
		int middle = (left + right) / 2;
		if (data < arr[middle])
			return _BinarySearch(arr, left, middle - 1, data);
		else if (data > arr[middle])
			return _BinarySearch(arr, middle + 1, right, data);

		else
			return middle;
	}
	else
		return -1;
}

int BinSearch(int arr[], int size, int data) {

	return _BinarySearch(arr, 0, size - 1, data);
}

int main() {

	int arr[10] = { 10,35,45,48,50,57,69,72,83,96 };
	int size = 10;

	int idx = BinSearch(arr, size, 0);
	if (idx != -1)
		printf("[%d]:%d", idx, arr[idx]);
	else
		printf("cannot find data!\n");
	return 0;
}

//#include <stdio.h>
//int _BinarySearch(int arr[], int left, int right, int data) {
//
//	if (left <= right) {
//		int middle = (left + right) / 2;
//		if (data < arr[middle]) {
//			int idx = _BinarySearch(arr, left, middle - 1, data);
//			return idx;
// 
//		}
//		else if (data > arr[middle]) {
//			int idx = _BinarySearch(arr, middle + 1, right, data);
//			return idx;
//		}
//		else
//			return middle;
//	}
//	return -1;
//}
//
//int BinSearch(int arr[], int size, int data) {
//
//	return _BinarySearch(arr, 0, size - 1, data);
//}
//
//int main() {
//
//	int arr[10] = { 10,35,45,48,50,57,69,72,83,96 };
//	int size = 10;
//
//	int idx = BinSearch(arr, size, 10);
//	if (idx != -1)
//		printf("[%d]:%d", idx, arr[idx]);
//
//	return 0;
//}


//#include <stdio.h>
//
//int Fibonacci(int n) {
//	if (n ==1) 
//		return 1;
//
//	else if (n == 2)
//		return 2;
//	else
//		return Fibonacci(n - 2)+ Fibonacci(n - 1);
//}
//
//int main() {
//
//	int result = Fibonacci(5);
//
//	printf("%d\n", result);
//
//	return 0;
//}


//#include <stdio.h>
////선형적인 형태의 재귀적 문제는 재귀함수가 아닌 루프문을 통해서도 구현가능함	
//int Factorial(int n) {
//	if (n == 1)
//		return 1;
//	else
//		return n * Factorial(n - 1);
//
//}
//
//
//int main() {
//
//	int result = Factorial(5);
//
//	printf("%d\n", result);
//	return 0;
//}

//#include <stdio.h>
//void Print(int n) {
//
//	printf("+%d \n", n);
//
//	if (n > 0) {
//		Print(n - 1);
//		Print(n - 2);
//		Print(n - 3);
//	}
//	printf("-%d \n", n);
//
//}
//
//int main() {
//
//	Print(3);
//	return 0;
//}

//#include <stdio.h>
//void Print(int n) {
//
//	printf("+%d \n", n);
//
//	if (n > 0) {
//		Print(n - 1);
//		Print(n - 1);
//	}
//	printf("-%d \n", n);
//
//}
//
//int main() {
//
//	Print(3);
//	return 0;
//}

//#include <stdio.h>
//void Print(int n) {
//
//	printf("+%d \n", n);
//
//	if (n > 0)
//		Print(n - 1);
//	printf("-%d \n", n);
//
//}
//
//int main() {
//
//	Print(3);
//	return 0;
//}

//#include <stdio.h>
//void Print(int n) {
//
//	printf("%d \n", n);
//
//	if (n > 0)
//		Print(n - 1);
//	printf("%d \n", n);
//
//}
//
//int main() {
//
//	Print(3);
//	return 0;
//}

//#include <stdio.h>
//void Print(int n) {
//
//	printf("%d \n", n);
//
//	if (n > 0)
//		Print(n - 1);
//
//}
//
//int main() {
//
//	Print(3);
//	return 0;
//}


//#include <stdio.h>
//void Print(int n) {
//
//	printf("%d \n", n);
//
//	if (n != 0)
//		Print(n-1);
//
//}
//
//int main() {
//
//	Print(3);
//	return 0;
//}

//#include <stdio.h>
//void Print(int n) {
//
//	printf("%d \n", n);
//	if (n != 0)
//		Print(n);
//}
//
//int main() {
//
//	Print(3);
//	return 0;
//}


//#include <stdio.h>
//void Print(int n) {
//
//	printf("%d \n",n);
//	if (n == 0)
//		return;
//	Print(n); 
//}
//
//int main() {
//
//	Print(3);
//	return 0;
//}


//#include <stdio.h>
//
//void a() {
//
//}
//
//void b() {
//	a();
//}
//
//void c() {
//	a();
//	b();
//}
//
//int main() {
//
//	a();
//	b(); 
//	c();
//	return 0;
//}


//#include <stdio.h>
//
//void Print2(int n) {
//	printf("Print2: %d\n", n);
//
//}
//
//void Print3(int n) {
//
//	printf("Print3 : %d\n", n);
//
//}
//void Print(int n) {
//
//	printf("Print : %d\n", n);
//
//	Print2(4);
//	printf("Print2 finish : %d\n");
//
//	Print3(5);
//	printf("Print3 finish : %d\n");
//
//	printf("Print finish\n");
//}
//
//int main() {
//
//	Print(3);
//
//	return 0;
//}

//#include <stdio.h>
//
//
//
//void Print2(int n) {
//
//	printf("Print2: %d\n", n);
//
//}
//
//void Print3(int n) {
//
//	 printf("Print3 : %d\n", n);
//
//}
//void Print(int n) {
//
//	printf("Print : %d\n", n);
//
//	Print2(4);
//	printf("Print2 finish : %d\n");
//
//	Print3(5);
//	printf("Print3 finish : %d\n");
//
//	printf("Print finish\n");
//}
//
//int main() {
//
//	Print(3);
//
//	return 0;
//}

