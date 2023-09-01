#include "binary_trees.h"

/**
 * binary_tree_is_full - This function check if a binary tree is created
 * @tree: tree to traverse
 * Return: 0 false else 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int full_left, full_right;

	if (!tree)
		return (1);

	if ((!tree->left && tree->right != NULL) ||
		(tree->left != NULL && !tree->right))
		return (0);

	full_left = binary_tree_is_full(tree->left);
	full_right = binary_tree_is_full(tree->right);

	return (full_left && full_right);
}
