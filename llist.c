#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "llist.h"

/*
	Stand in doc
*/

node_short *append_new_node(node_short *head)
{
	node_short *new = (node_short *)malloc(sizeof(node_short));
	if ( !new )
		return NULL;
	if ( !head )
		return new;
	while ( head->next )
		head = head->next;
	head->next = new;
	new->next = NULL;
	new->val = 0;
	return new;
}

node_int *append_new_node(node_int *head)
{
	node_int *new = (node_int *)malloc(sizeof(node_int));
	if ( !new )
		return NULL;
	if ( !head )
		return new;
	while ( head->next )
		head = head->next;
	head->next = new;
	new->next = NULL;
	new->val = 0;
	return new;
}

node_long *append_new_node(node_long *head)
{
	node_long *new = (node_long *)malloc(sizeof(node_long));
	if ( !new )
		return NULL;
	if ( !head )
		return new;
	while ( head->next )
		head = head->next;
	head->next = new;
	new->next = NULL;
	new->val = 0;
	return new;
}

node_float *append_new_node(node_float *head)
{
	node_float *new = (node_float *)malloc(sizeof(node_float));
	if ( !new )
		return NULL;
	if ( !head )
		return new;
	while ( head->next )
		head = head->next;
	head->next = new;
	new->next = NULL;
	new->val = 0;
	return new;
}

node_double *append_new_node(node_double *head)
{
	node_double *new = (node_double *)malloc(sizeof(node_double));
	if ( !new )
		return NULL;
	if ( !head )
		return new;
	while ( head->next )
		head = head->next;
	head->next = new;
	new->next = NULL;
	new->val = 0;
	return new;
}

node_char *append_new_node(node_char *head)
{
	node_char *new = (node_char *)malloc(sizeof(node_char));
	if ( !new )
		return NULL;
	if ( !head )
		return new;
	while ( head->next )
		head = head->next;
	head->next = new;
	new->next = NULL;
	new->val = 0;
	return new;
}

node_str *append_new_node(node_str *head)
{
	node_str *new = (node_str *)malloc(sizeof(node_str));
	if ( !new )
		return NULL;
	if ( !head )
		return new;
	while ( head->next )
		head = head->next;
	head->next = new;
	new->next = NULL;
	new->val = 0;
	new->length = 0;
	return new;
}

node_str *append_new_node(node_str *head, char *val)
{
	node_str *new = (node_str *)malloc(sizeof(node_str));
	if ( !new )
		return NULL;
	if ( !head )
		return new;
	while ( head->next )
		head = head->next;
	head->next = new;
	new->next = NULL;
	new->val = val;
	new->length = strlen(s);
	return new;
}

node_str *append_new_node(node_str *head, char *val, size_t length)
{
	node_str *new = (node_str *)malloc(sizeof(node_str));
	if ( !new )
		return NULL;
	if ( !head )
		return new;
	while ( head->next )
		head = head->next;
	head->next = new;
	new->next = NULL;
	new->val = val;
	new->length = length;
	return new;
}

node_void *append_new_node(node_void *head)
{
	node_void *new = (node_void *)malloc(sizeof(node_void));
	if ( !new )
		return NULL;
	if ( !head )
		return new;
	while ( head->next )
		head = head->next;
	head->next = new;
	new->next = NULL;
	new->val = 0;
	new->length = 0;
	return new;
}

node_void *append_new_node(node_void *head, void *val, size_t length)
{
	node_void *new = (node_void *)malloc(sizeof(node_void));
	if ( !new )
		return NULL;
	if ( !head )
		return new;
	while ( head->next )
		head = head->next;
	head->next = new;
	new->next = NULL;
	new->val = val;
	new->length = length;
	return new;
}

/*
	Stand in doc
*/

void append_existing_node(node_short **head, node_short *n)
{
	node_short **pptr = head;

	while ( *pptr )
		pptr = &(*pptr)->next;

	*pptr = n;
}

void append_existing_node(node_int **head, node_int *n)
{
	node_int **pptr = head;

	while ( *pptr )
		pptr = &(*pptr)->next;

	*pptr = n;
}

void append_existing_node(node_long **head, node_long *n)
{
	node_long **pptr = head;

	while ( *pptr )
		pptr = &(*pptr)->next;

	*pptr = n;
}

void append_existing_node(node_float **head, node_float *n)
{
	node_float **pptr = head;

	while ( *pptr )
		pptr = &(*pptr)->next;

	*pptr = n;
}

