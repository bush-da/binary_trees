#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as the left child of another node
 * @parent: pointer to the node to insert to the left child
 * @value: value of newly created node
 * Return: pointer to newly created node or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL || parent == NULL)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;
	newNode->right = NULL;
	newNode->left = NULL;
	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
		parent->left = newNode;
		return (newNode);
	}
	parent->left = newNode;

	return (NULL);
}
