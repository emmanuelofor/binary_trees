#include "binary_trees.h"

/**
 * binary_tree_uncle - Retrieves the uncle of a node from a binary tree.
 * @node: Pointer to the node whose uncle is to be found.
 *
 * Return: If node is NULL, or doesn't have an uncle, returns NULL.
 *         Otherwise, returns a pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
