#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stddef.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

typedef struct link_s
{
	size_t n;
	struct binary_tree_s const *node;
	struct link_s *next;
} link_t;
typedef struct binary_tree_s binary_tree_t;

/* print binary tree */
void binary_tree_print(const binary_tree_t *tree);

/* create binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* insert node as left child of other node */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* insert node as right child of other node */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* deletes entire binary tree */
void binary_tree_delete(binary_tree_t *tree);

/* checks if a node is a leaf */
int binary_tree_is_leaf(const binary_tree_t *node);

/* checks if a node is a root */
int binary_tree_is_root(const binary_tree_t *node);

/* goes through binary tree using pre-order traversal */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/* goes through binary tree using in-order traversal */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* goes through binary tree using post-order traversal */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* measures the height of a binary tree */
size_t binary_tree_height(const binary_tree_t *tree);

/* measures the depth of a node in a binary tree */
size_t binary_tree_depth(const binary_tree_t *tree);

/* measures the size of a binary tree */
size_t binary_tree_size(const binary_tree_t *tree);

/* counts the leaves in a binary tree */
size_t binary_tree_leaves(const binary_tree_t *tree);

/* counts the nodes with at least one child */
size_t binary_tree_nodes(const binary_tree_t *tree);

/* measures the balance factor */
int binary_tree_balance(const binary_tree_t *tree);

/* checks if binary tree is full */
int binary_tree_is_full(const binary_tree_t *tree);

/* checks if binary tree is perfect */
int binary_tree_is_perfect(const binary_tree_t *tree);

/* finds the sibling of a node */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/* finds the uncle of a node */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second);
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
int binary_tree_is_complete(const binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);
int binary_tree_is_bst(const binary_tree_t *tree);
bst_t *bst_insert(bst_t **tree, int value);
bst_t *array_to_bst(int *array, size_t size);
bst_t *bst_search(const bst_t *tree, int value);
bst_t *bst_remove(bst_t *root, int value);
int binary_tree_is_avl(const binary_tree_t *tree);
avl_t *avl_insert(avl_t **tree, int value);
avl_t *array_to_avl(int *array, size_t size);
avl_t *avl_remove(avl_t *root, int value);
avl_t *sorted_array_to_avl(int *array, size_t size);
int binary_tree_is_heap(const binary_tree_t *tree);
heap_t *heap_insert(heap_t **root, int value);
heap_t *array_to_heap(int *array, size_t size);
int heap_extract(heap_t **root);
int *heap_to_sorted_array(heap_t *heap, size_t *size);


#endif /* _BINARY_TREES_H_ */
