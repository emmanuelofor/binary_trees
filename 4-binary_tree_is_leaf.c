#include "binary_trees.h"

/**
 * binary_tree_is_leaf - This function checks if a specified node is a leaf node 
 *                       in a binary tree.
 * @node: This is a pointer to the node to be checked.
 *
 * Return: If the node is a leaf, the function will return 1.
 *         If not, it will return 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
