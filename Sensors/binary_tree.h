#pragma once

#define NAME_MAX_LEN 32

typedef struct TreeNode
{
	void *data;
	struct TreeNode *left;
	struct TreeNode *right;
}TreeNode;

typedef struct BinaryTree
{
	TreeNode *head;
	char name[NAME_MAX_LEN];
	int size;
	int depth;
}BinaryTree;

BinaryTree* getNewTree(char *name);