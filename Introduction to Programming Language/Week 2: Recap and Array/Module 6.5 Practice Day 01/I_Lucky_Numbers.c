#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);

    int first_digit=num/10;
    int last_digit=num%10;

    if(first_digit==0 || last_digit==0)
    {
        printf("NO");
    }
    else if(first_digit%last_digit==0 || last_digit%first_digit==0)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}