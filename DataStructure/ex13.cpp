#include <stdio.h>
#include <stdlib.h>

typedef struct _node {

	int data;
	struct _node* lChild;
	struct _node* rChild;

}Node;

Node* AllocNode(int data) {

	Node* n = (Node*)malloc(sizeof(Node));
	n->data = data;
	n->lChild = n->rChild = NULL;

	return n;
}

void Inorder(Node* root) {

	if (root == NULL)
		return;
	Inorder(root->lChild);
	printf("%d ", root->data);
	Inorder(root->rChild);

}

void Preorder(Node* root) {
	if (root == NULL)
		return;
	printf("%d ", root->data);
	Preorder(root->lChild);
	Preorder(root->rChild);
}

void Postorder(Node* root) {
	if (root == NULL)
		return;
	Postorder(root->lChild);
	Postorder(root->rChild);
	printf("%d ", root->data);

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

	Inorder(root);	printf("\n");
	Preorder(root); printf("\n");


	return 0;

}