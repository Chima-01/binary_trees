#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node to the right side of parent
 * @parent: parent node to link new node
 * @value: value to insert to node
 * Return: address of new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->right != NULL)
	{
		parent->right->parent = new_node;
		new_node->right = parent->right;
	}
		parent->right = new_node;
	return (new_node);
}
