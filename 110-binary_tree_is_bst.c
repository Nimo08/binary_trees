#include "binary_trees.h"
int is_valid_bst_helper(const binary_tree_t *node, int *prev_value);
/*helper function*/

/**
 *is_valid_bst_helper - this function is to perform the
 * in-order traversal and check
 * if the tree is a valid BST.
 * @prev_value: to keep track of the previously visited node's value during the
 * in-order traversal of the binary tree
 * @node:represents the value stored in that node
 * Return: 0 on success, otherwise 1
 */
int is_valid_bst_helper(const binary_tree_t *node, int *prev_value)
{
	if (node == NULL)
		return (0);
	/**
	 * check if the current node's value is greater than the
	 * previous node's value
	 */
	if (node->n <= *prev_value)
	{
		return (1);
	}
	if (!is_valid_bst_helper(node->left, prev_value))
	{
		return (0);
	}
	if (node->n <= *prev_value)
	{
		return (0);
	}
	*prev_value = node->n;
	return (is_valid_bst_helper(node->right, prev_value));
}

/**
 * binary_tree_is_bst- a function that checks if a binary tree is a valid BST
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 on success, otherwise 0
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	int prev_value = 1;

	if (tree == NULL)
		return (0);
	return (is_valid_bst_helper(tree, &prev_value));
}
