#include<stdio.h>
int main()
{
    double a,b,MEDIA;
    scanf("%lf%lf",&a,&b);
    MEDIA=((a*3.5)+(b*7.5))/(3.5+7.5);
    printf("MEDIA = %0.5lf",MEDIA);
    printf("\n");
    return 0;
}
