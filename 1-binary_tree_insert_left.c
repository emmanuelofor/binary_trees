#include "binary_trees.h"

/**
 * binary_tree_insert_left - This function inserts a new node as the left child
 *                           of another node in a binary tree.
 * @parent: This is a pointer to the node where the left child will be inserted.
 * @value: This is the value to store in the new node.
 *
 * Return: If the parent is NULL or an error occurs, the function will return NULL.
 *         Otherwise, it returns a pointer to the new node.
 *
 * Description: If the parent node already has a left child, the new node
 *              will replace it. The former left child will then become
 *              the left child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
