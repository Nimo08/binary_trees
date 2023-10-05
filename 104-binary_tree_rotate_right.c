#include "binary_trees.h"


/**
 * binary_tree_rotate_right - a function that performs a right-rotation on a
 * binary tree
 * @tree: a pointer to the root node of the tree to rotate
 * Return: a pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root = tree->left;

	if (tree == NULL || tree->left == NULL)
	{
		return (tree);
	}

	tree->left = new_root->right;
	new_root->right = tree;

	if (tree->left)
	{
		tree->left->parent = tree;
	}

	new_root->parent = tree->parent;
	tree->parent = new_root;

	return (new_root);
}
