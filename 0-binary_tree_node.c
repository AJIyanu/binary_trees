#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_node - create a binary tree node
 * @parent: pointer to the parent node to create
 * @value: value to put into new node
 *
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *ptr = NULL;

    if (parent == NULL)
        ptr = parent;
    else if (parent->left == NULL)
        ptr = parent->left;
    else if (parent->right == NULL)
        ptr = parent->right;
    else
        return (NULL);

	printf("parent is null\n");
	ptr = malloc(sizeof(binary_tree_t));
	if (ptr == NULL)
		return (NULL);
	printf("malloc created succesful\n");
	ptr->n = value;
	ptr->left = NULL;
	ptr->right = NULL;
	}
	printf("Node Created\n");
	return (parent);

}
