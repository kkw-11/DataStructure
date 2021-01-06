#include <stdio.h>
void Print(int n) {

	printf("%d \n",n);
	Print(n); 
}

int main() {

	Print(3);
	return 0;
}


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

