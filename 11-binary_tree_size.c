#include "binary_trees.h"

/**
 * binary_tree_size - This function calculates the size of a binary tree.
 * @tree: This is a pointer to the root node of the tree whose size is to be measured.
 *
 * Return: The function returns the size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
