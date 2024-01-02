#include<stdio.h>
#include<math.h>
int main()
{
float cp,sp,pro,per;
scanf("%f%f",&cp,&sp);
pro=sp-cp;
per=(pro/cp)*100;
printf("%.2f",per);
return 0;
}