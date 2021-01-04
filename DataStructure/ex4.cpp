#include <stdio.h>
#include <stdlib.h>
//서버
struct Stack {
	int* stack;
	int top;
};
void Push(Stack* st, int data) {

	st->stack[st->top] = data;
	++st->top;
}
int Pop(Stack* st) {
	--st->top; //*top = *top-1;
	return st->stack[st->top];
}
void InitStack(Stack* st, int cap) {
	st->stack = (int*)malloc(sizeof(int) * cap);
	st->top = 0;
}
void UninitStack(Stack* st) {
	free(st->stack);
	st->top = 0;
}

/////////////////////////////////
//클라이언트
int main() {
	Stack st;
	Stack st2;

	InitStack(&st, 500);
	Push(&st, 10);
	Push(&st, 20);
	Push(&st, 30);
	printf("%d\n", Pop(&st));
	printf("%d\n", Pop(&st));
	printf("%d\n", Pop(&st));
	UninitStack(&st);

	InitStack(&st2, 10);
	Push(&st2, 100);
	Push(&st2, 200);
	printf("%d\n", Pop(&st2));
	printf("%d\n", Pop(&st2));
	UninitStack(&st2);

	return 0;
}

//#include <stdio.h>
////서버
//struct Stack {
//	int stack[10]; //메모리공간
//	int top;  //상태변수 위치
//};
//void Push(Stack* st, int data) {
//
//	st->stack[st->top] = data;
//	++st->top;
//}
//int Pop(Stack* st) {
//	--st->top; //*top = *top-1;
//	return st->stack[st->top];
//}
//void InitStack(Stack* st) {
//	st->top =0;
//}
//void UninitStack(Stack* st) {
//	st->top = 0;
//}
//
///////////////////////////////////
////클라이언트
//int main() {
//	Stack st;
//	Stack st2;
//
//	InitStack(&st);
//	Push(&st, 10);
//	Push(&st, 20);
//	Push(&st, 30);
//
//	printf("%d\n", Pop(&st));
//	printf("%d\n", Pop(&st));
//	printf("%d\n", Pop(&st));
//	UninitStack(&st);
//
//	InitStack(&st2);
//	Push(&st2, 100);
//	Push(&st2, 200);
//
//	printf("%d\n", Pop(&st2));
//	printf("%d\n", Pop(&st2));
//	UninitStack(&st2);
//
//	return 0;
//}

//#include <stdio.h>
////서버
//struct Stack {
//	int stack[10]; //메모리공간
//	int top;  //상태변수 위치
//};
//void Push(Stack* st, int data) {
//
//	st->stack[st->top] = data;
//	++st->top;
//}
//int Pop(Stack* st) {
//	--st->top; //*top = *top-1;
//	return st->stack[st->top];
//}
//
//
///////////////////////////////////
////클라이언트
//int main() {
//	Stack st = { 0 };
//	Stack st2 = { 0 };
//
//	Push(&st, 10);
//	Push(&st, 20);
//	Push(&st, 30);
//
//	printf("%d\n", Pop(&st));
//	printf("%d\n", Pop(&st));
//	printf("%d\n", Pop(&st));
//
//
//	Push(&st2, 100);
//	Push(&st2, 200);
//	printf("%d\n", Pop(&st2));
//	printf("%d\n", Pop(&st2));
//
//
//	return 0;
//}

//#include <stdio.h>
////서버
//struct Stack {
//	int stack[10]; //메모리공간
//	int top;  //상태변수 위치
//};
//void Push(Stack* st, int data) {
//
//	st->stack[st->top] = data;
//	++st->top;
//}
//int Pop(Stack* st) {
//	--st->top; //*top = *top-1;
//	return st->stack[st->top];
//}
//
//
///////////////////////////////////
////클라이언트
//int main() {
//	Stack st = { 0 };
//	Stack st2 = { 0 };
//
//	Push(&st, 10);
//	Push(&st, 20);
//	Push(&st, 30);
//
//	printf("%d\n", Pop(&st));
//	printf("%d\n", Pop(&st));
//	printf("%d\n", Pop(&st));
//
//
//	Push(&st2, 100);
//	Push(&st2, 200);
//	printf("%d\n", Pop(&st2));
//	printf("%d\n", Pop(&st2));
//
//
//	return 0;
//}

