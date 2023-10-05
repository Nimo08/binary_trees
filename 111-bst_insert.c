#include "binary_trees.h"
/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: double pointer to the root node of the BST to insert the value
 * @value: value to store in the node to be inserted
 * Return: pointer to the created node, or NULL on failure
 */
/*
 * If the address stored in tree is NULL, the created node
 * must become the root node
 * if left/right subtree is null, insert the value
 * if the left/right subtree is not null and the value to be inserted is not
 * equal to the existing value, insert the value within the left subtree
 * if a duplicate value is encountered, return NULL
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *newnode;

	newnode = binary_tree_node(*tree, value);
	if (newnode == NULL)
		return (NULL);
	if (tree == NULL)
		return (NULL);
	if (*tree == NULL)
	{
		*tree = newnode;
		return (newnode);
	}
	if (value <= (*tree)->n)
	{
		if ((*tree)->left == NULL)
		{
			(*tree)->left = newnode;
			return (newnode);
		}
		else if ((*tree)->left->n != value)
			return (bst_insert(&((*tree)->left), value));
		else
			return (NULL);
	}
	else if (value > (*tree)->n)
	{
		if ((*tree)->right == NULL)
		{
			(*tree)->right = newnode;
			return (newnode);
		}
		else if ((*tree)->right->n != value)
			return (bst_insert(&((*tree)->right), value));
		else
			return (NULL);
	}
	return (NULL);
}
