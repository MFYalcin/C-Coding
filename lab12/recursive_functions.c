//Muhammet Furkan Yalcin - 101233944
/* SYSC 2006 Lab 12. */

#include <stdio.h>
#include <math.h>
#include <assert.h>

#include "recursive_functions.h"

/* Return x raised to the power n for n >= 0. */
double power(double x, int n)
{
	if(n==0) {
		return 1;
	}
	

    return x * power(x,n-1);
}

/* Return the count of the number of times target occurs in the first 
 * n elements of array a.
 */
int count_in_array(int a[], int n, int target)
{
	if (n==0) {
		if (a[n-1]==target) {
			return 1;
		}
		else {
			return 0;
		}
	}
	if(a[n-1] ==target) {
		return 1+count_in_array(a,n-1,target);
	}
	else {
		return 0+count_in_array(a,n-1,target);
    }
}

/* Return the count of the number of times target occurs in the 
 * linked list pointed to by head. 
 */
int count_in_sll(node_t *head, int target)
{
	if(head->next == NULL) {
		if(head->data == target) {
			return 1;
		}
		else {
			return 0;
		}
	}
	if(head->data == target) {
		return 1+ count_in_sll(head->next, target);
	}
	else {
		return count_in_sll(head->next, target);
	}
}

/* Return the last element in the linked list pointed to by head.
 * Terminate (via assert) if the list is empty.
 */
int last_in_sll(node_t *head)
{
	assert(head != NULL);
	if(head->next == NULL) {
			return head->data;
		}
	return last_in_sll(head->next);
    return 0;
}

/* Extra-practice exercises. */

/* Return the number of digits in integer n, n >= 0. */
int num_digits(int n)
{
	if(n<10) {
		return 1;
	}
	return 1+ num_digits(n/10);
    
}

/* Return x raised to the power n for n >= 0. */
double power2(double x, int n)
{
	if(n==0) {
		return 1;
	}

    return x * power2(x,n-1);
}
