#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 *
 * Return: a pointer to the created node, or NULL on failure or if parent
 *         is NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nw;

	nw = malloc(sizeof(binary_tree_t));
	if (nw == NULL)
		return (NULL);

	nw->n = value;
	nw->parent = parent;
	nw->left = NULL;
	nw->right = NULL;

	return (nw);
}

