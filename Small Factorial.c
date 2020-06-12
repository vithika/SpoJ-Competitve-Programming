/*You are asked to calculate factorials of some small positive integers.

Input
An integer t, 1<=t<=100, denoting the number of testcases, followed by t lines, each containing a single integer n, 1<=n<=100.

Output
For each integer n given at input, display a line with the value of n!*/

#include <stdio.h>
#include <stdlib.h>
 
struct bigint {
	char num[200];
	int k;
};
 
struct bigint bignum;
void init(void);
char *toString(void);
void times(int mend);
char *fact(int n);
 
int main(void) {
	int t, n;
	init();
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		printf("%s\n",fact(n));
		init();
	}
	return 0;
}
 
char *fact(int n) {
	if(n == 1 || n == 0)
		return "1";
	do {
		times(n);
	} while(--n);
	return toString();	
}
 
void init() {
	bignum.num[0] = 1;
	bignum.k = 1;
}
 
void times(int mend) {
	int temp = 0;
	for(int i = 0; i < bignum.k; ++i) {
		temp += bignum.num[i] * mend;
		bignum.num[i] = temp % 10;
		temp /= 10;
	}
 
	while(temp != 0) {
		bignum.num[bignum.k++] = temp % 10;
		temp /= 10;
	}
}
 
char *toString() {
	int i = 0, k = bignum.k;
	char *c = (char *)malloc(sizeof(char)*(k+1));
	while(k--) {
		c[i++] = bignum.num[k] + '0';
	}
	c[i] = '\0';
	return c;
}
