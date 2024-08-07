#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,c=0;
    printf("ENTER THE NUMBER  ");
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
        c=c+pow(i,2);
    }
    printf("THE RESULT IS %d",c);
    return 0;

}