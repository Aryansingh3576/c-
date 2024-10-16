#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter 3 Nummbers\n");
printf("a = ");
scanf("%d",&a);
printf("b = ");
scanf("%d",&b);
printf("c = ");

scanf("%d",&c);

(a>b)?((a>c)?printf("a is largest"):printf("c is largest")):((b>c)?printf("b is largest"):printf("c is largest"));
return 0;




}