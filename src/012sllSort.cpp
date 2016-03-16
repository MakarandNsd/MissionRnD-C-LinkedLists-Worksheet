/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head)
{
	struct node *dat;
	int zero = 0, one = 0, two = 0;
	for (dat = head; ((dat->next) != NULL); dat = dat->next)
			{
				if (dat->data == 0)
					zero++;
				else if (dat->data == 1)
					one++;
				else
					two++;
			}
	if (dat->data == 0)
		zero++;
	else if (dat->data == 1)
		one++;
	else
		two++;
	for (dat = head; ((dat->next) != NULL); dat = dat->next)
			{
				if (zero != 0)
				{
					dat->data = 0;
					zero--;
				}
				else if (one != 0)
				{
					dat->data = 1;
					one--;
				}
				else
				{
					dat->data = 2;
					two--;
				}
			}
	if (two)
	dat->data = 2;
	return;

}