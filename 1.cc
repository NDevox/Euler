#include "1.h"

int euler_1(){
	int result = 0;
	int i;

	for(i=0; i<1000; i++)	{
		if(i%3 == 0 || i%5 == 0){
			result += i;
		}
	}

	return result;
}
