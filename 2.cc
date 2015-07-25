#include "2.h"

int euler_2(){
	int before, during, after, total = 0;

	before = during = after = 1;

	while(after < 4000000)	{
		if(after%2 == 0){
			total += after;
		}

		during = after;

		after += before;

		before = during;
	}
	return total; // returns 4613732
}
