#include "binary_trees.h"

/**
 * binary_tree_is_root - This function checks if a specified node is the root
 *                       of a binary tree.
 * @node: This is a pointer to the node to be checked.
 *
 * Return: If the node is the root, the function will return 1.
 *         If not, it will return 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
