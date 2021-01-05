#include <stdio.h>
#include <stdlib.h>

typedef struct q_ {
	int* queue;
	int front, rear;
	int capacity;
}Queue;
//서버(Queue)
void Push(Queue* q, int data) {
	if ((q->rear + 1) % q->capacity == q->front)
		return;

	//rear가 0,1,2,3,4 가 되는 코드
	/*rear = rear + 1;
	if (rear == 5)
		rear = 0;*/

	q->rear = (q->rear + 1) % q->capacity; //위 주석 처리 코드와 같음(rear가 0,1,2,4가 되는 코드)
	q->queue[q->rear] = data;
}
int Pop(Queue* q) {
	if (q->front == q->rear)
		return 0xfffffff; //오류값으로 임의의 큰 값 지정

	//Push에서 대입전 rear를 증가시키고 대입시켰으므로 
	//Pop에서도 증가시키고 값을 빼야 해당 위치의 값을 정확히 값의 위치로 가리키게됨 
	q->front = (q->front + 1) % q->capacity;
	return q->queue[q->front];
}
void InitQueue(Queue* q, int cap) {
	q->queue = (int*)malloc(sizeof(int) * cap);
	q->capacity = cap;
	q->front = q->rear = 0; //front 와 rear를 같게만 해주면 됨 0,1,2,3,4 어느것으로 초기화 하든 상관없음

}
void UninitQueue(Queue* q) {
	free(q->queue);
	q->front = q->rear = 0; //여기서는 Uninit 할거 없지만해줌
}

//////////////////////
//클라이언트
int main() {

	Queue q1;
	Queue q2;

	InitQueue(&q1, 100);
	Push(&q1, 10);
	Push(&q1, 20);
	Push(&q1, 30);

	InitQueue(&q2, 500);
	Push(&q2, 100);
	Push(&q2, 150);

	printf("queue1: %d\n", Pop(&q1));
	printf("queue1: %d\n", Pop(&q1));
	printf("queue1: %d\n", Pop(&q1));
	UninitQueue(&q1);

	printf("queue2: %d\n", Pop(&q2));
	printf("queue2: %d\n", Pop(&q2));
	UninitQueue(&q2);

	return 0;
} 

//#include <stdio.h>
//#include <stdlib.h>
////서버(Queue)
//typedef struct q_ {
//	int* queue;
//	int front, rear;
//	int capacity;
//}Queue;
//
//void Push(Queue* q, int data) {
//	if ((q->rear + 1) % q->capacity == q->front)
//		return;
//
//	//rear가 0,1,2,3,4 가 되는 코드
//	/*rear = rear + 1;
//	if (rear == 5)
//		rear = 0;*/
//
//	q->rear = (q->rear + 1) % q->capacity; //위 주석 처리 코드와 같음(rear가 0,1,2,4가 되는 코드)
//	q->queue[q->rear] = data;
//}
//int Pop(Queue* q) {
//	if (q->front == q->rear)
//		return 0xfffffff; //오류값으로 임의의 큰 값 지정
//
//	//Push에서 대입전 rear를 증가시키고 대입시켰으므로 
//	//Pop에서도 증가시키고 값을 빼야 해당 위치의 값을 정확히 값의 위치로 가리키게됨 
//	q->front = (q->front + 1) % q->capacity;
//	return q->queue[q->front];
//}
//void InitQueue(Queue* q, int cap) {
//	q->queue = (int*)malloc(sizeof(int) * cap);
//	q->capacity = cap;
//	q->front = q->rear = 0; //front 와 rear를 같게만 해주면 됨 0,1,2,3,4 어느것으로 초기화 하든 상관없음
//
//}
//void UninitQueue(Queue* q) {
//	free(q->queue);
//	q->front = q->rear = 0; //여기서는 Uninit 할거 없지만해줌
//}
//
////////////////////////
////클라이언트
//int main() {
//
//	Queue q1;
//	Queue q2;
//
//	InitQueue(&q1, 100);
//	Push(&q1, 10);
//	Push(&q1, 20);
//	Push(&q1, 30);
//
//	InitQueue(&q2, 500);
//	Push(&q2, 100);
//	Push(&q2, 150);
//
//	printf("queue1: %d\n", Pop(&q1));
//	printf("queue1: %d\n", Pop(&q1));
//	printf("queue1: %d\n", Pop(&q1));
//	UninitQueue(&q1);
//
//	printf("queue2: %d\n", Pop(&q2));
//	printf("queue2: %d\n", Pop(&q2));
//	UninitQueue(&q2);
//
//	return 0;
//} 

