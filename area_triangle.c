#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,s,A; /* a,b,c = sides of the triangle; 2s=a+b+c;A= area of triangle*/
    printf("ENTER THE 3 SIDES OF TRIANGLE USING ','  ");
    scanf("%d,%d,%d",&a,&b,&c);
    s=(a+b+c)/2;
    A=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("THE AREA OF THE TRIANGLE IS %d ",A);
    return 0;
}