#include <stdio.h>
#include "Queue.h"

int main() {
	Queue q1;

	InitQueue(&q1,10);
	Push(&q1, 10);
	Push(&q1, 20);
	Push(&q1, 30);

	printf("%d\n", Pop(&q1));
	printf("%d\n", Pop(&q1));
	printf("%d\n", Pop(&q1));
	UninitQueue(&q1);


	return 0;
}