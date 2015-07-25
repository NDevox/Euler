#include "3.h"
#include <cmath>
#include <iostream>
#include <vector>

double euler_3(){
	int i, j;
	long total;
	double limit;
	std::vector<int> sieve, primes;

	total = 600851475143;
	limit = std::sqrt(600851475143);

	for(i=2;i<(int)limit;i++){
		sieve.push_back(i);
    }

	i=0;
	while(i < sieve.size() + 1){

		if(sieve[i] == 0){
			i++;
			continue;
		}

		for(j=i + sieve[i]; j < sieve.size(); j += sieve[i]){
        	if(sieve[j] == 0){
        		continue;
        	}
        	else if(sieve[j] % sieve[i] == 0){
        		sieve[j] = 0;
        	}
        }
        i++;
	}

	for(i=0;i<sieve.size() + 1; i++){
		if(sieve[i] != 0){
			primes.push_back(sieve[i]);
		}
	}

	for(i=0; primes[i]<total; i++){
		while(total % primes[i] == 0){
			total = total/primes[i];
		}
	}

	return total;
}



