#include "binary_trees.h"

/**
 * binary_tree_balance -  This function that measures the balance factor of a
 * binary tree
 * tree: parent to measure
 * Return: balance factor of tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);

	left_height = height(tree->left);
	right_height = height(tree->right);

	return (left_height - right_height);
}

/**
 * height - height of parent
 * @tree: parent to traverse
 * Return: height of tree
 */

int height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);

	left_height = height(tree->left);
	right_height = height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
