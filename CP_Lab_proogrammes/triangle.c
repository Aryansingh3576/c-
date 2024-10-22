#include<stdio.h>
int main()
{
int i,n,r;
printf("Enter the number of rows");
scanf("%d",&r);
for(i=1;i<=r;i++)
{
    for(n=1;n<=i;n++)
    {
    printf("*");
    }
    printf("\n");
   
}

return 0;

}