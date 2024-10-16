#include<stdio.h>
int main()
{
float p,r,t,si;
printf("p = principal amount \nr = rate of interest per month \nt = time(in months) \nsi = simple interest \n");
printf("p = ");
scanf("%f",&p);
printf("r = ");
scanf("%f",&r);
printf("t = ");
scanf("%f",&t);
si  = (p*r*t)/100 ;
printf("simple interest si = %f",si);
return 0;




}