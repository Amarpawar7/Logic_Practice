
#include<stdio.h>

int RangeDisplayRev(int iStart,int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if((iStart<0) || (iEnd<0) || (iStart>iEnd)){
        printf("Invalid range");
        return;
    }

    for(iCnt = iEnd; iCnt>=iStart; iCnt--){
        printf("%d\t",iCnt);
        
    }
    return iSum;
    
}

int main(){
    int iValue1 = 0,iValue2 = 0;
    int iRet =0 ;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);
    
    
    return 0;
}
