#include "7.h"
#include <stdio.h>
#include <vector>

using namespace std;

int euler_7(){
	int i, j, limit;
	vector<int> sieve, primes;

	limit = 200000;

	for(i=2; i<limit; i++){
		sieve.push_back(i);
    }

	for(i=0; i < limit; i++){

        if(sieve[i] == 0){
			continue;
		} else{
			for(j=i + sieve[i]; j < limit; j += sieve[i]){
			    if(sieve[j] == 0){
			    	continue;
			   	} else if(sieve[j] % sieve[i] == 0){
			   		sieve[j] = 0;
			   	}
			}
		}
	}

	i=0;

	while(primes.size() < 10001){
		if(sieve[i] != 0){
			primes.push_back(sieve[i]);
		}
		i++;
	}

	return primes.back();
}
