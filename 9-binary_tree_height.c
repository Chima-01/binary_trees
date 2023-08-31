#include "binary_trees.h"

/**
 * binary_tree_height - Calculate the height of tree
 * @tree: tree to claculate height of
 * Return: height of tree or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
