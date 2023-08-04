#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at lease 1 child in a binary tree
 * @tree: pointer to the root node
 * Return: number of nodes or 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node;

	if (tree == NULL)
		return (0);

	node = 0;

	node += binary_tree_nodes(tree->left);
	node += binary_tree_nodes(tree->right);
	if (tree->left || tree->right)
		node++;

	return (node);
}
