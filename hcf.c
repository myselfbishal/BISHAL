#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    float c,d;
    printf("ENTER THE FIRST NUMBER ");
    scanf("%d",&a);
    printf("ENTER THE SECOND NUMBER ");
    scanf("%d",&b);
     if (a==b+4 & a/4!=0)
    {
        e:
    for ( i = 1; i <= a ; i++)
    {
      c = a%i;
      d = b%i;
      
      if (c==d & i!=4)
      {
        printf("\n THE HCF IS %d",i);
      }
    }
    return 0;
    }
  if (b==a+4 & a/4!=0)
    {
    
    for ( i = 1; i <= a ; i++)
    {
      c = a%i;
      d = b%i;
      
      if (c==d & i!=4)
      {
        printf("\n THE HCF IS %d",i);
        
      }
}
return 0;
 }
    if (a>b)
    {
    for ( i = 1; i <= a ; i++)
    {
      c = a%i;
      d = b%i;
      if (c==d)
      {
        printf("\n THE HCF IS %d",i);
      }
    }
    }

     if(b>a)
    {
    for ( i = 1; i <= b ; i++)
    {
      c = a%i;
      d = b%i;
      if (c==d)
      {
        printf("\n THE HCF IS %d",i);
      }


}
    
    }
    return 0;
}

