#include <stdio.h>
int totalInteger(int l, int r) {

	int sum = 0;

	for (int i = l; i <= r; ++i) {
		//sum += i;
		sum = sum + i;
		
	}
	
	return sum;
}

int main() {

	int result;
	result = totalInteger(1,100);

	//printf("%d\n", result);

	return 0;
}

//#include <stdio.h>
//int main()
//{
//	int a = 10, b = 20, c = 30, d = 40;
//
//	int arr[4] = { 10,20,30,40 };
//	printf("%d %d %d %d\n", a, b, c, d);
//
//	int* p = &a;
//	int* pa = arr;//arr[0]
//
//	printf("%d %d %d %d\n", *p, a, *pa, arr[0]);
//	printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
//
//	printf("%d\n", pa);
//	printf("%d %d\n", pa[0], pa[1], pa[2], pa[3]);
//
//
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10, b = 20, c = 30, d = 40;
//
//	int arr[4] = { 10,20,30,40 };
//	printf("%d %d %d %d\n", a, b, c, d);
//	
//	for (int i = 0; i < 4; ++i)
//		printf("%d ",arr[i]);
//
//}


//#include <stdio.h>
//int main()
//{
//	int a=10, b=20, c=30, d=40;
//
//	int arr[4]={10,20,30,40};
//	printf("%d %d %d %d\n",a,b,c,d);
//	printf("%d %d %d %d", arr[0], arr[1], arr[2], arr[3]);
//}



//#include <stdio.h>
//int main()
//{
//	for (int i = 1; i <= 10; ++i) {
//
//		if( i%2 == 0 )
//			printf("Hello! : %d\n", i);
//		else
//			printf("Hello! : %d\n", i*2);
//
//	}
//
//}

//#include <stdio.h>
//int main()
//{
//	for (int i = 0; i < 10; ++i) {
//
//	printf("Hello!\n");
//	printf("Hi!\n");
//
//	}
//
//}



//#include <stdio.h>
//int main()
//{
//	int n = 100;
//
//	printf("%d\n",n);
//  n = 200;
//	printf("%d\n",n);
//  n = n*2;
//	printf("%d\n",n);

//}

//
//#include <stdio.h>
//int main()
//{
//	printf("hello!\n");
//	printf("hello!\n");
//	printf("hello!\n");
//
//
//}


//#include <stdio.h>
//
//int main()
//{
//	printf("hello!\n");
//
//
//}