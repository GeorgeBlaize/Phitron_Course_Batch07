//Take an array from input and print the maximum value of that array.

#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int max=arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }

    printf("Maximum value: %d\n",max);
    return 0;
}