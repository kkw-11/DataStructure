#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
	int data;
	struct _node* link;
} Node;
void FreeMalloc(Node* head) {
	for (Node* p = head; p != NULL;) {
		Node* np = p->link;
		free(p);
		p = np;
	}
}

int main() {

	Node* head = (Node*)malloc(sizeof(Node));
	head->data = 10;
	head->link = NULL;

	head->link = (Node*)malloc(sizeof(Node));
	head->link->data = 20;
	head->link->link = NULL;


	head->link->link = (Node*)malloc(sizeof(Node));
	head->link->link->data = 30;
	head->link->link->link = NULL;

	for (Node* p = head; p != NULL; p = p->link)
		printf("%d\n", p->data);

	FreeMalloc(head);

	return 0;
}


//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct _node {
//	int data;
//	struct _node* link;
//} Node;
//void FreeMalloc(Node* head) {
//	for (Node* p = head; p != NULL;) {
//		Node* np = p->link;
//		free(p);
//		p = np;
//	}
//}
//
//int main() {
//
//	Node* head = (Node*)malloc(sizeof(Node));
//	head->data = 10;
//	head->link = NULL;
//
//	head->link = (Node*)malloc(sizeof(Node));
//	head->link->data = 20;
//	head->link->link = NULL;
//
//
//	head->link->link = (Node*)malloc(sizeof(Node));
//	head->link->link->data = 30;
//	head->link->link->link = NULL;
//
//	for (Node* p = head; p != NULL; p = p->link)
//		printf("%d\n", p->data);
//
//	FreeMalloc(head);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct _node {
//	int data;
//	struct _node* link;
//} Node;
//int main() {
//
//	Node* head = (Node*)malloc(sizeof(Node));
//	head->data = 10;
//	head->link = NULL;
//
//	head->link = (Node*)malloc(sizeof(Node));
//	head->link->data = 20;
//	head->link->link = NULL;
//
//
//	head->link->link = (Node*)malloc(sizeof(Node));
//	head->link->link->data = 30;
//	head->link->link->link = NULL;
//
//	for (Node* p = head; p != NULL; p = p->link)
//		printf("%d\n", p->data);
//
//	for (Node* p = head; p!= NULL;) {
//		Node* np = p->link;
//		free(p);
//		p = np;
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct _node {
//	int data;
//	struct _node* link;
//} Node;
//int main() {
//
//	Node* head = (Node*)malloc(sizeof(Node));
//	head->data = 10;
//	head->link = NULL;
//		
//	head->link = (Node*)malloc(sizeof(Node));
//	head->link->data = 20;
//	head->link->link = NULL;
//
//
//	head->link->link = (Node*)malloc(sizeof(Node));
//	head->link->link->data = 30;
//	head->link->link->link = NULL;
//
//	for (Node* p = head; p != NULL; p = p->link)
//		printf("%d\n", p->data);
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct _node {
//	int data;
//	struct _node* link;
//} Node;
//int main() {
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node* head = NULL;
//
//	head = &n1;
//	n1.link = &n2;
//	n2.link = &n3;
//
//	for (Node* p = head; p != NULL; p = p->link)
//		printf("%d\n", p->data);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct _node {
//	int data;
//	struct _node* link;
//} Node;
//int main() {
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node* head = NULL;
//	
//
//	head = &n1;
//	n1.link = &n2;
//	n2.link = &n3;
//
//
//
//	for(Node* p = head; p !=NULL; p = p->link)
//		printf("%d\n", p->data);
//
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct _node {
//	int data;
//	struct _node* link;
//} Node;
//int main() {
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node* head = NULL;
//
//	head = &n1;
//	n1.link = &n2;
//	n2.link = &n3;
//
//	Node* p = NULL;
//	p = head;
//
//	printf("%d\n", p->data);
//	p = p->link;
//	printf("%d\n", p->data);
//	p = p->link;
//	printf("%d\n", p->data);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct _node {
//	int data;
//	struct _node* link;
//} Node;
//int main() {
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node* head = NULL;
//	
//	head = &n1;
//	n1.link = &n2;
//	n2.link = &n3;
//
//	printf("%d\n", head->data);
//	printf("%d\n", head->link->data);
//	printf("%d\n", head->link->link->data);
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct _node {
//	int data;
//	struct _node* link;
//} Node;
//int main() {
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//
//	n1.link = &n2;
//	n2.link = &n3;
//
//
//	printf("%d\n", n1.data);
//	printf("%d\n", n2.data);
//	printf("%d\n", n3.data);
//
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct _node {
//	int data;
//	struct _node* link;
//} Node;
//int main() {
//	struct _node node1 = { 10,NULL };
//	//node1.data = 10;
//	//node1.link = NULL;
//	Node node2 = {20,NULL};
//
//	printf("%d\n", node1.data);
//	printf("%d\n", node2.data);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct _node {
//	int data;
//	struct _node* link;
//};
//
//int main() {
//	struct _node node1 = {10,NULL};
//	//node1.data = 10;
//	//node1.link = NULL;
//
//
//
//	printf("%d\n",node1.data);
//
//	return 0;
//}