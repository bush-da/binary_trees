#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: parent node for node that will be created
 * @value: value that will be inserted into newly created node
 * Return: pointer to node of NULL if failes to create
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = newNode->right = NULL;

	return (newNode);
}
