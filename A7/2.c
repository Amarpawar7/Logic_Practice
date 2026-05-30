#include<stdio.h>

int EvenFactorial(int iNo){
    return iNo*70;
    
}

int main(){

    int iValue = 0;
    int iRet =0;

    printf("Enter number of USD : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Value in INR is :%d\n", iRet);

    return 0;
}