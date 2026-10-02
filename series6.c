// 1,2,6,24,120,720
#include <stdio.h>
int main()
{
 int i,n,s=1;
 printf("enter the number\n");
 scanf("%d",&n);
 for(i=1; i<=n; i++)
 {
    s=s*i;
 printf("%d\n",s);
 }
 return 0;
} 