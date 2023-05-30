#include "binary_trees.h"

/**
 * binary_tree_preorder - This function traverses a binary tree in a pre-order manner.
 * @tree: This is a pointer to the root node of the tree that will be traversed.
 * @func: This is a pointer to a function that will be called for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
