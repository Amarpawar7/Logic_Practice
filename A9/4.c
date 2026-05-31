#include <stdio.h>

int CountDiff(int iNo){
    int iDigit = 0;
    int iMulti = 1;

    while(iNo != 0){
        iDigit = iNo%10;
        if(iDigit!=0){
            iMulti = iMulti*iDigit;
        }
        iNo = iNo/10;
    }
    return iMulti;



}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("Multiplication of digits is : %d\n",iRet);

    return 0;
}