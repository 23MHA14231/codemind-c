#include<stdio.h>
int main()
{
    float s,h,d,p,g;
    scanf("%f%f%f",&s,&h,&d);
    p=s*12/100;
    g=s+h+d+p;
    printf("%.2f
",p);
    printf("%.2f
",g);
}