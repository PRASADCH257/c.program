#include <stdio.h>
#include<math.h>
void main()
{int sum=0,n,rem;
printf("enter three number");
scanf("%d",&n);
while(n>0)
{
    rem=n%10;
    sum=sum+rem;
    n=n/10;
}
printf("the sum is %d",sum);
}
