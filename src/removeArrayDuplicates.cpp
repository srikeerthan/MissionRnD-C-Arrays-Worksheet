/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

INPUTS: Integer array and length of the array.

OUTPUT: Update input array by removing duplicate values.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>

void * removeArrayDuplicates(int *Arr, int len)
{
	int a[256] = { 0 }, i, j = 0, k, l;
	if (Arr == NULL||len<0)
		return NULL;
	for (i = 0; i < len; i++)
	{
		a[Arr[i]] = 1;
	}
	for (i = 0; i < 256; i++)
	{
		if (a[i] == 1)
		{
			Arr[j] = i;
			j++;
		}
	}
}