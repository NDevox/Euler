#include <stdio.h>

int main()
{
	int result = 0;
	int i;

	for(i=0; i<1000; i++)
	{
		if(i%3 == 0 || i%5 == 0)
		{
			result += i;
		}
	}

	printf("The total is: %d", result); // returns 233168
}
