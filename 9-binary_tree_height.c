#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of tree or NULL if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightl, heightr;

	if (tree == NULL)
		return (0);

	heightl = heightr = 0;

	heightl = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	heightr = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (heightl > heightr ? heightl : heightr);
}
