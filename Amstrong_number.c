#include<stdio.h>
#include<math.h>
void main()
{int sum=0,n,rem,temp;
printf("enter three number");
scanf("%d",&n);
temp=n;
while(n>0)
{
    rem=n%10;
    sum=sum+pow(rem,3);
    n=n/10;
}
if(sum==temp){
    printf("it is an amstrong number");
}
else{
    printf("it is not amstrong");
}
}
