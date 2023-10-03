#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the
 * right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or
 * if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
	{
		return (NULL);
	}
	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		/*
		 * make the parent and newnode point to same node
		 */
		newnode->right = parent->right;
		/*
		 * set parent ptr of old right-child to point to
		 * new node
		 * accessed the parent ptr of the right-child
		 * of the parent node
		 */
		parent->right->parent = newnode;
	}
	parent->right = newnode;
	return (newnode);
}
