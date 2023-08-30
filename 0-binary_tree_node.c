#include "binary_trees.h"


/**
 * binary_tree_node - pointer to created node
 * @parent: pointer to node (parent node) or child
 * @value: value of node
 * Return: address of created node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent != NULL)
	{
		if (parent->left == NULL)
			parent->left = new_node;
		else
			parent->right = new_node;
	}
	return (new_node);
}
