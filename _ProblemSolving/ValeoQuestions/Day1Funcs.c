/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

void SwapVar(int *A,int *B)
{
    int temp;
    temp=*A;
    *A=*B;
    *B=temp;
}

void SwapPointer(int **A,int **B)
{
    int *Temp*A;
    *A=*B;
    *B=Temp;
}

/*int GetMostRepeated(int *Ptr,int size)
{
    int index=0;
    int Count=1;
    int It;
    for(It=0;It<size;It++)
    {
        if(Ptr[It]==Ptr[index])
        {
            Count++;
        }
        else
        {
            Count--;
        }
        
        if(Count==0)
        {
            index=It;
            Count=1;
        }
    }
    return Ptr[index];
}*/

int  GetMostRepeated(int *Ptr,int Size)
{
    int Hash[1000]={0};//the problem her is that we have to create Hash size larger than or equal to the max value in passed in the array
    int Max=0;
    int Maxvalue=0;
    for(int i=0;i<Size;i++)
    {
        Hash[Ptr[i]]++;
    }
    
    for(int i=0;i<1000;i++)
    {
        if(Hash[i]>Maxvalue)
        {
            Maxvalue=Hash[i];
            Max=i;
        }
    }
    return Max;
}


int DigitsSum(int A)
{
    int sum=0;
    while(A)
    {
        sum+=(A%10);
        A/=10;
    }
    return sum;
}
#include <stdio.h>

int main()
{
    int arr[6]={0,2,3,3,1,5};
    printf("%d",GetMostRepeated(arr,6));
    printf("%d",DigitsSum(1236));
    return 0;
}
