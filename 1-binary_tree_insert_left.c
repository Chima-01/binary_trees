#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert node to the left of parent node
 * Description: Where parent is a pointer to the node to insert the left-child in
 * And value is the value to store in the new node
 * function must return a pointer to the created node, or NULL on failure or if parent is NULL
 * If parent already has a left-child, the new node must take its place,
 * and the old left-child must be set as the left-child of the new node.
 *
 * @parent: parent node to give a left child
 * @value: value to give new node created
 * Return: new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->right = NULL;

	if (parent->left != NULL)
	{
		parent->left->parent = new_node;
		new_node->left = parent->left;
	}
		new_node->parent = parent;
		parent->left = new_node;
		parent = new_node;
		return (new_node);
}
