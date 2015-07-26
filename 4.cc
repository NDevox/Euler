#include "4.h"
#include <string>

using namespace std;

int euler_4(){
	int temp, largest, i, j, x, y, is_pal;

	largest = 1;

	for(i=100; i <= 999; i++){

		for(j=i; j <= 999; j++){

			temp = i * j;

			if(temp > largest){

				string palindrome = to_string(temp);
				is_pal = 1;

				for(y = 0, x = palindrome.length()-1; x > y; x--, y++){
					if(palindrome[x] != palindrome[y]){
						is_pal = 0;
						break;
					}
				}
				if(is_pal == 1){
					largest = temp;
				}
			}
		}
	}
	return largest;
}