//#include <stdio.h>
//#include <stdlib.h>
////서버(Queue)
//typedef struct q_ {
//	int* queue;
//	int front, rear;
//}Queue;
//
//void Push(Queue* q, int data) {
//	if ((q->rear + 1) % 5 == q->front)
//		return;
//
//	//rear가 0,1,2,3,4 가 되는 코드
//	/*rear = rear + 1;
//	if (rear == 5)
//		rear = 0;*/
//
//	q->rear = (q->rear + 1) % 5; //위 주석 처리 코드와 같음(rear가 0,1,2,4가 되는 코드)
//	q->queue[q->rear] = data;
//}
//int Pop(Queue* q) {
//	if (q->front == q->rear)
//		return 0xfffffff; //오류값으로 임의의 큰 값 지정
//
//	//Push에서 대입전 rear를 증가시키고 대입시켰으므로 
//	//Pop에서도 증가시키고 값을 빼야 해당 위치의 값을 정확히 값의 위치로 가리키게됨 
//	q->front = (q->front + 1) % 5;
//	return q->queue[q->front];
//}
//void InitQueue(Queue* q,int cap) {
//	q->queue = (int*)malloc(sizeof(int) * cap);
//	q->front = q->rear = 0; //front 와 rear를 같게만 해주면 됨 0,1,2,3,4 어느것으로 초기화 하든 상관없음
//
//}
//void UninitQueue(Queue* q) {
//	free(q->queue);
//	q->front = q->rear = 0; //여기서는 Uninit 할거 없지만해줌
//}
//
////////////////////////
////클라이언트
//int main() {
//
//	Queue q1;
//	Queue q2;
//
//	InitQueue(&q1,5);
//	Push(&q1, 10);
//	Push(&q1, 20);
//	Push(&q1, 30);
//
//	InitQueue(&q2,5); 
//	Push(&q2, 100);
//	Push(&q2, 150);
//
//	printf("queue1: %d\n", Pop(&q1));
//	printf("queue1: %d\n", Pop(&q1));
//	printf("queue1: %d\n", Pop(&q1));
//	UninitQueue(&q1);
//
//	printf("queue2: %d\n", Pop(&q2));
//	printf("queue2: %d\n", Pop(&q2));
//	UninitQueue(&q2);
//
//	return 0;
//} 


//#include <stdio.h>
//#include <stdlib.h>
////서버(Queue)
//typedef struct q_ {
//	int queue[5];
//	int front, rear;
//}Queue;
//
//void Push(Queue* q, int data) {
//	if ((q->rear + 1) % 5 == q->front)
//		return;
//
//	//rear가 0,1,2,3,4 가 되는 코드
//	/*rear = rear + 1;
//	if (rear == 5)
//		rear = 0;*/
//
//	q->rear = (q->rear + 1) % 5; //위 주석 처리 코드와 같음(rear가 0,1,2,4가 되는 코드)
//	q->queue[q->rear] = data;
//}
//int Pop(Queue* q) {
//	if (q->front == q->rear)
//		return 0xfffffff; //오류값으로 임의의 큰 값 지정
//
//	//Push에서 대입전 rear를 증가시키고 대입시켰으므로 
//	//Pop에서도 증가시키고 값을 빼야 해당 위치의 값을 정확히 값의 위치를 가리키게됨 
//	q->front = (q->front + 1) % 5;
//	return q->queue[q->front];
//}
//void InitQueue(Queue* q) {
//	q->front = q->rear = 0; //front 와 rear를 같게만 해주면 됨 0,1,2,3,4 어느것으로 초기화 하든 상관없음
//
//}
//void UninitQueue(Queue* q) {
//	q->front = q->rear = 0; //여기서는 Uninit 할거 없지만해줌
//}
//
////////////////////////
////클라이언트
//int main() {
//
//	Queue q1;
//	Queue q2;
//
//	InitQueue(&q1);
//	Push(&q1, 10);
//	Push(&q1, 20);
//	Push(&q1, 30);
//
//	InitQueue(&q2);
//	Push(&q2, 100);
//	Push(&q2, 150);
//
//	printf("queue1: %d\n", Pop(&q1));
//	printf("queue1: %d\n", Pop(&q1));
//	printf("queue1: %d\n", Pop(&q1));
//	UninitQueue(&q1);
//
//	printf("queue2: %d\n", Pop(&q2));
//	printf("queue2: %d\n", Pop(&q2));
//	UninitQueue(&q2);
//
//	return 0;
//} 

