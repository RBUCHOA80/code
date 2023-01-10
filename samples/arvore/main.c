#include <stdio.h>
#include <stdlib.h>

typedef struct s_list {
	int nbr;
	struct s_list *left;
	struct s_list *right;
} t_list;

void push(t_list **root, int nbr)
{
	if ((*root) == NULL)
	{
		(*root) = (t_list*)malloc(sizeof(t_list));
		(*root)->nbr = nbr;
		(*root)->left = NULL;
		(*root)->right = NULL;
	}
	else
	{
		if (nbr < (*root)->nbr)
			push(&(*root)->left, nbr);
		else
			push(&(*root)->right, nbr);
	}
}

void swap(t_list **root, int nbr)
{
	t_list *temp;

	if (*root == NULL)
		return;
	if ((*root)->nbr == nbr)
	{
		temp = (*root)->left;
		(*root)->left = (*root)->right;
		(*root)->right = temp;
	}
	else
	{
		swap(&(*root)->left, nbr);
		swap(&(*root)->right, nbr);
	}
}

void inOrder(t_list *root)
{
	if (root == NULL)
		return;
	inOrder(root->left);
	inOrder(root->right);
	printf("%d ", root->nbr);
}

int main(int argc, char **argv)
{
	t_list *root = NULL;

	while (*++argv)
		push(&root, atoi(*argv));

	printf("Before swap: \n");
	// print tree in-order
	// expected output: 1 3 4 5 6 7 8
	// this should print the values in ascending order
	inOrder(root);

	swap(&root, 5);

	printf("\nAfter swap: \n");
	// print tree in-order
	// expected output: 1 4 3 8 7 6 5
	// this should print the values in ascending order, with the children of the node with value 5 swapped
	inOrder(root);

	return 0;
}