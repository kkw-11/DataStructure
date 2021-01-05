#include<stdio.h>
typedef struct _q {

	int* queue;
	int front, rear;
	int capacity;
} Queue;


void Push(Queue* q, int data) {
	if ((q->rear + 1) % q->capacity == q->front)
		return;
	/*
		++rear;
		if(rear == 5)
			rear = 0;

	*/

	q->rear = (q->rear + 1) % q->capacity;
	q->queue[q->rear] = data;

}

int Pop(Queue* q) {
	if (q->front == q->rear)
		return 0xfffffff;

	q->front = (q->front + 1) % q->capacity;

	return q->queue[q->front];
}

void InitQueue(Queue* q, int cap) {
	q->queue = (int*)malloc(sizeof(int) * cap);
	q->capacity = cap;
	q->front = q->rear = 0;

}
void UninitQueue(Queue* q) {
	free(q->queue);
	q->front = q->rear = 0;

}



int main() {

	Queue q1;
	Queue q2;

	InitQueue(&q1, 10);
	Push(&q1, 10);
	Push(&q1, 20);
	Push(&q1, 30);


	printf("%d\n", Pop(&q1));
	printf("%d\n", Pop(&q1));
	printf("%d\n", Pop(&q1));
	UninitQueue(&q1);

	InitQueue(&q2, 10);
	Push(&q2, 100);
	Push(&q2, 200);

	printf("%d\n", Pop(&q2));
	printf("%d\n", Pop(&q2));
	UninitQueue(&q2);


	return 0;
}


//#include<stdio.h>
//typedef struct _q {
//
//	int* queue;
//	int front, rear;
//	int capacity;
//} Queue;
//
//
//void Push(Queue* q, int data) {
//	if ((q->rear + 1) % q->capacity == q->front)
//		return;
//	/*
//		++rear;
//		if(rear == 5)
//			rear = 0;
//
//	*/
//
//	q->rear = (q->rear + 1) % q->capacity;
//	q->queue[q->rear] = data;
//
//}
//
//int Pop(Queue* q) {
//	if (q->front == q->rear)
//		return 0xfffffff;
//
//	q->front = (q->front + 1) % q->capacity;
//
//	return q->queue[q->front];
//}
//
//void InitQueue(Queue* q, int cap) {
//	q->queue = (int*)malloc(sizeof(int) * cap);
//	q->capacity = cap;
//	q->front = q->rear = 0;
//
//}
//void UninitQueue(Queue* q) {
//	free(q->queue);
//	q->front = q->rear = 0;
//
//}
//
//
//
//int main() {
//
//	Queue q1;
//	Queue q2;
//
//	InitQueue(&q1, 10);
//	Push(&q1, 10);
//	Push(&q1, 20);
//	Push(&q1, 30);
//
//
//	printf("%d\n", Pop(&q1));
//	printf("%d\n", Pop(&q1));
//	printf("%d\n", Pop(&q1));
//	UninitQueue(&q1);
//
//	InitQueue(&q2, 10);
//
//	Push(&q2, 100);
//	Push(&q2, 200);
//
//	printf("%d\n", Pop(&q2));
//	printf("%d\n", Pop(&q2));
//	UninitQueue(&q2);
//
//
//	return 0;
//}

//#include<stdio.h>
//typedef struct _q {
//
//	int queue[5];
//	int front, rear;
//
//} Queue;
//
//
//void Push(Queue* q, int data) {
//	if ((q->rear + 1) % 5 == q->front)
//		return 0xfffffff;
//	/*
//		++rear;
//		if(rear == 5)
//			rear = 0;
//
//	*/
//
//	q->rear = (q->rear + 1) % 5;
//	q->queue[q->rear] = data;
//
//}
//
//int Pop(Queue* q) {
//	if (q->front == q->rear)
//		return 0xfffffff;
//
//	q->front = (q->front + 1) % 5;
//
//	return q->queue[q->front];
//}
//int main() {
//
//	Queue q1 = {0};
//	Queue q2 = {0};
//
//	Push(&q1, 10);
//	Push(&q1, 20);
//	Push(&q1, 30);
//
//
//	printf("%d\n", Pop(&q1));
//	printf("%d\n", Pop(&q1));
//	printf("%d\n", Pop(&q1));
//
//	Push(&q2, 100);
//	Push(&q2, 200);
//
//	printf("%d\n", Pop(&q2));
//	printf("%d\n", Pop(&q2));
//
//
//	return 0;
//}

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