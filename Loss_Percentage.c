#include<stdio.h>
#include<math.h>
int main()
{
    float cp,sp,los,per;
    scanf("%f%f",&cp,&sp);
    los=cp-sp;
    per=(los/cp)*100;
    printf("%.2f",per);
    return 0;
}