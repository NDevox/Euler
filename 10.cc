#include "10.h"
#include <vector>

using namespace std;

long euler_10(){
	vector<int> sieve, primes;
	long total = 0;

	for(int i=2; i<2000000;i++){
		sieve.push_back(i);
	}

	for(int i=0; i < sieve.size();i++){
		if(sieve[i] != 0){
			for(int j = i + sieve[i]; j < sieve.size(); j += sieve[i]){
				if(sieve[j] != 0){
					sieve[j] = 0;
				}
			}
		}
	}

	for(int i=0; i < sieve.size(); i++){
		if(sieve[i] != 0){
			total += sieve[i];
		}
	}
	return total;
}

