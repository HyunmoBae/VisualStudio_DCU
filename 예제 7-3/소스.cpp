#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct treenode {
	int size;
	struct treenode* left;
	struct treenode* right;
} treeNode;

int FolrderSize = 0;

treeNode* makeRootNode(int size, treeNode* leftNode, treeNode* rightNode) {
	treeNode* root = (treeNode*)malloc(sizeof(treeNode));
	root->size = size;
	root->left = leftNode;
	root->right = rightNode;
	return root;
}
int postorder_FolrderSize(treeNode* root) {
	if (root) {
		postorder_FolrderSize(root->left);
		postorder_FolrderSize(root->right);
		FolrderSize += root->size;
	}
	return FolrderSize;
}

void main() {
	treeNode* F11 = makeRootNode(120, NULL, NULL);
	treeNode* F10 = makeRootNode(55, NULL, NULL);
	treeNode* F9 = makeRootNode(100, NULL, NULL);
	treeNode* F8 = makeRootNode(200, NULL, NULL);
	treeNode* F7 = makeRootNode(68, F10, F11);
	treeNode* F6 = makeRootNode(40, NULL, NULL);
	treeNode* F5 = makeRootNode(15, NULL, NULL);
	treeNode* F4 = makeRootNode(2, F8, F9);
	treeNode* F3 = makeRootNode(10, F6, F7);
	treeNode* F2 = makeRootNode(0, F4, F5);
	treeNode* F1 = makeRootNode(0, F2, F3);

	printf("\n\n C:\\의 용량 : %d M \n", postorder_FolrderSize(F2));

	FolrderSize = 0;
	printf("\n\n D:\\의 용량 : %d M \n", postorder_FolrderSize(F3));

	FolrderSize = 0;
	printf("\n\n 내컴퓨터의 전체 용량 : %d M \n", postorder_FolrderSize(F1));
}