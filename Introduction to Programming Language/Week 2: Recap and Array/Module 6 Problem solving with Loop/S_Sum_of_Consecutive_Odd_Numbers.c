#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=0; i<t; i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);

        int sum=0;

        if(a>b){
            int temp=a;
            a=b;
            b=temp;

        }

        for(int i=a+1; i<b; i++ )
        {
            if(i%2!=0)
            {
                sum+=i;
            }
        }
        printf("%d\n",sum);
    }

    return 0;
}