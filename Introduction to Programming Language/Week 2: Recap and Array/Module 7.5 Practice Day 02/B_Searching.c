#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);

    int arr[num];
    for(int i=0;i<num; i++)
    {
        scanf("%d",&arr[i]);

    }
     
    int search;
    scanf("%d",&search);

    int found=-1;
    for(int i=0; i<num; i++)
    {
        if(arr[i]==search)
        {
            found=i;
            break;
        }
    }

    printf("%d",found);


    return 0;
}