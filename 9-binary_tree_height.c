#include "binary_trees.h"

/**
 * max - Calculate the height of tree
 * @tree: tree to traverse
 * Return: height
 */

size_t max(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	left_height = max(tree->left);
	right_height = max(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_height - Calculate the height of tree
 * @tree: tree to claculate height of
 * Return: height of tree or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (max(tree) - 1);
}
