/*
	Copyright 2016 Nathan Cowart

	    This file is part of LibLL

	    LibLL is free software: you can redistribute it and/or modify
    it under the terms of the Affero GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

      LibLL is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

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
