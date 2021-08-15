#include <stdio.h>
#include <stdlib.h>

struct _node {
	int data;
	struct _node* link;
};
typedef struct _node Node;

void FreeNode(Node* head) {
	for (Node* p = head; p != NULL;) {
		Node* np = p->link;
		free(p);
		p = np;
	}
}

Node* AllocNode(int data) {
	Node* n= (Node*)malloc(sizeof(Node));
	n->data = data;
	n->link = NULL;
	
	return n;
}
int main() {


	Node* head = NULL;
	Node* tail = NULL;
	Node* new_node;
	new_node = AllocNode(10);
	tail = head = new_node;

	new_node = AllocNode(20);
	tail->link = new_node;
	tail = new_node;

	new_node = AllocNode(30);
	tail->link = new_node;
	tail = new_node;

	new_node = AllocNode(40);
	tail->link = new_node;
	tail = new_node;

	new_node = AllocNode(50);
	tail->link = new_node;
	tail = new_node;


	Node* p = head;
	p = p->link;
	Node* bp = p;  
	p = p->link;
	// p노드 삭제
	Node* np = p->link;
	bp->link = np;
	free(p);




	for (Node* p = head; p != NULL; p = p->link) {
		printf("%d\n", p->data);
	}


	FreeNode(head);

	return 0;
}


