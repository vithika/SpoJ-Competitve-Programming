/*A positive integer is called a palindrome if its representation in the decimal system is the same when read from left to right and from right to left. For a given positive integer K of not more than 1000000 digits, write the value of the smallest palindrome larger than K to output. Numbers are always displayed without leading zeros.

Input
The first line contains integer t, the number of test cases. Integers K are given in the next t lines.

Output
For each K, output the smallest palindrome larger than K.

Example
Input:
2
808
2133

Output:
818
2222
*/

#include<stdio.h>
int palindrome(long n)
{
  long t;
 int r = 0;
  t=n;
  while(t!=0)
  {
    r=r*10;
    r=r+(t%10);
    t=t/10;
  }
  if(r==n)
    return 1;
  else
    return 0;
}
 
int main()
{
	long k,i;
  int d=0,testcases=0;
  scanf("%d",&testcases);
  while(testcases--)
  {
  scanf("%ld",&k);
  i = k + 1;
  while(1)
  {
    d=palindrome(i);
    //printf("%d ", i);
    if(d==1)
      break;
    i++;
 
  }
  printf("%ld\n",i);
  }
  return 0;
}
