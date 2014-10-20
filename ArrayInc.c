/*
 * ArrayInc.c
 *
 *  Created on: Oct 20, 2014
 *      Author: Umair
 */


#include <stdlib.h>
#include <stdio.h>

void print_array(int* array, unsigned N)
{
	unsigned i;
	for(i=1; i<=N; i++)
		printf("Element %d: %d\n" , i , array [ i ]) ;
}
void inc_array(int* array, unsigned N)
{
	while(N--)
		++(*array++);
}
int main ()
{
	const unsigned N = 42;
	unsigned i;

	//int* vec1 = malloc( N );					part b
	int* vec1 = malloc(N * sizeof(int));

	for(i=1; i<=N; i++)
		vec1[ i ] = i ;

	print_array (vec1 , N) ;

	//int* vec2 = malloc ( N ) ;				part b
	int *vec2 = malloc ( N * sizeof(int) ) ;

	vec2 = vec1 ;

	free (vec1) ;

	inc_array (vec2 , N) ;
	print_array (vec2 , N) ;
	free (vec2) ;
	return 0;
}


/*
 * Task 2:
 *
 * Part a:
 * The use of malloc is not used as required. malloc use to allocate memory in-terms of bytes but
 * after that it is used to allocate for integer which consist of 2 or 4 bytes for single variable.
 * So it almost create 21 of integer array. But we tried to access 41 of integer values.
 *
 */
