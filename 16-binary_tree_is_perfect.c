#include "binary_trees.h"

/**
 * binary_tree_is_perfect - This fuvtion checks if a tree is a perfect
 * tree
 * @tree: tree to examine
 * Return: 0 if Not perfect else 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	left = height(tree->left);
	right = height(tree->right);

	if (left == right)
	{
		if (!tree->left && !tree->right)
			return (1);

		left = binary_tree_is_perfect(tree->left);
		right = binary_tree_is_perfect(tree->right);
		return (left && right);
	}

	return (0);
}

/**
 * height - get height of tree
 * @tree: tree to traverse
 * Return: height of tree
 */

int height(const binary_tree_t *tree)
{
	int l_h, r_h;

	if (!tree)
		return (0);

	l_h = height(tree->left);
	r_h = height(tree->right);

	return (1 + (l_h > r_h ? l_h : r_h));
}
