#include "binary_trees.h"

/**
 * binary_tree_preorder - a binary tree using pre-order traversal
 * @tree: pointer
 * @func: function
 * Return: A binary tree
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
