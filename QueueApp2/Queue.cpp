#include <stdlib.h>
#include "Queue.h"
	
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
