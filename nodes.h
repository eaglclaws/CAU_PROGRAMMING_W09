#ifndef NODES_H
#define NODES_H

struct node
{
	int value;
	struct node* next;
};

typedef struct node node;
typedef node* link;

link create_node(int value);
link append_node(link head, link cur);
int lengthof(link head);
void print_list(link head);
void print_mid(link head);
link cut_odd(link head);
void print_back(link head, int level);

#endif
