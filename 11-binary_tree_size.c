#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree - a pointer to the root node of the tree to measure the size
 * Return: the size of the binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return;
/*Recursively calculate the size of the left and right subtrees */
	size_t left_size = binary_tree_size(tree->left);
	size_t right_size = binary_tree_size(tree->right);

/* Return the sum of left and right subtree sizes, plus 1 for the current node */
	return left_size + right_size + 1;
}
