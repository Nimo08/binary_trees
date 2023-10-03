#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: The height of the binary tree, otherwise 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL)
		return (0);
	while (tree->left != NULL)
	{
		tree = tree->left;
		height++;
	}
	while (tree->right != NULL)
	{
		tree = tree->right;
		height++;
	}
	return (height);
}


