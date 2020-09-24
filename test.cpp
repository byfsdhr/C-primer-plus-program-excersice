#include <stdio.h>


int main() {
	char ch;
	float firstNum = 0.0 , secondNum = 0.0;


	printf("Enter the operation of your choice:\n"
	       "a. add 			s. subtract\n"
	       "m. multiply		d. divide\n"
	       "q. quit\n");
	while((ch = getchar()) != 'q') {
		while (getchar() != '\n')
			continue;
		switch(ch) {
			case 'a':
				printf("Enter first number:");

				while(scanf("%f",&firstNum) == 0) {
					while ((ch = getchar()) != '\n')
						putchar(ch);
					printf(" is not a number.\n");
				}

				printf("Enter second number:");
				while((scanf("%f",&secondNum))!= 1) {

					while ((ch = getchar()) != '\n')
						putchar(ch);
					printf(" is not a number.\n");

				}
				printf("%.2f + %.2f = %.2f\n",firstNum,secondNum,firstNum+secondNum );
				break;

			case 's':
				printf("Enter first number:");

				while(scanf("%f",&firstNum) == 0) {
					while ((ch = getchar()) != '\n')
						putchar(ch);
					printf(" is not a number.\n");
				}

				printf("Enter second number:");
				while((scanf("%f",&secondNum))!= 1) {

					while ((ch = getchar()) != '\n')
						putchar(ch);
					printf(" is not a number.\n");

				}
				printf("%.2f - %.2f = %.2f\n",firstNum,secondNum,firstNum-secondNum );
				break;
			case 'm':
				printf("Enter first number:");

				while(scanf("%f",&firstNum) == 0) {
					while ((ch = getchar()) != '\n')
						putchar(ch);
					printf(" is not a number.\n");
				}

				printf("Enter second number:");
				while((scanf("%f",&secondNum))!= 1) {

					while ((ch = getchar()) != '\n')
						putchar(ch);
					printf(" is not a number.\n");

				}
				printf("%.2f * %.2f = %.2f\n",firstNum,secondNum,firstNum*secondNum );
				break;
			case 'd':
				printf("Enter first number:");

				while(scanf("%f",&firstNum) == 0) {
					while ((ch = getchar()) != '\n')
						putchar(ch);
					printf(" is not a number.\n");
				}

				printf("Enter second number:");
				while((scanf("%f",&secondNum))!= 1) {

					while ((ch = getchar()) != '\n')
						putchar(ch);
					printf(" is not a number.\n");

				}
				printf("%.2f / %.2f = %.2f\n",firstNum,secondNum,firstNum/secondNum );
				break;


			default:
				printf("WRONG!!!enter a,s,m,d\n");
				break;

		}
		printf("Enter the operation of your choice:\n"
		       "a. add 			s. subtract\n"
		       "m. multiply		d. divide\n"
		       "q. quit\n");
		while (getchar() != '\n')
			continue;
	}
	printf("Bye,have a good day!");

}

