#include <stdio.h>
#include <stdlib.h>
#include <binary_trees.h>

/**
 * binary_tree_nodes - a function that counts the nodes with at least 1
 * child in a binary tree
 * @tree- a pointer to the root node of the tree to count the number of nodes
 * Return: the nodes with at least 1 child in a binary tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	size_t left_count = binary_tree_nodes(tree->left);
	size_t right_count = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return 1 + left_count + right_count;

	else
		return left_count + right_count;
}
