#include "binary_trees.h"

/**
 * binary_tree_node - This function creates a new binary tree node.
 * @parent: This is a pointer to the parent of the node that will be created.
 * @value: This is the value to store in the new node.
 *
 * Return: This function returns a pointer to the new node, or NULL if an error occurs.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
