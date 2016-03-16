/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) 
{
	struct node *head = 0;
	if (N == 0)
	{
		head = (struct node *)malloc(sizeof(struct node));
		head->num = N;
		head->next = NULL;
		return head;
	}
	else if (N < 0)
		N = -N;
	int n = 0;
	while (N != 0)
	{
		n = 10 * n + N % 10;
		N /= 10;
	}
	

	
	while( n != 0)
	{
		struct node *newhead = (struct node*)malloc(sizeof(struct node));
		newhead->num = n % 10;
		n = n / 10;
		if (head == 0)
		{
			head = newhead;
			head->next = NULL;
		}
		else
		{
			struct node *trace = head;
			while (trace->next != NULL)
				trace = trace->next;
			trace->next = newhead;
			trace = trace->next;
			trace->next = NULL;
		}


	}
	return head;
}