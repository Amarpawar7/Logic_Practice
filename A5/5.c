#include<stdio.h>

void Number(int iNo){
    int iCnt = 0;
    for(iCnt =1 ;iCnt<=5; iCnt++){
        printf("%d\t",iNo*iCnt);
    }
}

int main(){

    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}