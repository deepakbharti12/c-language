#include <stdio.h>
int main()
{
 int i,j,a[5][5],b[5][5],k;
 int s=0,m,n,c[5][5];
 printf("Enter the number of rows \n");
 scanf("%d",&m);
 printf("Enter the number of column  \n");
 scanf("%d",&n);
 printf("Enter the values for Matrix A:\n");
 for(i=0;i<m;i++)
 {
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);

    }

 }
 printf("Enter the values for Matrix B:\n");
 for(i=0;i<m;i++)
 {
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[i][j]);

    }
 }
    for(i=0;i<m;i++)
 {
    for(j=0;j<n;j++)
    {
        c[i][j] = 0;
        for(k=0;k<n;k++)
        {
           //s=s+a[i][k]*b[k][j];
           //c[i][j]==s;
           c[i][j]=c[i][j]+a[i][k]*b[k][j];
            
        }

    }

 }
for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d \t", c[i][j]);
        }
        printf("\n");
    }
 
 return 0;
}