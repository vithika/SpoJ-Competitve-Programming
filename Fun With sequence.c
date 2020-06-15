/*You are given a sorted sequence of n integers S = s1, s2, ..., sn and 
a sorted sequence of m integers Q = q1, q2, ..., qm. 
Please, print in the ascending order all such si that does not belong to Q.*/



#include <stdio.h>

int main(void) {
int n,m;
int s[100],q[100];
scanf("%d",&n);
for (int i=0;i<n;i++)
{
	scanf("%d\t",&s[i]);
}
scanf("%d",&m);
for(int  i=0;i<m;i++)
{
	scanf("%d",&q[i]);
}
int i,j;
 for(i=0,j=0;i<n && j<m;)
  {
    if(s[i]-q[j]<0)
    {
      printf("%d ",s[i]);
      i++;
 
    }
    else if(s[i]==q[j])
      i++;
    else
      j++;
  }
 
  for(;i<n;i++){
    printf("%d ",s[i]);
  }
  printf("\n");
 
  return 0;
}
