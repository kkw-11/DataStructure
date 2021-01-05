#include <stdio.h>
#include <stdlib.h>

typedef struct q_ {
	int* queue;
	int front, rear;
	int capacity;
}Queue;
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

//////////////////////
//Ŭ���̾�Ʈ
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
////����(Queue)
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
//	//rear�� 0,1,2,3,4 �� �Ǵ� �ڵ�
//	/*rear = rear + 1;
//	if (rear == 5)
//		rear = 0;*/
//
//	q->rear = (q->rear + 1) % q->capacity; //�� �ּ� ó�� �ڵ�� ����(rear�� 0,1,2,4�� �Ǵ� �ڵ�)
//	q->queue[q->rear] = data;
//}
//int Pop(Queue* q) {
//	if (q->front == q->rear)
//		return 0xfffffff; //���������� ������ ū �� ����
//
//	//Push���� ������ rear�� ������Ű�� ���Խ������Ƿ� 
//	//Pop������ ������Ű�� ���� ���� �ش� ��ġ�� ���� ��Ȯ�� ���� ��ġ�� ����Ű�Ե� 
//	q->front = (q->front + 1) % q->capacity;
//	return q->queue[q->front];
//}
//void InitQueue(Queue* q, int cap) {
//	q->queue = (int*)malloc(sizeof(int) * cap);
//	q->capacity = cap;
//	q->front = q->rear = 0; //front �� rear�� ���Ը� ���ָ� �� 0,1,2,3,4 ��������� �ʱ�ȭ �ϵ� �������
//
//}
//void UninitQueue(Queue* q) {
//	free(q->queue);
//	q->front = q->rear = 0; //���⼭�� Uninit �Ұ� ����������
//}
//
////////////////////////
////Ŭ���̾�Ʈ
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
////����(Queue)
//typedef struct q_ {
//	int* queue;
//	int front, rear;
//}Queue;
//
//void Push(Queue* q, int data) {
//	if ((q->rear + 1) % 5 == q->front)
//		return;
//
//	//rear�� 0,1,2,3,4 �� �Ǵ� �ڵ�
//	/*rear = rear + 1;
//	if (rear == 5)
//		rear = 0;*/
//
//	q->rear = (q->rear + 1) % 5; //�� �ּ� ó�� �ڵ�� ����(rear�� 0,1,2,4�� �Ǵ� �ڵ�)
//	q->queue[q->rear] = data;
//}
//int Pop(Queue* q) {
//	if (q->front == q->rear)
//		return 0xfffffff; //���������� ������ ū �� ����
//
//	//Push���� ������ rear�� ������Ű�� ���Խ������Ƿ� 
//	//Pop������ ������Ű�� ���� ���� �ش� ��ġ�� ���� ��Ȯ�� ���� ��ġ�� ����Ű�Ե� 
//	q->front = (q->front + 1) % 5;
//	return q->queue[q->front];
//}
//void InitQueue(Queue* q,int cap) {
//	q->queue = (int*)malloc(sizeof(int) * cap);
//	q->front = q->rear = 0; //front �� rear�� ���Ը� ���ָ� �� 0,1,2,3,4 ��������� �ʱ�ȭ �ϵ� �������
//
//}
//void UninitQueue(Queue* q) {
//	free(q->queue);
//	q->front = q->rear = 0; //���⼭�� Uninit �Ұ� ����������
//}
//
////////////////////////
////Ŭ���̾�Ʈ
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
////����(Queue)
//typedef struct q_ {
//	int queue[5];
//	int front, rear;
//}Queue;
//
//void Push(Queue* q, int data) {
//	if ((q->rear + 1) % 5 == q->front)
//		return;
//
//	//rear�� 0,1,2,3,4 �� �Ǵ� �ڵ�
//	/*rear = rear + 1;
//	if (rear == 5)
//		rear = 0;*/
//
//	q->rear = (q->rear + 1) % 5; //�� �ּ� ó�� �ڵ�� ����(rear�� 0,1,2,4�� �Ǵ� �ڵ�)
//	q->queue[q->rear] = data;
//}
//int Pop(Queue* q) {
//	if (q->front == q->rear)
//		return 0xfffffff; //���������� ������ ū �� ����
//
//	//Push���� ������ rear�� ������Ű�� ���Խ������Ƿ� 
//	//Pop������ ������Ű�� ���� ���� �ش� ��ġ�� ���� ��Ȯ�� ���� ��ġ�� ����Ű�Ե� 
//	q->front = (q->front + 1) % 5;
//	return q->queue[q->front];
//}
//void InitQueue(Queue* q) {
//	q->front = q->rear = 0; //front �� rear�� ���Ը� ���ָ� �� 0,1,2,3,4 ��������� �ʱ�ȭ �ϵ� �������
//
//}
//void UninitQueue(Queue* q) {
//	q->front = q->rear = 0; //���⼭�� Uninit �Ұ� ����������
//}
//
////////////////////////
////Ŭ���̾�Ʈ
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
////����(Queue)
//typedef struct q_ {
//	int queue[5];
//	int front, rear;
//}Queue;
//
//void Push(Queue* q, int data) {
//	if ((q->rear + 1) % 5 == q->front)
//		return;
//
//	//rear�� 0,1,2,3,4 �� �Ǵ� �ڵ�
//	/*rear = rear + 1;
//	if (rear == 5)
//		rear = 0;*/
//
//	q->rear = (q->rear + 1) % 5; //�� �ּ� ó�� �ڵ�� ����(rear�� 0,1,2,4�� �Ǵ� �ڵ�)
//	q->queue[q->rear] = data;
//}
//int Pop(Queue* q) {
//	if (q->front == q->rear)
//		return 0xfffffff; //���������� ������ ū �� ����
//
//	//Push���� ������ rear�� ������Ű�� ���Խ������Ƿ� 
//	//Pop������ ������Ű�� ���� ���� �ش� ��ġ�� ���� ��Ȯ�� ���� ��ġ�� ����Ű�Ե� 
//	q->front = (q->front + 1) % 5;
//	return q->queue[q->front];
//}
////////////////////////
////Ŭ���̾�Ʈ
//int main() {
//	// Queue ����ü�� ��� �˱� ������
//	// �Ʒ� ó�� �ʱ�ȭ �����Ѱ� ��� �̷��� �ϸ�ȵ� �׷��� �ʱ�ȭ �Լ�����
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
////����(Queue)
//void Push(int queue[],int* pfront, int* prear,int data) {
//	if ((*prear + 1) % 5 == *pfront)
//		return;
//
//	//rear�� 0,1,2,3,4 �� �Ǵ� �ڵ�
//	/*rear = rear + 1;
//	if (rear == 5)
//		rear = 0;*/
//
//	*prear = (*prear + 1) % 5; //�� �ּ� ó�� �ڵ�� ����(rear�� 0,1,2,4�� �Ǵ� �ڵ�)
//	queue[*prear] = data;
//}
//int Pop(int queue[], int* pfront, int* prear) {
//	if (*pfront == *prear)
//		return 0xfffffff; //���������� ������ ū �� ����
//
//	//Push���� ������ rear�� ������Ű�� ���Խ������Ƿ� 
//	//Pop������ ������Ű�� ���� ���� �ش� ��ġ�� ���� ��Ȯ�� ���� ��ġ�� ����Ű�Ե� 
//	*pfront = (*pfront + 1) % 5;
//	return queue[*pfront];
//}
////////////////////////
////Ŭ���̾�Ʈ
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
////����(Queue)
//void Push(int data) {
//	if ((rear + 1) % 5 == front)
//		return;
//
//	//rear�� 0,1,2,3,4 �� �Ǵ� �ڵ�
//	/*rear = rear + 1;
//	if (rear == 5)
//		rear = 0;*/
//
//	rear = (rear + 1) % 5; //�� �ּ� ó�� �ڵ�� ����(rear�� 0,1,2,4�� �Ǵ� �ڵ�)
//	queue[rear] = data;
//}
//int Pop() {
//	if (front == rear)
//		return 0xfffffff; //���������� ������ ū �� ����
//
//	//Push���� ������ rear�� ������Ű�� ���Խ������Ƿ� 
//	//Pop������ ������Ű�� ���� ���� �ش� ��ġ�� ���� ��Ȯ�� ���� ��ġ�� ����Ű�Ե� 
//	front = (front + 1) % 5;
//	return queue[front];
//}
////////////////////////
////Ŭ���̾�Ʈ
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
////����(Queue)
//int queue[5];
//int front = 0, rear = 0;
//void Push(int data) {
//	if ((rear + 1) % 5 == front) 
//		return;
//
//	//rear�� 0,1,2,3,4 �� �Ǵ� �ڵ�
//	/*rear = rear + 1;
//	if (rear == 5)
//		rear = 0;*/
//
//	rear = (rear + 1) % 5; //�� �ּ� ó�� �ڵ�� ����(rear�� 0,1,2,4�� �Ǵ� �ڵ�)
//	queue[rear] = data;
//}
//int Pop() {
//	if (front == rear)
//		return 0xfffffff; //���������� ������ ū �� ����
//
//	//Push���� ������ rear�� ������Ű�� ���Խ������Ƿ� Pop������ ������Ű�� ���� ���� �ش� ��ġ�� ���� ��Ȯ�� ���� ��ġ�� ����Ű�Ե� 
//	front = (front + 1) % 5; 
//	return queue[front];
//}
////////////////////////
////Ŭ���̾�Ʈ
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
////����(Queue)
//int queue[5];
//int front = 0, rear = 0;
//void Push(int data) {
//	queue[rear++] = data; //���� ����: �ش���ġ�� ������ ��� �� ������
//}
//int Pop() {
//
//	return queue[front++];
//}
////////////////////////
////Ŭ���̾�Ʈ
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
////����(Queue)
//int queue[10];
//int front = 0, rear = 0;
//void Push(int data) {
//	queue[rear++] = data; //���� ���� �ش���ġ�� ������ ��� �� ������
//}
//int Pop() {
//
//	return queue[front++];
//}
////////////////////////
////Ŭ���̾�Ʈ
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
////����(Queue)
//void Push(int data) {
//
//}
//int Pop() {
//
//	return 0;
//}
////////////////////////
////Ŭ���̾�Ʈ
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