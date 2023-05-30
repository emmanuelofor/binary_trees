#include "binary_trees.h"

/**
 * binary_tree_sibling - Retrieves the sibling of a node from a binary tree.
 * @node: Pointer to the node whose sibling is to be found.
 *
 * Return: If node is NULL or has no sibling, returns NULL.
 *         Otherwise, returns a pointer to the sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
