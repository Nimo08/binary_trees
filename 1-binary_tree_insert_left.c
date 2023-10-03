#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_insert_left - This is a function that inserts a node as
 * the left-child of another node
 * @parent: This is a pointer to the parent tree-node
 * @value: This is the value to be passed to the child node
 * Return: A pointer to the created node, or NULL if the parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	/* Allocate memory from the new node*/

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	/* Initialize the new node*/

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = parent->left;
	newnode->right = NULL;

	if (parent->left != NULL)
	{
		parent->left->parent = newnode;
	}
	parent->left = newnode;

	return (newnode);
}
