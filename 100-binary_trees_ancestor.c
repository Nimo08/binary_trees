#include "binary_trees.h"
binary_tree_t *binary_tree_root(const binary_tree_t *node);
binary_tree_t *binary_tree_lca(const binary_tree_t *root,
		const binary_tree_t *first, const binary_tree_t *second);
/**
 * binary_trees_ancestor - finds the lowest common ancestor
 * of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node of
 * the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *root;

	root = (binary_tree_t *)first;
	/*
	 * assume that first is the root
	 * then go up the tree using parent pointers
	 * till the root is reached
	 */
	while (root->parent)
	{
		root = root->parent;
	}
	return (binary_tree_lca(root, first, second));
}
/**
 * binary_tree_lca - helper function to binary_trees_ancestor
 * @root: pointer to root node
 * @first: node 1
 * @second: node 2
 * Return: pointer to LCA
 */
binary_tree_t *binary_tree_lca(const binary_tree_t *root,
		const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *left, *right;

	if (root == NULL)
		return (NULL);
	if (root == first || root == second)
		return ((binary_tree_t *)root);
	left = binary_tree_lca(root->left, first, second);
	right = binary_tree_lca(root->right, first, second);
	if (left == NULL)
		return (right);
	else if (right == NULL)
		return (left);
	else
		return ((binary_tree_t *)root);
}
/**
 * binary_tree_root - This is a function that checks whether a given node is
 * is a root
 * @node: the pointer to the node to check
 * Return: pointer to root on success and NULL on failure
 */
binary_tree_t *binary_tree_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	else if (node->parent == NULL)
		return ((binary_tree_t *)node);
	else
		return (NULL);
}