//#include <stdio.h>
//#include <stdlib.h>
//
//
//
//struct _node {
//	int data;
//	struct _node* link;
//};
//typedef struct _node Node;
//
//Node* head = NULL;
//Node* tail = NULL;
//
//void FreeNode(Node* head) {
//	for (Node* p = head; p != NULL;) {
//		Node* np = p->link;
//		free(p);
//		p = np;
//	}
//}
//
//Node* AllocNode(int data) {
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//
//	if (head == NULL && tail == NULL){
//		tail = head = n;
//	}
//	else {
//		tail->link = n;
//		tail = n;
//	}
//
//	return n;
//}
//int main() {
//
//
//	
//	Node* n = AllocNode(10);
//
//	n = AllocNode(20);
//
//
//	n = AllocNode(30);
//
//
//	n = AllocNode(40);
//
//
//	n = AllocNode(50);
//
//
//	for (Node* p = head; p != NULL; p = p->link) {
//		printf("%d\n", p->data);
//	}
//
//
//	FreeNode(head);
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
//typedef struct _node Node;
//
//void FreeNode(Node* head) {
//	for (Node* p = head; p != NULL;) {
//		Node* np = p->link;
//		free(p);
//		p = np;
//	}
//}
//
//Node* AllocNode(int data) {
//	Node* n= (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//	
//	return n;
//}
//int main() {
//
//
//	Node* head = NULL;
//	Node* tail = NULL;
//	Node* n;
//	n = AllocNode(10);
//	tail = head = n;
//
//	n = AllocNode(20);
//	tail->link = n;
//	tail = n;
//
//	n = AllocNode(30);
//	tail->link = n;
//	tail = n;
//
//	n = AllocNode(40);
//	tail->link = n;
//	tail = n;
//
//	n = AllocNode(50);
//	tail->link = n;
//	tail = n;
//
//	for (Node* p = head; p != NULL; p = p->link) {
//		printf("%d\n", p->data);
//	}
//
//
//	FreeNode(head);
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
//typedef struct _node Node;
//
//void FreeNode(Node* head) {
//	for (Node* p = head; p != NULL;) {
//		Node* np = p->link;
//		free(p);
//		p = np;
//	}
//}
//
//int main() {
//
//
//	Node* head = NULL;
//	Node* tail = NULL;
//	Node* n;
//	n = (Node*)malloc(sizeof(Node));
//	n->data = 10;
//	n->link = NULL;
//	tail = head = n;
//
//	n = (Node*)malloc(sizeof(Node));
//	n->data = 20;
//	n->link = NULL;
//	tail->link = n ;
//	tail = n;
//
//	n = (Node*)malloc(sizeof(Node));
//	n->data = 30;
//	n->link = NULL;
//	tail->link = n;
//	tail = n;
//	
//	for (Node* p = head; p != NULL; p = p->link) {
//		printf("%d\n", p->data);
//	}
//
//
//	FreeNode(head);
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
//typedef struct _node Node;
//
//void FreeNode(Node* head) {
//	for (Node* p = head; p != NULL;) {
//		Node* np = p->link;
//		free(p);
//		p = np;
//	}
//}
//
//int main() {
//
//
//	Node* head = NULL;
//	Node* n;
//	n = (Node*)malloc(sizeof(Node));
//	n->data = 10;
//	n->link = NULL;
//	head = n;
//
//	n = (Node*)malloc(sizeof(Node));
//	n->data = 20;
//	n->link = NULL;
//	head->link = n;
//
//	n = (Node*)malloc(sizeof(Node));
//	n->data = 30;
//	n->link = NULL;
//	head->link->link = n;
//
//
//	for (Node* p = head; p != NULL; p = p->link) {
//		printf("%d\n", p->data);
//	}
//
//
//	FreeNode(head);
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
//typedef struct _node Node;
//
//int main() {
//
//
//	Node* head = (Node*)malloc(sizeof(Node));
//	head->data = 10;
//	head->link = NULL;
//
//	head->link = (Node*)malloc(sizeof(Node));
//	head->link->data = 20;
//	head->link->link = NULL;
//
//	head->link->link = (Node*)malloc(sizeof(Node));
//	head->link->link->data = 30;
//	head->link->link->link = NULL;
//
//
//	for (Node* p = head; p != NULL; p = p->link) {
//		printf("%d\n", p->data);
//	}
//
//	
//	for (Node* p = head; p != NULL;) {
//		Node* np = p->link;
//		free(p);
//		p = np;
//	}
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
//typedef struct _node Node;
//
//int main() {
//
//	
//
//	Node* head = (Node*)malloc(sizeof(Node));
//	head->data = 10;
//	head->link = NULL;
//
//	head->link = (Node*)malloc(sizeof(Node));
//	head->link->data = 20;
//	head->link->link = NULL;
//
//	head->link->link = (Node*)malloc(sizeof(Node));
//	head->link->link->data = 30;
//	head->link->link->link = NULL;
//
//
//	for (Node* p = head; p != NULL; p = p->link) {
//		printf("%d\n", p->data);
//	}
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
//typedef struct _node Node;
//
//int main() {
//
//	Node n1 = { 10, NULL };
//	Node n2 = { 20, NULL };
//	Node n3 = { 30, NULL };
//
//	Node* head = NULL;
//	Node* p = NULL;
//
//	head = &n1;
//	n1.link = &n2;
//	n2.link = &n3;
//
//	for (Node* p = head; p != NULL; p = p->link) {
//		printf("%d\n", p->data);
//	}
//
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
//typedef struct _node Node;
//
//int main() {
//
//	Node n1 = { 10, NULL };
//	Node n2 = { 20, NULL };
//	Node n3 = { 30, NULL };
//
//	Node* head = NULL;
//	Node* p = NULL;
//
//	head = &n1;
//	p = head;
//	n1.link = &n2;
//	n2.link = &n3;
//
//	printf("%d\n", n1.data);
//	printf("%d\n", n2.data);
//	printf("%d\n", n3.data);
//	printf("\n");
//
//	printf("%d\n", head->data);
//	printf("%d\n", head->link->data);
//	printf("%d\n", head->link->link->data);
//	printf("\n");
//
//	printf("%d\n", p->data);
//	p = p->link; // 연결리스트 전진 코드
//	printf("%d\n", p->data);
//	p = p->link;
//	printf("%d\n", p->data);
//
//	printf("\n");
//
//	for (Node* p = head; p != NULL; p = (*p).link) {
//		printf("%d\n", p->data);
//	}
//
//	for (Node* p = head; p != NULL; p = p->link) {
//		printf("%d\n", p->data);
//	}
//
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
//typedef struct _node Node;
//
//int main() {
//
//	Node n1 = { 10, NULL };
//	Node n2 = { 20, NULL };
//	Node n3 = { 30, NULL };
//	
//	Node* head = NULL;
//	head = &n1;
//	n1.link = &n2;
//	n2.link = &n3;
//
//	printf("%d\n", n1.data);
//	printf("%d\n", n2.data);
//	printf("%d\n", n3.data);
//
//	printf("%d\n", head->data);
//	printf("%d\n", head->link->data);
//	printf("%d\n", head->link->link->data);
//
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
//typedef struct _node Node;
//
//int main() {
//
//	Node n1 = { 10, NULL };
//	Node n2 = { 20, NULL };
//	Node n3 = { 30, NULL };
//
//	n1.link = &n2;
//	n2.link = &n3;
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
//struct _node {
//	int data;
//	struct _node* link;
//}typedef Node;
//int main() {
//
//	Node n1 = { 10, NULL };
//
//	printf("%d\n", n1.data);
//
//	return 0;
//}
//

//#include <stdio.h>
//#include <stdlib.h>
//
//struct _node {
//	int data;
//	struct _node* link;
//};
//typedef struct _node Node;
//int main() {
//
//	struct _node n1 = { 10, NULL };
//
//	printf("%d\n", n1.data);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//
//struct _node {
//	int data;
//	struct _node* link;
//};
//
//int main() {
//
//	struct _node n1 = { 10, NULL };
//
//	printf("%d\n", n1.data);
//
//	return 0;
//}