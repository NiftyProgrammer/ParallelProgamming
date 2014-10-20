#include <stdio.h>
#include "fraction.h"


void main(int argc, char *argv[])
{
	if ( argc != 2 )
	{
		printf( "Incorrect argument supplied for program %s.", argv[0] );
	}
	else
	{
		/*
		 * Part d
		 */
		int i;
		int size = atoi(argv[1]);
		if(size < 1)
		{
			fprintf(stderr, "\n%s: Envalid entered number argument %s.", argv[0], argv[1]);
			return;
		}


		/*
		 * Part e
		 */
		struct fraction *array = malloc( size * sizeof(struct fraction) );

		for(i=1; i<=size; i++)
		{
			array[i-1].numerator = 1;
			array[i-1].denominator = (i * (i+1));
		}

		fraction_array_print(array, size);


		/*
		 * Part g
		 */
		struct fraction sum = fraction_sum(array, size);
		printf("\n\nArray Sum in fraction: %d / %d \nArray Sum in real number: %f",
				sum.numerator, sum.denominator, fraction2double(sum));

		struct fraction square = square_fraction(sum);
		printf("\n\nSquare of  %d / %d  is:  %d / %d", sum.numerator, sum.denominator,
				square.numerator, square.denominator);

		free(array);
	}


}
