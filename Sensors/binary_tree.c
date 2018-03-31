#include "binary_tree.h"
#include <stdlib.h>
#include <string.h>

BinaryTree* getNewTree(char *name)
{
	BinaryTree *tree;
	tree = malloc(sizeof(BinaryTree));
	tree->head = NULL;
	/*if (strlen(name) < NAME_MAX_LEN - 1)
	{
		strcpy(tree->name, name);
	}
	else*/
	strncpy(tree->name, name, NAME_MAX_LEN - 1);
	tree->size = 0;
	tree->depth = 0;
	return tree;
}

//CREATE NODE
//void addData()