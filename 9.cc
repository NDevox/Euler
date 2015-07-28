#include "9.h"
#include <cmath>

using namespace std;

int euler_9(){
	int a, b, c, target=1000;
	a = 1;
	b = 2;
	c = 3;
	for(a=1; a < 998; a++){
		for(b = a + 1; b < 999 ; b++){
			for(c = b + 1; c < 1000; c++){
				if(a+b+c > 1000){
					continue;
				}else{
					if(pow(a,2) + pow(b,2) == pow(c,2)){
						if(a+b+c == 1000){
							return a*b*c;
						}
					}
				}

			}
		}
	}

	return 0;

}



