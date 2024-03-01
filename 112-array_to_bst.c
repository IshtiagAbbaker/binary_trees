#include "binary_trees.h"

/**
 * array_to_bst - a function that builds a Binary Search Tree from an array
 * @array: is a pointer to the first element of the array to be converted
 * @size: is the number of element in the array
 *
 * Return: A pointer to the root node of the created BST, or NULL upon failure.
 */

bst_t *array_to_bst(int *array, size_t size)
{
	size_t n;
	bst_t *root = NULL;

	for (n = 0; n < size; n++)
		bst_insert(&root, array[n]);

	return (root);
}

