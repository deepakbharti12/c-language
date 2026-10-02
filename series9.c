// 1,5,12,22,35,51
#include <stdio.h>
int main()
{
 int i,n,s=0;
 printf("enter the number\n");
 scanf("%d",&n);
 for(i=0; i<=n; i++)
 {
    s=s+3*i+1;
 printf("%d\n",s);
 }
 return 0;
} 