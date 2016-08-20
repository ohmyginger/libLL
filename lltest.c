#include <stdio.h>

int main()
{
	node_int *head = NULL;
	int input;
	
	printf("input an integer (0 to stop): ");
	scanf("%d", &input);
	if ( input )
		head->val = input;
	
	while ( input )
	{
		append_new_node(head)->val = input;
		printf("input an integer (0 to stop): ");
		scanf("%d", &input);
	}

	print_nodes(head);

	puts("now let's sort this shit");

	sort_nodes(&head);

	print_nodes(head);

	return 0;
}
