/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

int linkedListMedian(struct node *head) {
	int i, sum = 0, n = 0, median;
	struct node*temp;
	temp = head;
	if (head != NULL){
		while (temp != NULL){
			n++;
			temp = temp->next;
		}
		temp = head;
		if (n % 2 != 0){
			n = (n / 2)+1;
			while (n > 1){
				temp = temp->next;
				n--;
			}
			median = temp->num;
		}
		else	if (n % 2 == 0){
			n = n / 2;
			while (n > 1){
				temp = temp->next;
				n--;
			}
			median = (temp->num+temp->next->num)/2;
		}
		return median;
	}
	return -1;
}
