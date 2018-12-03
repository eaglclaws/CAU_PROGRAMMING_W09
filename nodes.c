#include "nodes.h"
#include <stdlib.h>
#include <stdio.h>

link create_node(int value)
{
	link new_node = (link)malloc(sizeof(node));
	new_node->value = value;
	new_node->next = NULL;
	return new_node;
}
link append_node(link head, link new_node)
{
	link cur = head;
	if (!head)
	{
		head = new_node;
		return head;
	}
	while (cur->next != NULL)
	{
		cur = cur->next;
	}
	cur->next = new_node;
	return head;
}
int lengthof(link head)
{
	link cur = head;
	int length = 0;
	while (cur != NULL)
	{
		length++;
		cur = cur->next;
	}
	return length;
}
void print_list(link head)
{
	link cur = head;
	printf("( ");
	while (cur)
	{
		printf("%d ", cur->value);
		cur = cur->next;
	}
	printf(")\n");
}
void print_mid(link head)
{
	link cur = head;
	for (int place = 0; place < lengthof(head)/2; place++)
	{
		cur = cur->next;
	}
	printf("( %d )\n", cur->value);
}
link cut_odd(link head)
{
	head = head->next;
	link cur = head;
	while (cur)
	{
		cur->next = cur->next != NULL ? cur->next->next : NULL;
		cur = cur->next;
	}
	return head;
}
void print_back(link head, int level)
{
	if (head == NULL)
	{
		printf("( ");
		return;
	}
	print_back(head->next, level+1);
	printf("%d ", head->value);
	if (level == 0) printf(")\n");
}
