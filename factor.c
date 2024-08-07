#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,c;
    printf("ENTER THE NUMBER ");
    scanf("%d",&a);
for(i=1;i<=a;i++)
{
    c=a%i;
    if (c==0)
    printf("\n%d",i);
}
return 0;
}