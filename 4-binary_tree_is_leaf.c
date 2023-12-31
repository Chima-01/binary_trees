#include "binary_trees.h"

/**
 * binary_tree_is_leaf - This function check if a node is leaf
 * @node: node to check to examine
 * Return: 1 if node is a leaf or 0 if not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
