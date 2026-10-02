// 1,0,3,2,7,6,13,12,21,20
#include <stdio.h>
int main()
{
 int i,n,x=1;
 printf("enter the number\n");
 scanf("%d",&n);
for(i=0; i<=n/2; i++)
 {
    x=x+2*i;
 printf("%d,\n%d\n",x,x-1);
 }
 return 0;
} 