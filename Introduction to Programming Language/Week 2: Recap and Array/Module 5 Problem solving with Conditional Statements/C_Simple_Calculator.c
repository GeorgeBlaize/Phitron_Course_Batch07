#include<stdio.h>
int main()
{
    long long num1,num2;
    scanf("%lld %lld",&num1,&num2);
    int sum;
    int sub;
    long long mul;
    sum=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    printf("%lld + %lld = %d\n",num1,num2,sum);
    printf("%lld * %lld = %lld\n",num1,num2,mul);
    printf("%lld - %lld = %d\n",num1,num2,sub);
    return 0;
}