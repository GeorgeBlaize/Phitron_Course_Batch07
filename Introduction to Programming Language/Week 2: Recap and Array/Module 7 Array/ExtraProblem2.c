//Take an array from input and count how many odd numbers are present in that array.

#include<stdio.h>
int main()
{
    int n; 
    int count = 0;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0){
            count++;
        }
    }

    printf("Number of odd numbers: %d\n",count);

    return 0;

}