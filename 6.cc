#include "6.h"
#include <math.h>

int euler_6(){
	int sq_sum, sum_sq, i;
	sq_sum = sum_sq = 0;

	for(i=1;i<101;i++){
		sq_sum += pow(i, 2);
		sum_sq += i;
	}
	sum_sq *= sum_sq;

	return sum_sq - sq_sum;
}
