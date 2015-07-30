#include <stdio.h>
#include "1.h"
#include "2.h"
#include "3.h"
#include "4.h"
#include "5.h"
#include "6.h"
#include "7.h"
#include "8.h"
#include "9.h"
#include "10.h"

int main(){
	printf("The result of Euler 1 is: %i\n", euler_1());
	printf("The result of Euler 2 is: %i\n", euler_2());
	printf("The result of Euler 3 is: %i\n", euler_3());
	printf("The result of Euler 4 is: %i\n", euler_4());
	printf("The result of Euler 5 is: %i\n", euler_5());
	printf("The result of Euler 6 is: %i\n", euler_6());
	printf("The result of Euler 7 is: %i\n", euler_7());
	printf("The result of Euler 8 is: %ld\n", euler_8()); // requires to print long as number is too big for an int.
	printf("The result of Euler 9 is: %i\n", euler_9());
	printf("The result of Euler 10 is: %ld\n", euler_10());
}
