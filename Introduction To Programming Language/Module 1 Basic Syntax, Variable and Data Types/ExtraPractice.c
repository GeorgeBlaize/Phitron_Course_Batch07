//Write a C program that will take 2 numbers from the user and then print the 2nd number first and then first number. 

#include<stdio.h>
int main()

{

    int num1,num2;
    
    printf("Enter first number:\n ");
    scanf("%d",&num1);

    printf("Enter second number:\n ");
    scanf("%d",&num2);

    printf("The second number is: %d\n",num2);
    printf("The first number is : %d\n",num1);

    return 0;
}