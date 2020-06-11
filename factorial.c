/*Input
There is a single positive integer T on the first line of input (equal to about 100000). It stands for the number of numbers to follow. Then there are T lines, each containing exactly one positive integer number N, 1 <= N <= 1000000000.

Output
For every number N, output a single line containing the single non-negative integer Z(N).

Example
Sample Input:

6
3
60
100
1024
23456
8735373
Sample Output:

0
14
24
253
5861
2183837*/

#include <stdio.h>
unsigned long long checkzeroes(unsigned long long number);
int main(void) {

unsigned long long  testcases,number;
unsigned long long numberofzeros;
scanf("%llu",&testcases);

while(testcases--)
{
scanf("%llu",&number);
numberofzeros=checkzeroes(number);
printf("%llu\n",numberofzeros);
}
	return 0;
}
 unsigned long long checkzeroes(unsigned long long number)
{
	unsigned long long zeros = 0;
        while (number > 0) {
            zeros += number / 5;
            number /= 5;
        }
        return zeros;
}
