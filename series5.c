// 5 15 30 50 75
#include <stdio.h>
int main()
{
 int i,n,s=0;
 printf("enter the number\n");
 scanf("%d",&n);
 for(i=1; i<=n; i++)
 {
    s=s+5*i;
 printf("%d\n",s);
 }
 return 0;
} 