//#include <stdio.h>
////서버
//struct Stack {
//	int stack[10]; //메모리공간
//	int top;  //상태변수 위치
//};
//void Push(Stack* st, int data) {
//
//	st->stack[st->top] = data;
//	++st->top;
//}
//int Pop(Stack* st) {
//	-- st->top; //*top = *top-1;
//	return st->stack[st->top];
//}
//
//
///////////////////////////////////
////클라이언트
//int main() {
//	Stack st = {0};
//
//	Push(&st, 10);
//	Push(&st, 20);
//	Push(&st, 30);
//
//	printf("%d\n", Pop(&st));
//	printf("%d\n", Pop(&st));
//	printf("%d\n", Pop(&st));
//
//
//	return 0;
//}

//#include <stdio.h>
////서버
//void Push(int stack[], int* top, int data) {
//
//	stack[*top] = data;
//	++* top;
//}
//int Pop(int stack[], int* top) {
//	--* top; //*top = *top-1;
//	return stack[*top];
//}
///////////////////////////////////
////클라이언트
//
//int main() {
//
//	int stack[10]; //메모리공간
//	int top = 0;  //상태변수 위치
//
//	int stack2[10]; //메모리공간
//	int top2 = 0;  //상태변수 위치
//
//
//	Push(stack, &top, 10);
//	Push(stack, &top, 20);
//	Push(stack, &top, 30);
//
//	printf("%d\n", Pop(stack, &top));
//	printf("%d\n", Pop(stack, &top));
//	printf("%d\n", Pop(stack, &top));
//
//	Push(stack2, &top2, 100);
//	Push(stack2, &top2, 200);
//	printf("%d\n", Pop(stack2, &top2));
//	printf("%d\n", Pop(stack2, &top2));
//
//	return 0;
//}

//#include <stdio.h>
////서버
//void Push(int stack[], int* top, int data) {
//
//	stack[*top] = data;
//	++*top;
//}
//int Pop(int stack[], int* top) {
//	--*top; //*top = *top-1;
//	return stack[*top];
//}
///////////////////////////////////
////클라이언트
//
//int main() {
//
//	int stack[10]; //메모리공간
//	int top = 0;  //상태변수 위치
//
//	int stack2[10]; //메모리공간
//	int top2 = 0;  //상태변수 위치
//
//
//	Push(stack, &top, 10);
//	Push(stack, &top, 20);
//	Push(stack, &top, 30);
//
//	printf("%d\n", Pop(stack, &top));
//	printf("%d\n", Pop(stack, &top));
//	printf("%d\n", Pop(stack, &top));
//
//
//	return 0;
//}


//#include <stdio.h>
////서버
//int stack[10]; //메모리공간
//int top = 0;  //상태변수 위치
//void Push(int data) {
//
//	stack[top] = data;
//	++top;
//}
//int Pop() {
//	--top;
//	return stack[top];
//}
///////////////////////////////////
////클라이언트
//
//int main() {
//
//	Push(10);
//	Push(20);
//	Push(30);
//
//	printf("%d\n", Pop());
//	Push(40);
//	Push(50);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//
//	return 0;
//}

//#include <stdio.h>
////서버
//int stack[10]; //메모리공간
//int top = 0;  //상태변수 위치
//void Push(int data) {
//
//	stack[top] = data;
//	++top;
//}
//int Pop() {
//	--top;
//	return stack[top];
//}
///////////////////////////////////
////클라이언트
//
//int main() {
//
//	Push(10);
//	Push(20);
//	Push(30);
//
//	printf("%d\n", Pop());
//	Push(40);
//	Push(50);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//
//	return 0;
//}

//#include <stdio.h>
////서버
//int stack[10]; //메모리공간
//int top = 0;  //상태변수 위치
//void Push(int data) {
//	
//	stack[top] =data;
//	++top;
//}
//int Pop() {
//	--top;
//	return stack[top];
//}
///////////////////////////////////
////클라이언트
//
//int main() {
//
//	Push(10);
//	Push(20);
//	Push(30);
//	int data = 0;
//	data = Pop();
//	printf("%d\n", data);
//
//	data = Pop();
//	printf("%d\n", data);
//
//	data = Pop();
//	printf("%d\n", data);
//
//	return 0;
//}


//#include <stdio.h>
////서버
//void Push(int data) {
//
//}
//int Pop() {
//
//	return 0; 
//}
///////////////////////////////////
////클라이언트
//
//int main() {
//
//	Push(10);
//	Push(20);
//	Push(30);
//	int data = 0;
//	data = Pop();
//	printf("%d\n", data);
//
//	data = Pop();
//	printf("%d\n", data);
//
//	data = Pop();
//	printf("%d\n", data);
//
//	return 0;
//}

//#include <stdio.h>
//int main() {
//
//	printf("Hello!\n");
//
//	return 0;
//}