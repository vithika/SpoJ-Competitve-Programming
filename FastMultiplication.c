/*Multiply the given numbers.

Input
n [the number of multiplications <= 1000]

l1 l2 [numbers to multiply (at most 10000 decimal digits each)]

Text grouped in [ ] does not appear in the input file.

Output
The results of multiplications.*/
/*Does not works for very large numbers,due to overflow condition*/
#include <stdio.h>

int main(void) {
	// your code here
int testcases;
unsigned long long num1,num2,result;
scanf("%d",&testcases);
while(testcases--)
{
	scanf("%llu\t %llu",&num1,&num2);
	result=num1*num2;
	printf("%llu\n",result);
}
	return 0;
}
