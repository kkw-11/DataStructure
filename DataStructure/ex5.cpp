#include<stdio.h>
#define MAX_N 100

int que[MAX_N];
int front = 0;
int rear = 0;

void queInit() {
	int front = 0;
	int rear = 0;
}

int queIsEmpty() {

	return (front == rear);
}
int queIsFull() {
	if ((rear + 1) % MAX_N == front) 
		return 1;
	else
		return 0;
}

void queEnque(int value) {
	if (queIsFull()) {
		printf("Que is full\n");
	}

	que[rear] = value;
	++rear;
	if (rear == MAX_N)
		rear = 0;
}

void queDeque(int* value) {
	if (queIsEmpty()) {
		printf("Que is empty\n");
	}
	*value = que[front];
	++front;
}

int main() {
	int T;
	printf("Input test count:");
	scanf_s("%d", &T);

	for (int i = 0; i < T; ++i) {
		int value;
		printf("%d.Input que data:",i+1);
		scanf_s("%d", &value);
		queEnque(value);
	}
	

	for (int i = 0; i < rear; ++i) {
		printf("que[%d]:%d\n", i, que[i]);
	}

	for (int i = front; i < rear; ++i) {
		int value;
		queDeque(&value);
		printf("%d\n", value);
	}

}