void append_existing_node(node_double **head, node_double *n)
{
	node_double **pptr = head;

	while ( *pptr )
		pptr = &(*pptr)->next;

	*pptr = n;
}

void append_existing_node(node_char **head, node_char *n)
{
	node_char **pptr = head;

	while ( *pptr )
		pptr = &(*pptr)->next;

	*pptr = n;
}

void append_existing_node(node_str **head, node_str *n)
{
	node_str **pptr = head;

	while ( *pptr )
		pptr = &(*pptr)->next;

	*pptr = n;
}

void append_existing_node(node_void **head, node_void *n)
{
	node_void **pptr = head;

	while ( *pptr )
		pptr = &(*pptr)->next;

	*pptr = n;
}

/*
	Stand in doc
*/

node_short **_search_node_vals(node_short **head, short val)
{
	if ( !head )
		return NULL;

	node_short **pptr = head;

	while ( *pptr && (*pptr)->val != val )
		pptr = &(*pptr)->next;

	if ( !*pptr )
		return NULL;
	return pptr;
}

node_short **_search_node_vals(node_short **head, short val, int (*compare)(node_short*, short))
{
	if ( !head )
		return NULL;

	node_short **pptr = head;

	while ( *pptr && (*compare(*pptr, val)) )
		pptr = &(*pptr)->next;

	if ( !*pptr )
		return NULL;
	return pptr;
}

node_int **_search_node_vals(node_int **head, int val)
{
	if ( !head )
		return NULL;

	node_int **pptr = head;

	while ( *pptr && (*pptr)->val != val )
		pptr = &(*pptr)->next;

	if ( !*pptr )
		return NULL;
	return pptr;
}

node_int **_search_node_vals(node_int **head, int val, int (*compare)(node_int*, int))
{
	if ( !head )
		return NULL;

	node_int **pptr = head;

	while ( *pptr && !(*compare(*pptr, val)) )
		pptr = &(*pptr)->next;

	if ( !*pptr )
		return NULL;
	return pptr;
}

node_long **_search_node_vals(node_long **head, long val)
{
	if ( !head )
		return NULL;

	node_long **pptr = head;

	while ( *pptr && (*pptr)->val != val )
		pptr = &(*pptr)->next;

	if ( !*pptr )
		return NULL;
	return pptr;
}

node_long **_search_node_vals(node_long **head, long val, int (*compare)(node_long*, long))
{
	if ( !head )
		return NULL;

	node_long **pptr = head;

	while ( *pptr && !(*compare(*pptr, val)) )
		pptr = &(*pptr)->next;

	if ( !*pptr )
		return NULL;
	return pptr;
}

node_float **_search_node_vals(node_float **head, float val)
{
	if ( !head )
		return NULL;

	node_float **pptr = head;

	while ( *pptr && (*pptr)->val != val )
		pptr = &(*pptr)->next;

	if ( !*pptr )
		return NULL;
	return pptr;
}

node_float **_search_node_vals(node_float **head, float val, int (*compare)(node_float*, float))
{
	if ( !head )
		return NULL;

	node_float **pptr = head;

	while ( *pptr && !(*compare(*pptr, val)) )
		pptr = &(*pptr)->next;

	if ( !*pptr )
		return NULL;
	return pptr;
}

node_double **_search_node_vals(node_double **head, double val)
{
	if ( !head )
		return NULL;

	node_double **pptr = head;

	while ( *pptr && (*pptr)->val != val )
		pptr = &(*pptr)->next;

	if ( !*pptr )
		return NULL;
	return pptr;
}

node_double **_search_node_vals(node_double **head, double val, int (*compare)(node_double*, double))
{
	if ( !head )
		return NULL;

	node_double **pptr = head;

	while ( *pptr && !(*compare(*pptr, val)) )
		pptr = &(*pptr)->next;

	if ( !*pptr )
		return NULL;
	return pptr;
}

node_char **_search_node_vals(node_char **head, char val)
{
	if ( !head )
		return NULL;

	node_char **pptr = head;

	while ( *pptr && (*pptr)->val != val )
		pptr = &(*pptr)->next;

	if ( !*pptr )
		return NULL;
	return pptr;
}

node_char **_search_node_vals(node_char **head, char val, int (*compare)(node_char*, char))
{
	if ( !head )
		return NULL;

	node_char **pptr = head;

	while ( *pptr && !(*compare(*pptr, val)) )
		pptr = &(*pptr)->next;

	if ( !*pptr )
		return NULL;
	return pptr;
}

