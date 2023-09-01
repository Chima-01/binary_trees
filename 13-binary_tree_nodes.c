#include "binary_trees.h"

/**
 * binary_tree_nodes - This function counts parent with atleast
 * one child
 * @tree: tree to traverse
 * Return: number of parent tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t parent_count;

	if (!tree)
		return (0);

	parent_count = 0;
	if (tree->left != NULL || tree->right != NULL)
		parent_count = 1;

	parent_count += binary_tree_nodes(tree->left);
	parent_count += binary_tree_nodes(tree->right);

	return (parent_count);
}