//#include <stdio.h>
//#include <stdlib.h>
////서버(Queue)
//typedef struct q_ {
//	int queue[5];
//	int front, rear;
//}Queue;
//
//void Push(Queue* q, int data) {
//	if ((q->rear + 1) % 5 == q->front)
//		return;
//
//	//rear가 0,1,2,3,4 가 되는 코드
//	/*rear = rear + 1;
//	if (rear == 5)
//		rear = 0;*/
//
//	q->rear = (q->rear + 1) % 5; //위 주석 처리 코드와 같음(rear가 0,1,2,4가 되는 코드)
//	q->queue[q->rear] = data;
//}
//int Pop(Queue* q) {
//	if (q->front == q->rear)
//		return 0xfffffff; //오류값으로 임의의 큰 값 지정
//
//	//Push에서 대입전 rear를 증가시키고 대입시켰으므로 
//	//Pop에서도 증가시키고 값을 빼야 해당 위치의 값을 정확히 값의 위치를 가리키게됨 
//	q->front = (q->front + 1) % 5;
//	return q->queue[q->front];
//}
////////////////////////
////클라이언트
//int main() {
//	// Queue 구조체가 어떤지 알기 때문에
//	// 아래 처럼 초기화 가능한것 사실 이렇게 하면안됨 그래서 초기화 함수생성
//
//	Queue q1 = {0};
//	Queue q2 = {0};
//
//	Push(&q1, 10);
//	Push(&q1, 20);
//	Push(&q1, 30);
//
//	Push(&q2, 100);
//	Push(&q2, 150);
//
//	printf("queue1: %d\n", Pop(&q1));
//	printf("queue1: %d\n", Pop(&q1));
//	printf("queue1: %d\n", Pop(&q1));
//
//	printf("queue2: %d\n", Pop(&q2));
//	printf("queue2: %d\n", Pop(&q2));
//
//	return 0;
//} 

