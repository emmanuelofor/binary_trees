#include "binary_trees.h"

/**
 * binary_tree_inorder - This function traverses a binary tree in an in-order fashion.
 * @tree: This is a pointer to the root node of the tree that is to be traversed.
 * @func: This is a pointer to a function that will be called for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
