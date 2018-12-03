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
		}
	} while (userin != NULL);

	printf("순서대로 : "); print_list(head);
	printf("자료의 개수 : "); printf("%d\n", lengthof(head));
	printf("중간 위치에 있는 자료의 값 : "); print_mid(head);
	printf("입력 역순 : "); print_back(head, 0);
	printf("홀수번째 삭제\n"); head = cut_odd(head);
	printf("남은 자료 출력 : "); print_list(head);
	
	return 0;
}
