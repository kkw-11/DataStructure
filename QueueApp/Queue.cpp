#include <stdlib.h>
#include "Queue.h"
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