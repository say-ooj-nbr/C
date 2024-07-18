#include<stdio.h>
int a,b,temp;
int main()
{
printf("Enter the value for a");
scanf("%d",&a);
printf("Enter the value for b");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("a=%d , b=%d",a,b);

}
