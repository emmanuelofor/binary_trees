#include "binary_trees.h"

/**
 * binary_tree_balance - Computes the balance factor for a binary tree.
 * @tree: Pointer to the root node of the tree for which the balance factor is calculated.
 *
 * Return: If the tree is NULL, the function returns 0. Otherwise, it returns the balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Determines the height of a binary tree.
 * @tree: Pointer to the root node of the tree whose height is being measured.
 *
 * Return: If the tree is NULL, the function returns 0. Otherwise, it returns the tree's height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
