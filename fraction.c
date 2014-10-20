#include "fraction.h"

/*
 * Part b
 */
struct fraction square_fraction(struct fraction a)
{
	struct fraction temp;
	temp.numerator = a.numerator * a.numerator;
	temp.denominator = a.denominator * a.denominator;
	return temp;
}
/*
 * Part b
 */
struct fraction square_fraction_inplace(struct fraction *a)
{
	a->numerator = a->numerator * a->numerator;
	a->denominator = a->denominator * a->denominator;
	return *a;
}


/*
 * Part c
 */
double fraction2double(struct fraction a)
{
	return ((double) ((a.numerator != 0) ? (a.numerator / (float)a.denominator) : 0));
}


/*
 * Part f
 */
struct fraction fraction_sum(struct fraction *array, int size)
{
	struct fraction sum;
	int i;

	sum.numerator = array[0].numerator;
	sum.denominator = array[0].denominator;

	for(i=1; i<size; i++)
	{
		sum.numerator = sum.numerator * array[i].denominator + sum.denominator * array[i].numerator;
		sum.denominator = sum.denominator * array[i].denominator;
	}

	return sum;
}

/*
 * Part h:
 *
 * As the method mostly used to calculate fraction sum with out factrizing it,
 * the values of numerator and denominator increases really fast making it to
 * extend the size of integer. With which we get undefined values as result.
 *
 */



void fraction_array_print(struct fraction *array, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("\n%d / %d", array[i].numerator, array[i].denominator);
	}
}
