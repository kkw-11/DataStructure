#include <stdio.h>
#include <stdlib.h>


typedef struct _node{

	int data;
	struct _node* lChild;
	struct _node* rChild;

}Node;

Node* AllocNode(int data) {

	Node* n = (Node*)malloc(sizeof(Node));
	n->data = data;
	n->lChild = n->lChild = NULL;

	return n;
}

void Inorder(Node* root) {

	if (root == NULL)
		return;
	Inorder(root->lChild);
	printf("%d ", root->data);
	Inorder(root->rChild);

}

int main() {

	Node* root = NULL;
	root = AllocNode(50);
	root->lChild = AllocNode(30);
	root->rChild = AllocNode(70);

	root->lChild->lChild = AllocNode(10);
	root->lChild->rChild = AllocNode(40);
	root->rChild->lChild = AllocNode(60);
	root->rChild->rChild = AllocNode(90);

	Inorder(root); printf("\n");


	return 0;

}