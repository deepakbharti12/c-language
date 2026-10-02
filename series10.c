// 0,1,1,2,3,5,8,13,21,34
#include <stdio.h>
int main()
{
 int i,a,b,c,n;
 printf("enter the number\n");
 scanf("%d",&n);
 for(a=-1,b=1,i=1; i<=n; i++)
 {
    c=a+b;

 printf("%d\n",c);
 a=b;
 b=c;
 }
 return 0;
} 