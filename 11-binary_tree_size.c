#include "binary_trees.h"

/**
 * count_me - count the number of node in the tree
 * @tree: starting node for a tree to count
 * Return: the size of the tree
 */

size_t count_me(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (tree->left ? 1 + count_me(tree->left) : 1 + count_me(tree->right));
}


/**
 * binary_tree_size - measure the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: if tree is NULL return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t size = 1;

		size += count_me(tree->left);
		size += count_me(tree->right);

		return (size);
	}

	return (0);

}