node_str **_search_node_vals(node_str **head, char *val)
{
	if ( !head )
		return NULL;

	node_str **pptr = head;

	while ( *pptr && strcmp((*pptr)->val, val) )
		pptr = &(*pptr)->next;

	if ( !*pptr )
		return NULL;
	return pptr;
}

node_str **_search_node_vals(node_str **head, char *val, int (*compare)(node_str*, char*))
{
	if ( !head )
		return NULL;

	node_str **pptr = head;

	while ( *pptr && !(*compare(*pptr, val)) )
		pptr = &(*pptr)->next;

	if ( !*pptr )
		return NULL;
	return pptr;
}

node_str **_search_node_vals(node_str **head, char *val, size_t length, int (*compare)(node_str*, char*, size_t))
{
	if ( !head )
		return NULL;

	node_str **pptr = head;

	while ( *pptr && !(*compare(*pptr, val, length)) )
		pptr = &(*pptr)->next;

	if ( !*pptr )
		return NULL;
	return pptr;
}

node_void **_search_node_vals(node_void **head, void *val, size_t length)
{
	if ( !head )
		return NULL;

	node_void **pptr = head;

	while ( *pptr && strncmp((*pptr)->val, val, length < (*pptr)->length? length: (*pptr)->length) )
	{
		pptr = &(*pptr)->next;
	}

	if ( !*pptr )
		return NULL;
	return pptr;
}

node_void **_search_node_vals(node_void **head, void *val, size_t length, int (*compare)(node_void*, void*, size_t))
{
	if ( !head )
		return NULL;

	node_void **pptr = head;

	while ( *pptr && !(*compare(*pptr, val, length)) )
	{
		pptr = &(*pptr)->next;
	}

	if ( !*pptr )
		return NULL;
	return pptr;
}

/*
	Stand in doc
*/

node_short *pop_by_val(node_short **head, short val)
{
	node_short **pptr = _search_node_vals(head, val);
	if ( !pptr )
		return NULL;
	//point popped to the next node
	node_short *popped = *pptr;
	//point this node's next to the node after popped
	*pptr = popped->next;
	return popped;
}

node_int *pop_by_val(node_int **head, int val)
{
	node_int **pptr = _search_node_vals(head, val);
	if ( !pptr )
		return NULL;
	//point popped to the next node
	node_int *popped = *pptr;
	//point this node's next to the node after popped
	*pptr = popped->next;
	return popped;
}

node_long *pop_by_val(node_long **head, long val)
{
	node_long **pptr = _search_node_vals(head, val);
	if ( !pptr )
		return NULL;
	//point popped to the next node
	node_long *popped = *pptr;
	//point this node's next to the node after popped
	*pptr = popped->next;
	return popped;
}

node_char *pop_by_val(node_char **head, char val)
{
	node_char **pptr = _search_node_vals(head, val);
	if ( !pptr )
		return NULL;
	//point popped to the next node
	node_int *popped = *pptr;
	//point this node's next to the node after popped
	*pptr = popped->next;
	return popped;
}

node_str *pop_by_val(node_str **head, char *val, size_t length)
{
	node_str **pptr = _search_node_vals(head, val, length);
	if ( !pptr )
		return NULL;
	//point popped to the next node
	node_str *popped = *pptr;
	//point this node's next to the node after popped
	*pptr = popped->next;
	return popped;
}

node_void *pop_by_val(node_int **head, void *val, size_t length)
{
	node_void **pptr = _search_node_vals(head, val, length);
	if ( !pptr )
		return NULL;
	//point popped to the next node
	node_void *popped = *pptr;
	//point this node's next to the node after popped
	*pptr = popped->next;
	return popped;
}

/*
	Stand in doc 
*/

node_int *pop_node(node_int **head, node_int *n)
{
	node_int **pptr = head;
	
	while ( *pptr != n )
		pptr = (*pptr)->next;

	node_int *popped = *pptr;
	*pptr = *pptr->next;
	return popped;
}

node_int *pop_node(node_int **head, node_int *n)
{
	node_int **pptr = head;
	
	while ( *pptr != n )
		pptr = (*pptr)->next;

	node_int *popped = *pptr;
	*pptr = *pptr->next;
	return popped;
}

node_int *pop_node(node_int **head, node_int *n)
{
	node_int **pptr = head;
	
	while ( *pptr != n )
		pptr = (*pptr)->next;

	node_int *popped = *pptr;
	*pptr = *pptr->next;
	return popped;
}

