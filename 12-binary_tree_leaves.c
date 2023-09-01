#include "binary_trees.h"

/**
 * binary_tree_leaves - This function count leave node in a tree
 * @tree: tree to traverse
 * Return: no of leaf node or zero if NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));
}
