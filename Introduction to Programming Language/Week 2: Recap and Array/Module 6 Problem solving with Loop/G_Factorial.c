#include<stdio.h>
int main()
{
    int t,n;

    scanf("%d",&t);

    

    for(int i=0; i<t; i++)
    {

        scanf("%d",&n);
        
        long long  fact=1;

        for(int j=2; j<=n; j++)
        {
            fact*=j;
        }
        printf("%lld\n",fact);
    }

     
    return 0;


}