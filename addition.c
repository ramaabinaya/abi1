#include<stdio.h>
void main()
{
int a[10][10],b[10][10],d[10][10];
int i,j,p,q,m,n,k;
printf("enter the size of matrix A.....\n");
scanf("%d%d",&p,&q);
printf("enter the size of matrix b.....\n");
scanf("%d%d",&m,&n);
if(q==m)
{
printf("enter the elements of matrix A\n");
for(i=0;i<p;i++)
for(j=0;j<q;j++)
scanf("%d",&a[i][j]);
printf("enter elements of matrix B\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&b[i][j]);
for(i=0;i<p;i++)
for(j=0;j<n;j++)
{
d[i][j]=0;
for(k=0;k<q;k++)
d[i][j]=a[i][j]+b[i][j];
}
printf("the resultant matrx is\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%d\t",d[i][j]);
printf("\n");
}
}
else
printf("cannot multiply the matrix");
}