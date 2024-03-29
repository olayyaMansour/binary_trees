#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If the tree is perfect - 1.
 *         Otherwise - 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth = 0, size = 0, perfect_size = 0;

	if (tree == NULL)
		return (0);

	depth = binary_tree_height(tree);
	size = binary_tree_size(tree);
	perfect_size = (1 << (depth + 1)) - 1;

	return (size == perfect_size);
}
