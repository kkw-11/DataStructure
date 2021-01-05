#include <stdio.h>

long long factorial(int n) {

	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}


int main() {

	int T;
	int num;
	long long value;
	printf("Input test count");
	scanf("%d", &T);

	for (int i = 1; i <= T; ++i) {
		printf("Input number:");
		scanf("%d", &num);
		value = factorial(num);
		printf("#%d %d! = %lld\n", i, num, value);
	}

	return 0;
}

//#include <stdio.h>
//
//long long factorial(int n) {
//
//	if (n == 0)
//		return 1;
//	else
//		return n * factorial(n - 1);
//}
//
//
//int main() {
//
//	int T;
//	int num;
//	long long value;
//	printf("Input test count");
//	scanf("%d", &T);
//
//	for (int i = 1; i <= T; ++i) {
//		printf("Input number:");
//		scanf("%d",&num);
//		value = factorial(num);
//		printf("#%d %d! = %lld\n",i,num,value);
//	}
//
//	return 0;
//}