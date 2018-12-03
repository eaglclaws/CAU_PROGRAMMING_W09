#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "nodes.h"

int main()
{
	link head = NULL, new_node;
	char * value = (char*)malloc(sizeof(char)*10);
	char * userin;
	do
	{
		printf("Please enter an integer (^Z to exit) >> ");
		userin = gets_s(value, 10);
		//printf("%d", userin);
		if (userin != NULL)
		{
			new_node = create_node(atoi(value));
			head = append_node(head, new_node);
			//printf("%p\n", new_node);
		}
	} while (userin != NULL);
	//printf("%p", head);
	print_list(head);
	//printf("%d", lengthof(head));
	print_mid(head);
	print_odd(head);
	print_even(head);
	
	getchar();
	return 0;
}
