#include <stdio.h>

void s_sort(double *a, double *b, double *c) ;

int main() {
	double x = 1.2,y = 6.3,z = 3.6;
	s_sort(&x, &y, &z);
	printf("%lf %lf %lf",x, y,z);
}


void s_sort(double *a, double *b, double *c) {
	double max,min,mid;
	max = *a;
	if (max < *b)
		max = *b;
	if (max < *c)
		max = *c;

	min = *a;
	if (min > *b)
		min = *b;
	if (min > *c)
		min = *c;
		
	if ((*a < *b && *a > *c )||( *a < *c && *a >*b))
	mid = *a ;
	else if ((*b > *c && *b < *a) || (*b >*a && *b <*c))
	mid = *b;
	else mid = *c;
	
	*a = max;
	*b = mid; 
	*c = min;

}
