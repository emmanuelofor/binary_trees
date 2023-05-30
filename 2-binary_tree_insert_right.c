#include "binary_trees.h"

/**
 * binary_tree_insert_right - This function inserts a new node as the right child
 *                            of a specified node in a binary tree.
 * @parent: This is a pointer to the node where the right child will be inserted.
 * @value: This is the value to store in the new node.
 *
 * Return: If the parent is NULL or an error occurs, the function will return NULL.
 *         Otherwise, it returns a pointer to the new node.
 *
 * Description: If the parent node already has a right child, the new node
 *              will replace it. The former right child will then become
 *              the right child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
