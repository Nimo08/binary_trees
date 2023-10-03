#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle, *root, *gran;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	root = node->parent;
	gran = root->parent;
	if (gran == NULL)
	{
		return (NULL);
	}
	if (root == gran->left)
	{
		uncle = gran->right;
	}
	else
		uncle = gran->left;
	return (uncle);
}
