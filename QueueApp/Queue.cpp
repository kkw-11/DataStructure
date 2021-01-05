#include <stdlib.h>
#include "Queue.h"
//����(Queue)
void Push(Queue* q, int data) {
	if ((q->rear + 1) % q->capacity == q->front)
		return;

	//rear�� 0,1,2,3,4 �� �Ǵ� �ڵ�
	/*rear = rear + 1;
	if (rear == 5)
		rear = 0;*/

	q->rear = (q->rear + 1) % q->capacity; //�� �ּ� ó�� �ڵ�� ����(rear�� 0,1,2,4�� �Ǵ� �ڵ�)
	q->queue[q->rear] = data;
}
int Pop(Queue* q) {
	if (q->front == q->rear)
		return 0xfffffff; //���������� ������ ū �� ����

	//Push���� ������ rear�� ������Ű�� ���Խ������Ƿ� 
	//Pop������ ������Ű�� ���� ���� �ش� ��ġ�� ���� ��Ȯ�� ���� ��ġ�� ����Ű�Ե� 
	q->front = (q->front + 1) % q->capacity;
	return q->queue[q->front];
}
void InitQueue(Queue* q, int cap) {
	q->queue = (int*)malloc(sizeof(int) * cap);
	q->capacity = cap;
	q->front = q->rear = 0; //front �� rear�� ���Ը� ���ָ� �� 0,1,2,3,4 ��������� �ʱ�ȭ �ϵ� �������

}
void UninitQueue(Queue* q) {
	free(q->queue);
	q->front = q->rear = 0; //���⼭�� Uninit �Ұ� ����������
}