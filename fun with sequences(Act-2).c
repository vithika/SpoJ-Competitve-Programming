/*You are given a sorted sequence of n integers S = s1, s2, ..., sn and a sorted sequence of m integers Q = q1, q2, ..., qm. 
Please, print in the ascending order all such si that belongs to Q."*/

#include<stdio.h>
int main()
{
  int n,m,i,j;
  int s[101],q[101];
 
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&s[i]);
 
  scanf("%d",&m);
  for(i=0;i<m;i++)
    scanf("%d",&q[i]);
 
 
  for(i=0,j=0;i<n && j<m;)
  {
    if(s[i]==q[j])
    {
      printf("%d ",s[i]);
      i++;
 
    }
    else if(s[i]-q[j]<0)
      i++;
    else
      j++;
  }
 
 
  printf("\n");
 
  return 0;
}
 
