#include "55.h"
#include <stdio.h>
using namespace std;

int euler_55(){

    int i, j, total;
    long current_num, rev_num, transfer_num;

    total = 0;

    for(i = 1; i < 10001; i++){
    	current_num = i;

    	for(j = 0; j < 50; j++){
    		transfer_num = current_num;
    		rev_num = 0;
    		while(transfer_num !=0){
    			rev_num *= 10;
    			rev_num += transfer_num % 10;
    			transfer_num /= 10;
    		}

		if(current_num == rev_num and j != 0){
    			break;
    		}else if(j == 49){
			printf("%i\n", i);
    			total += 1;
    		}else{
    			current_num += rev_num;
    		}
    	}
    }


	return total;
}
