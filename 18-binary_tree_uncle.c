#include "binary_trees.h"

/**
 * binary_tree_uncle - This function searches for the uncle of
 * a given node
 * @node: node to find uncle
 * Return: uncle node or null if not found
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);

	return (node->parent->parent->right);
}