//#include <stdio.h>
//#include <stdlib.h>
////서버(Queue)
//void Push(int queue[],int* pfront, int* prear,int data) {
//	if ((*prear + 1) % 5 == *pfront)
//		return;
//
//	//rear가 0,1,2,3,4 가 되는 코드
//	/*rear = rear + 1;
//	if (rear == 5)
//		rear = 0;*/
//
//	*prear = (*prear + 1) % 5; //위 주석 처리 코드와 같음(rear가 0,1,2,4가 되는 코드)
//	queue[*prear] = data;
//}
//int Pop(int queue[], int* pfront, int* prear) {
//	if (*pfront == *prear)
//		return 0xfffffff; //오류값으로 임의의 큰 값 지정
//
//	//Push에서 대입전 rear를 증가시키고 대입시켰으므로 
//	//Pop에서도 증가시키고 값을 빼야 해당 위치의 값을 정확히 값의 위치를 가리키게됨 
//	*pfront = (*pfront + 1) % 5;
//	return queue[*pfront];
//}
////////////////////////
////클라이언트
//int main() {
//
//	int queue1[5];
//	int front1 = 0, rear1 = 0;
//
//	int queue2[5];
//	int front2 = 0, rear2 = 0;
//
//	Push(queue1, &front1, &rear1, 10);
//	Push(queue1, &front1, &rear1, 20);
//	Push(queue1, &front1, &rear1, 30);
//
//	Push(queue2, &front2, &rear2, 100);
//	Push(queue2, &front2, &rear2, 150);
//
//	printf("queue1: %d\n", Pop(queue1, &front1, &rear1));
//	printf("queue1: %d\n", Pop(queue1, &front1, &rear1));
//	printf("queue1: %d\n", Pop(queue1, &front1, &rear1));
//
//	printf("queue2: %d\n", Pop(queue2, &front2, &rear2));
//	printf("queue2: %d\n", Pop(queue2, &front2, &rear2));
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
////서버(Queue)
//void Push(int data) {
//	if ((rear + 1) % 5 == front)
//		return;
//
//	//rear가 0,1,2,3,4 가 되는 코드
//	/*rear = rear + 1;
//	if (rear == 5)
//		rear = 0;*/
//
//	rear = (rear + 1) % 5; //위 주석 처리 코드와 같음(rear가 0,1,2,4가 되는 코드)
//	queue[rear] = data;
//}
//int Pop() {
//	if (front == rear)
//		return 0xfffffff; //오류값으로 임의의 큰 값 지정
//
//	//Push에서 대입전 rear를 증가시키고 대입시켰으므로 
//	//Pop에서도 증가시키고 값을 빼야 해당 위치의 값을 정확히 값의 위치를 가리키게됨 
//	front = (front + 1) % 5;
//	return queue[front];
//}
////////////////////////
////클라이언트
//int main() {
//
//	int queue1[5];
//	int front1 = 0, rear1 = 0;
//
//	int queue2[5];
//	int front2 = 0, rear2 = 0;
//
//	Push(queue1, front1, rear1, 10);
//	Push(queue1, front1, rear1, 20);
//	Push(queue1, front1, rear1, 30);
//
//	Push(queue2, front2, rear2, 100);
//	Push(queue2, front2, rear2, 150);
//
//	pintrf("queue1: %d\n", Pop(queue1, front1, rear1));
//	pintrf("queue1: %d\n", Pop(queue1, front1, rear1));
//	pintrf("queue1: %d\n", Pop(queue1, front1, rear1));
//
//	pintrf("queue1: %d\n", Pop(queue2, front2, rear2));
//	pintrf("queue1: %d\n", Pop(queue2, front2, rear2));
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
////서버(Queue)
//int queue[5];
//int front = 0, rear = 0;
//void Push(int data) {
//	if ((rear + 1) % 5 == front) 
//		return;
//
//	//rear가 0,1,2,3,4 가 되는 코드
//	/*rear = rear + 1;
//	if (rear == 5)
//		rear = 0;*/
//
//	rear = (rear + 1) % 5; //위 주석 처리 코드와 같음(rear가 0,1,2,4가 되는 코드)
//	queue[rear] = data;
//}
//int Pop() {
//	if (front == rear)
//		return 0xfffffff; //오류값으로 임의의 큰 값 지정
//
//	//Push에서 대입전 rear를 증가시키고 대입시켰으므로 Pop에서도 증가시키고 값을 빼야 해당 위치의 값을 정확히 값의 위치를 가리키게됨 
//	front = (front + 1) % 5; 
//	return queue[front];
//}
////////////////////////
////클라이언트
//int main() {
//
//	Push(10);
//	Push(20);
//	Push(30);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//
//	Push(10);
//	Push(20);
//	Push(30);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
////서버(Queue)
//int queue[5];
//int front = 0, rear = 0;
//void Push(int data) {
//	queue[rear++] = data; //후위 증가: 해당위치에 문장을 벗어날 때 증가함
//}
//int Pop() {
//
//	return queue[front++];
//}
////////////////////////
////클라이언트
//int main() {
//
//	Push(10);
//	Push(20);
//	Push(30);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//
//	Push(10);
//	Push(20);
//	Push(300);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
////서버(Queue)
//int queue[10];
//int front = 0, rear = 0;
//void Push(int data) {
//	queue[rear++] = data; //후위 증가 해당위치에 문장을 벗어날 때 증가함
//}
//int Pop() {
//
//	return queue[front++];
//}
////////////////////////
////클라이언트
//int main() {
//
//	Push(10);
//	Push(20);
//	Push(30);
//
//	printf("%d\n", Pop());//10
//	printf("%d\n", Pop());//20
//	printf("%d\n", Pop());//30
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
////서버(Queue)
//void Push(int data) {
//
//}
//int Pop() {
//
//	return 0;
//}
////////////////////////
////클라이언트
//int main() {
//
//	Push(10);
//	Push(20);
//	Push(30);
//
//	printf("%d\n", Pop());//10
//	printf("%d\n", Pop());//20
//	printf("%d\n", Pop());//30
//	return 0;
//}