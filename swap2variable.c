#include<stdio.h>
int a,b;
int main()
{
printf("Enter the value for a");
scanf("%d",&a);
printf("Enter the value for b");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("a=%d , b=%d",a,b);

}
