#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);

    int arr[num];
    for(int i=0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min=arr[0];
    int pos=0;

    for(int i=1; i<num; i++)
    {
        if(arr[i]<min){
            min=arr[i];
            pos=i;
        }
    }

    printf("%d %d\n",min,pos+1);

    return 0;
}