#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as the right child of another node
 * @parent: pointer to the node to insert to the right child
 * @value: value of newly created node
 * Return: pointer to newly created node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;


	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	parent->right = newNode;

	return (NULL);
}
