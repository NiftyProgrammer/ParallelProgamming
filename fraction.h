#ifndef FRACTION_H_
#define FRACTION_H_

/*
 * Part a
 */
struct fraction
{
	int numerator;
	int denominator;
};


/*
 * Part i
 */
struct fraction square_fraction(struct fraction a);
struct fraction square_fraction_inplace(struct fraction *a);
double fraction2double(struct fraction a);
struct fraction fraction_sum(struct fraction *array, int size);
void fraction_array_print(struct fraction *array, int size);



#endif /* FRACTION_H_ */
