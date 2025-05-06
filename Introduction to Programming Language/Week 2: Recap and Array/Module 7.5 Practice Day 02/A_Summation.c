#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    long long n;
    long long sum=0;

    for(int i=0; i<num; i++)
    {
        scanf("%lld",&n);

        sum+=n;
    }

    if(sum<0)
    {
        sum=-sum;
    }

    printf("%lld ",sum);
    return 0;
}