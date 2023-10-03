#include "binary_trees.h"
#include <stdlib.h>
size_t binary_tree_depth(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_depth, right_depth;

	if (tree == NULL)
	{
		return (0);
	}
	left_depth = binary_tree_depth(tree->left);
	right_depth = binary_tree_depth(tree->right);
	if (left_depth == right_depth)
	{
		return (1);
	}
	return (0);
}
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_depth, right_depth, max;

	if (tree == NULL)
	{
		return (0);
	}
	left_depth = binary_tree_depth(tree->left);
	right_depth = binary_tree_depth(tree->right);
	if (left_depth > right_depth)
	{
		max = left_depth;
	}
	else
	{
		max = right_depth;
	}
	return (max + 1);
}