node_int *pop_node(node_int **head, node_int *n)
{
	node_int **pptr = head;
	
	while ( *pptr != n )
		pptr = (*pptr)->next;

	node_int *popped = *pptr;
	*pptr = *pptr->next;
	return popped;
}

node_int *pop_node(node_int **head, node_int *n)
{
	node_int **pptr = head;
	
	while ( *pptr != n )
		pptr = (*pptr)->next;

	node_int *popped = *pptr;
	*pptr = *pptr->next;
	return popped;
}

node_int *pop_node(node_int **head, node_int *n)
{
	node_int **pptr = head;
	
	while ( *pptr != n )
		pptr = (*pptr)->next;

	node_int *popped = *pptr;
	*pptr = *pptr->next;
	return popped;
}

/*
	Stand in doc
*/

void insert_after_val(node_int **head, node_int *n, int val)
{
	node_int **pptr = _search_node_vals(head, val);

	n->next = *pptr;
	*pptr = n;
}

void insert_after_node(node_int *before, node_int *to_insert)
{
	to_insert->next = before->next;
	before->next = to_insert;
}

/*
	Stand in doc
*/

void walk_n_insert(node_int *head, node_int *n, int steps)
{
	if ( !head || !n )
		return;

	while ( head->next && steps )
	{
		head = head->next;
		steps--;
	}

	n->next = head->next;
	head->next = n;
}

void walk_n_insert(node_int *head, node_int *n, int steps)
{
	if ( !head || !n )
		return;

	while ( head->next && steps )
	{
		head = head->next;
		steps--;
	}

	n->next = head->next;
	head->next = n;
}

void walk_n_insert(node_int *head, node_int *n, int steps)
{
	if ( !head || !n )
		return;

	while ( head->next && steps )
	{
		head = head->next;
		steps--;
	}

	n->next = head->next;
	head->next = n;
}

void walk_n_insert(node_int *head, node_int *n, int steps)
{
	if ( !head || !n )
		return;

	while ( head->next && steps )
	{
		head = head->next;
		steps--;
	}

	n->next = head->next;
	head->next = n;
}

void walk_n_insert(node_int *head, node_int *n, int steps)
{
	if ( !head || !n )
		return;

	while ( head->next && steps )
	{
		head = head->next;
		steps--;
	}

	n->next = head->next;
	head->next = n;
}

void walk_n_insert(node_int *head, node_int *n, int steps)
{
	if ( !head || !n )
		return;

	while ( head->next && steps )
	{
		head = head->next;
		steps--;
	}

	n->next = head->next;
	head->next = n;
}

/*
	Stand in doc
*/

void print_nodes(node_int *n)
{
	count = 0;
	while ( n )
	{
		printf("node %d: %d\n", count n->val);
		n = n->next;
	}
}

void print_nodes(node_int *n)
{
	count = 0;
	while ( n )
	{
		printf("node %d: %d\n", count n->val);
		n = n->next;
	}
}

void print_nodes(node_int *n)
{
	count = 0;
	while ( n )
	{
		printf("node %d: %d\n", count n->val);
		n = n->next;
	}
}

void print_nodes(node_int *n)
{
	count = 0;
	while ( n )
	{
		printf("node %d: %d\n", count n->val);
		n = n->next;
	}
}

void print_nodes(node_int *n)
{
	count = 0;
	while ( n )
	{
		printf("node %d: %d\n", count n->val);
		n = n->next;
	}
}

void print_nodes(node_int *n)
{
	count = 0;
	while ( n )
	{
		printf("node %d: %d\n", count n->val);
		n = n->next;
	}
}

void print_nodes(node_int *n)
{
	count = 0;
	while ( n )
	{
		printf("node %d: %d\n", count n->val);
		n = n->next;
	}
}

void print_nodes(node_int *n)
{
	count = 0;
	while ( n )
	{
		printf("node %d: %d\n", count n->val);
		n = n->next;
	}
}

void sort_nodes(node_int **head)
{
	node_int **pptr = head;
	node_int *last = *head;
	node_int *maxval, *minval;
	int length = 0;

	while (*last) length++, last = last->next;

	while ( *pptr && *pptr->next )
	{
		if ( *pptr->val >= *pptr->next->val && *pptr != last )
		{
			last = *pptr->next;
			append_existing_node(pptr, *pptr);
		}
		else
			pptr = &(*pptr)->next;
}

void delfrom(node_int *head)
{
	node_int *n;
	while(head)
	{
		n = head;
		head = head->next;
		free(n);
	}
}
