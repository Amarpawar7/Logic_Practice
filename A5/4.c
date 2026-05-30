#include<stdio.h>

void Number(int iNo){
    if(iNo<0){
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt =0 ;iCnt<=iNo; iCnt++){
        if((iCnt%2) != 0){
            printf("%d\t",iCnt);
        }
    }
}

int main(){

    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}