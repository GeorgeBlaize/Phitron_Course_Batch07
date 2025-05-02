//Write a c program to print 8’s time table to 200

#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);

    for(int i=1; i<=200; i++)
    {
        printf("%d x %d = %d\n",num,i,num*i);
    }

    return 0;
}