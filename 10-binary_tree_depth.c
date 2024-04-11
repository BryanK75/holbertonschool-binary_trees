#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: Binary tree
 * Return: depth of the binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;
	binary_tree_t *node = NULL;

	if (tree == NULL)
		return (0);

	node = tree->parent;
	while (node != NULL)
	{
		count++;
		node = node->parent;
	}
	return (count);
}
