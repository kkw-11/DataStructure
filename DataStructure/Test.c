#include<stdio.h>

void Push(int queue[], int* pfront, int* prear, int data) {
	if ((*prear + 1) % 5 == *pfront)
		return 0xfffffff;
	/*
		++rear;
		if(rear == 5)
			rear = 0;

	*/

	*prear = (*prear + 1) % 5;

	queue[*prear] = data;

}

int Pop(int queue[],int* pfront, int* prear) {
	if (*pfront == *prear)
		return 0xfffffff;

	*pfront = (*pfront + 1) % 5;

	return queue[*pfront];
}
int main() {

	int queue1[5];
	int front1 = 0, rear1 = 0;

	int queue2[5];
	int front2 = 0, rear2 = 0;



	Push(queue1, &front1, &rear1, 10);
	Push(queue1, &front1, &rear1, 20);
	Push(queue1,&front1, &rear1, 30);


	printf("%d\n", Pop(queue1, &front1, &rear1));
	printf("%d\n", Pop(queue1, &front1, &rear1));
	printf("%d\n", Pop(queue1, &front1, &rear1));

	Push(queue2, &front2, &rear2, 100);
	Push(queue2, &front2, &rear2,200);

	printf("%d\n", Pop(queue2, &front2, &rear2));
	printf("%d\n", Pop(queue2,&front2,&rear2));


	return 0;
}

//#include<stdio.h>
//int queue[5];
//int front = 0, rear = 0;
//
//void Push(int data) {
//	if ((rear + 1) % 5 == front)
//		return 0xfffffff;
//	/*
//		++rear;
//		if(rear == 5)
//			rear = 0;
//
//	*/
//
//	rear = (rear + 1) % 5;
//
//	queue[rear] = data;
//
//}
//
//int Pop() {
//	if (front == rear)
//		return 0xfffffff;
//	
//	front = (front + 1) % 5;
//
//	return queue[front];
//}
//int main() {
//
//
//	Push(10);
//	Push(20);
//	Push(30);
//
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//
//	Push(100);
//	Push(200);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//
//
//	return 0;
//}

//#include<stdio.h>
//int queue[10];
//int front = 0 , rear = 0;
//
//void Push(int data) {
//
//	queue[rear++] = data;
//
//}
//
//int Pop() {
//
//	return queue[front++];
//}
//int main() {
//
//
//	Push(10);
//	Push(20);
//	Push(30);
//
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//
//	return 0;
//}


//#include<stdio.h>
//#define MAX_N 100
//
//int que[MAX_N];
//int front = 0;
//int rear = 0;
//
//void queInit() {
//	int front = 0;
//	int rear = 0;
//}
//
//int queIsEmpty() {
//
//	return (front == rear);
//}
//int queIsFull() {
//	if ((rear + 1) % MAX_N == front)
//		return 1;
//	else
//		return 0;
//}
//
//void queEnque(int value) {
//	if (queIsFull()) {
//		printf("Que is full\n");
//	}
//
//	que[rear] = value;
//	++rear;
//	if (rear == MAX_N)
//		rear = 0;
//}
//
//void queDeque(int* value) {
//	if (queIsEmpty()) {
//		printf("Que is empty\n");
//	}
//	
//	*value = que[front];
//	++front;
//
//	if (front == MAX_N)
//		front = 0;
//	
//	return 1;
//}
//
//int main() {
//	int T;
//	printf("Input test count:");
//	scanf_s("%d", &T);
//
//	for (int i = 0; i < T; ++i) {
//		int value;
//		printf("%d.Input que data:", i + 1);
//		scanf_s("%d", &value);
//		queEnque(value);
//	}
//
//
//	for (int i = 0; i < rear; ++i) {
//		printf("que[%d]:%d\n", i, que[i]);
//	}
//
//	for (int i = front; i < rear; ++i) {
//		int value;
//		queDeque(&value);
//		printf("%d\n", value);
//	}
//
//	return 0;
//}

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