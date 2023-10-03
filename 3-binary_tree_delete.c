#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - This function deletes an entire binary tree
 * @tree: The pointer to the root node of teh tree to delete
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

/* delete the left and right children recursively*/
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

/* free the current node*/
	free(tree);
}
