#include "5.h"


int euler_5(){
	int start, i, multiple, divisors[10] = {11,12,13,14,15,16,17,18,19,20};
	start = 2520;
	multiple = 0;

	while(!multiple){
		multiple = 1;

		for(i=0; i<10; i++){
			if(start % divisors[i] != 0){
				multiple = 0;
				break;
			}
		}
		start += 20;
	}
	return start;
}
