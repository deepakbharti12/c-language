 // 1 5 11 19 29 41
 #include <stdio.h>
int main()
{
 int i,n,s=-1;
 printf("enter the number\n");
 scanf("%d",&n);
 for(i=1; i<=n; i++)
 {
 s=s+i*2;
 printf("%d\n",s);
 }
 return 0;
} 
// we cn use also this -> s=i*i+(i-1)