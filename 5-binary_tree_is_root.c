#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - This is a function that checks whether a given node is
 * is a root
 * @node: the pointer to the node to check
 * Return: 1 on success and 0 on failure
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (node->parent == NULL);
}
