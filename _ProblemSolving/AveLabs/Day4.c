/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void Invert (char **Str,char Index1,char Index2)
{
    char *Temp=Str[Index1];
    Str[Index1]=Str[Index2];
    Str[Index2]=Temp;
    
}


int* Arr(int x,int y)
{
    int arr[3];
    int *ptr;
    arr[0]=x;
    arr[1]=y;
    arr[2]=x+y;
    
    return ptr=arr;
}

int  Sum(int x,int y)
{

    
    return (x^y)|(2*(x&y));
}

int ConvertToBig(int var)
{

    return ((var>>24)|(var<<24))|((var&(0xff<<8))<<8)|((var&(0xff<<16))>>8);
}
int main()
{
    char *Arr[3]={"I","Love","Ëgypt"};
    Invert(Arr,3);
    for(int i=0;i<3;i++)
    {
        printf("%s ",Arr[i]);
    }
    printf("%x\n",ConvertToBig(0x12345678));
    printf("%d",Sum(10,20));
    int i=0;
    i+++i;  //incremen i postefix and i to it 
    i++++i;//compilation error
    i++i;  //compilation error
    
    int Arr[3]={1,2,3};
    int *Ptr=Arr;
    printf("%d",Ptr[0]);//it will print first element in the array
    printf("%d",*(Ptr+1));//it will print the second element in the array
    printf("%d",*(Ptr++));//it will print the first element in the array as it is postfix
    return 0;
}
