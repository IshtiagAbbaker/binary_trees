#include "binary_trees.h"


/**
 * binary_tree_uncle - a function that finds the uncle of a node
 * @node: is a pointer to the node to find the uncle
 *
 * Return: If node is NULL or has no uncle, NULL.
 *         Otherwise, a pointer to the uncle node.
 */


binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *uncl;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;

	if (parent->parent == NULL)
		return (NULL);


	if (parent == parent->parent->right)
		uncl = parent->parent->left;
	else
		uncl = parent->parent->right;

	return (uncl);
}

