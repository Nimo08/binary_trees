#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree - a pointer to the root node of the tree to measure the height
 * Return: The height of the binary tree, otherwise 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return o;
/*calculate the height of the tree*/
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

 /**
  * Return the maximum of left and right subtree heights,
  * plus 1 for the current node
  */
	return (left_height > right_height ? left_height : right_height) + 1;
/**
 * The line return (left_height > right_height ? left_height : right_height)
 * + 1; is using the conditional (ternary) operator ? : to return the maximum
 * height between the left and right subtrees plus 1
 */
}


