#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
     
    if(ch=='z')
    {
       printf("%c",ch-25);
    }
    else
    {
        printf("%c",ch+1);
    }
   

    return 0;
}