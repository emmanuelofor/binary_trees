#include "binary_trees.h"

/**
 * binary_tree_height - This function calculates the height of a binary tree.
 * @tree: This is a pointer to the root node of the tree whose height will be measured.
 *
 * Return: If the tree is NULL, the function will return 0. 
 *         Otherwise, it will return the height of the tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
