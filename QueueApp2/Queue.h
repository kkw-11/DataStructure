#pragma once
typedef struct _q {

	int* queue;
	int front, rear;
	int capacity;
} Queue;


void Push(Queue* q, int data);

int Pop(Queue* q);
void InitQueue(Queue* q, int cap);
void UninitQueue(Queue* q);