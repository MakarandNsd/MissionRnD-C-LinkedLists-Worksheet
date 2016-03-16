/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) 
{
	struct node *curr, *prev;
	curr = head;
	prev = head;
	int len=1;
	if (K == 1 || K<0 ||head==NULL||K==0)
		return NULL;
	if (K > len)
		return head;
	while (curr->next != NULL)
	{
		len++;
		curr = curr->next;
	}
	curr = head->next;
		int n=1;
		do   
		{
			curr = prev->next;
			if ((n + 1)%K ==0 )
				prev ->next = curr->next;
			prev = prev->next;
			n++;
		}while ((curr->next) != NULL);
		
		return head;
}