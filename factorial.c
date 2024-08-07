#include<stdio.h>
int main()
{
    int a,i,c=1;
    printf("ENTER THE NUMBER  ");
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
        c=c*i;
    }
    printf("THE FACTORIAL IS %d",c);
    return 0;

}