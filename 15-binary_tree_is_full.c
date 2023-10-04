#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: a full binary tree
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_is_full, right_is_full;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

/*recursively check whether both subtrees are full*/
	left_is_full = binary_tree_is_full(tree->left);
	right_is_full = binary_tree_is_full(tree->right);

	return (left_is_full && right_is_full);
}

