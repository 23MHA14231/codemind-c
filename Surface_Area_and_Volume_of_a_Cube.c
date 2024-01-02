#include<stdio.h>
int main()
{
    int Side,Area,Volume;
    scanf("%d",&Side);
    Area=(Side*Side)*6;
    Volume=(Side*Side*Side);
    printf("Surface area = %d and Volume = %d",Area,Volume);
}