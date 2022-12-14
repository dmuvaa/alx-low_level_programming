#include<stdio.h>
#include<stdlib.h>
/**
*main- Entry point
*return: always return to zero
**/
int main (void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	return(0);
}
