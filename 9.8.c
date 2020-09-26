// power.c -- raises numbers to integer powers
#include <stdio.h>
double power(double n, int p); // ANSI prototype
int main(void) {
	double x, xpow, exp;
	printf("Enter a number and the positive integer power");
	printf(" to which\nthe number will be raised. Enter q");
	printf(" to quit.\n");
	while (scanf("%lf %lf", &x, &exp) == 2) {
		if (x ==0 && exp ==0)
			printf("undefined!!\n");
		else {
			xpow = power(x,exp); // function call
			printf("%.3g to the power %g is %.5g\n", x, exp, xpow);
		}

		printf("Enter next pair of numbers or q to quit.\n");

	}
	printf("Hope you enjoyed this power trip -- bye!\n");
	return 0;
}
double power(double n, int p) {
// handle negative numbers

//0 to any pow is 0
//any to 0 is 1
//0 to 0 undefined
	double pow ;
	pow = 1;
	int i;
	if (p > 0) {
		for (i = 0; i < p; i++)
			pow *= n;
	}

	else if (p < 0) {
		for (i = 0; i > p; i--)
			pow *= n;
		pow = 1 / pow;
	} else pow = 1;
	
	return pow; // return the value of pow
}
