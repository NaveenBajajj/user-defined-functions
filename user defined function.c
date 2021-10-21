// This program to demostrate function of user defined 
#include<stdio.h>
 int sum_func(int,int);
int main()
{
    int n1,n2,t;
    printf("\n Enter two numbers");
    scanf("%d%d",&n1,&n2);
    t=sum_func(n1,n2);
    printf("\n total %d",t);
}
// user defined function section
int sum_func(int a , int b)
{
    int sum;
    sum=a+b;
    return sum;
}