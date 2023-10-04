#include "binary_trees.h"
size_t binary_tree_size(const binary_tree_t *tree);
int complete_tree(const binary_tree_t *tree, unsigned int index,
		unsigned int size);
/**
 * binary_tree_is_complete - checks if a binary tree is
 * complete
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (complete_tree(tree, 0, binary_tree_size(tree)));
}
/**
 * complete_tree - checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 * @index: index of node
 * @size: size of binary tree
 * Return: 0 if tree is NULL
 */
int complete_tree(const binary_tree_t *tree, unsigned int index,
		unsigned int size)
{
	if (tree == NULL)
		return (1);
	if (index >= size)
		return (0);
	return (complete_tree(tree->left, 2 * index + 1, size) &&
			complete_tree(tree->right, 2 * index + 2, size));
}
/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: the size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (tree == NULL)
		return (0);
	/*Recursively calculate the size of the left and right subtrees */
	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	/*
	 * Return the sum of left and right subtree sizes,
	 * plus 1 for the current node
	 */
	return (left_size + right_size + 1);
}
