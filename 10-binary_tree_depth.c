#include "binary_trees.h"

/**
 * binary_tree_depth - This function that measures the depth of a node
 * in a binary tree
 * @tree: tree to traversse
 * Return: return depth or 0 if tree null
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	if (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
