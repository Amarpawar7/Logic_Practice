#include<stdio.h>

int PrintEven(int iNo){
    if(iNo <= 0){
        return -1;
    }
    else{
        int iCnt =0;
        for(iCnt = 2; iCnt < 2*iNo; iCnt=iCnt+2){
            printf("%d\t",iCnt);
        }
    }
}

int main(){
    int iValue =0 ;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}

