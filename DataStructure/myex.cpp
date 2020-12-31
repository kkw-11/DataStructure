#include <stdio.h>
#define MAX_N 100

int top;
int stack[MAX_N];

void stackInit() {

	top = 0;
}
int stackIsFull() {

	return (top == MAX_N);
}

int stackIsEmpty() {

	return (top == 0);
}

int stackPush(int value) {

	if (stackIsFull()) {
		printf("Stack is overflow\n");
		return 0;
	}

	stack[top] = value;
	++top;
	return 1;
}

int stackPop(int* value) {

	if (stackIsEmpty()) {
		printf("Stack is empty\n");
		return 0;
	}
	--top;
	*value = stack[top];
	return 1;
}


int main() {

	int value;
	stackPop(&value);

	stackPush(3);
	stackPush(4);
	stackPush(5);

	while (!stackIsEmpty()) {
		int value;
		if (stackPop(&value) == 1) {
			printf("%d ", value);

		}
	}

	return 0;
}

//#include <stdio.h>
//#define MAX_N 100
//
//int top;
//int stack[MAX_N];
//
//void stackInit() {
//	top = 0;
//}
//
//int stackIsEmpty() {
//	
//	return (top == 0);
//}
//
//int stackIsFull() {
//
//	return (top == MAX_N);
//}
//
//int stackPush(int value) {
//
//	if (stackIsFull())
//	{
//		printf("stack is overflow!\n");
//		return 0;
//	}
//
//	stack[top] = value;
//	++top;
//	return 1;
//}
//int stackPop(int* value) {
//	if (!stackIsEmpty()) {
//		printf("stack is empty!\n");
//		return 0;
//	}
//	--top;
//	*value = stack[top];
//	return 1;
//}
//
//
//int main() {
//
//
//	int N;
//	printf("Input stack size: ");
//	scanf("%d", &N);
//	stackInit();
//
//	for (int i = 0; i < N; ++i) {
//		int value;
//		scanf("%d",&value);
//		stackPush(value);
//
//	}
//	
//	while (!stackIsEmpty()) {
//		int value;
//		if (stackPop(&value) == 1) {
//			printf("%d ", value);
//		}
//	}
//	
//
//
//}

//#include <stdio.h>
//
//#define MAX 100
//
//int top;
//int stack[MAX];
//
//void stackInit() {
//	top = 0;
//}
//
//int stackIsFull() {
//
//	return (top == MAX);
//}
//
//int stackIsEmpty() {
//
//	return (top == 0);
//}
//
//int stackPush(int* value) {
//
//	if (stackIsFull()) {
//		printf("stack is overflow!");
//		return 0;
//	}
//	stack[top] = *value;
//	++top;
//	return 1;
//}
//
//int stackPop(int* value) {
//	if (stackIsEmpty()) {
//		printf("stack is empty!");
//		return 0;
//	}
//	--top;
//	*value = stack[top];
//	return 1;
//}
//
//int main() {
//
//	int T;
//	printf("Input Test count number");
//	scanf("%d", &T);
//
//	int N;
//	for (int test_case = 1; test_case <= T; ++test_case) {
//
//		printf("Input Stack Size");
//		scanf("%d", &N);
//		stackInit();
//
//		for (int i = 0; i < N; ++i) {
//			int value;
//			scanf("%d", &value);
//			stackPush(&value);
//		}
//		printf("#%d. ",test_case);
//
//		while (!stackIsEmpty()) {
//			int value;
//			if (stackPop(&value) == 1) {
//				printf("%d ", value);
//			}
//
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct Grade {
//
//	int num;
//	Gra* pg;
//
//}Gra;
//
//int main() {
//
//	Gra g1;
//	Gra* head = &g1;
//
//	head->num = 10;
//	head->pg = (Gra*)malloc(sizeof(Gra));
//
//	head->pg->num = 20;
//	head->pg->pg = (Gra*)malloc(sizeof(Gra));
//
//	head->pg->pg->num = 30;
//	head->pg->pg->pg = (Gra*)malloc(sizeof(Gra));
//
//		
//	return 0;
//}

//#include <stdio.h>
//typedef struct Grade {
//	
//	const char* pname;
//	int eng;
//	int kor;
//	int mat;
//	//Gra* pg;
//}Gra;
//
//int main() {
//
//	Gra g1 = {"Tom",90,80,100};
//
//	printf("%s : %d %d %d\n",g1.pname,g1.eng,g1.kor,g1.mat);
//
//	Gra g2 = { "Tim",80,90,60 };
//
//	printf("%s : %d %d %d\n", g2.pname, g2.eng, g2.kor, g2.mat);
//
//	return 0;
//}