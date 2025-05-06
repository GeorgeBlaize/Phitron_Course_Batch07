#include<stdio.h>
int main()
{
    int num;
    scanf("%d ",&num);

    int sumPositive=0,sumNegative=0,value;

    for(int i=0; i<num; i++){
        scanf("%d ",&value);
        if(value>0){
            sumPositive+=value;
        }
        else if(value<0){
            sumNegative+=value;
        }
    }

    printf("%d %d\n",sumPositive,sumNegative);
    
    return 0;
}