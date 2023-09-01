#include "binary_trees.h"

/**
 * binary_tree_is_full - This function check if a binary tree is null
 * @tree: tree to examine
 * Return: 0 if tree is null
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (check_binary_full(tree));
}

/**
 * check_binary_full - This function check if a binary tree is full
 * @tree: tree to traverse
 *  Return: 0 false else 1
 */

int check_binary_full(const binary_tree_t *tree)
{
	int full_left, full_right;

	if (!tree)
		return (1);

	if ((!tree->left && tree->right != NULL) ||
		(tree->left != NULL && !tree->right))
		return (0);

	full_left = check_binary_full(tree->left);
	full_right = check_binary_full(tree->right);

	return (full_left && full_right);
}
