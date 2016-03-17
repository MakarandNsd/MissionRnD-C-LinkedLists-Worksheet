/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) 
{
	
	if (head != NULL && head != 0)
	{
		if (head->next == NULL)
			return head;
		struct node *data1, *data2;
		for (data1 = head; data1 != NULL; data1 = data1->next)
		{
			for (data2 = data1->next; data2 != NULL; data2 = data2->next)
			{
				if ((data1->num) > (data2->num))
				{
					int tmp = data1->num;
					data1->num = data2->num;
					data2->num = tmp;
				}
			}
		}
	return head;
	}
	else
	return NULL;
}