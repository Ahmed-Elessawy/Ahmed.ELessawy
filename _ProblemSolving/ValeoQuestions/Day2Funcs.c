/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

int Mul(int a,int b)
{
    int product=0;
    for(int i=0;i<b;i++)
    {
        product+=a;
    }
    return product;
}

void Toggle(char *Var,int BitNum)
{
    *Var^=1<<BitNum;
}

void printArr(int *Ptr,int Size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d",Ptr[i]);
    }
}
#include <stdio.h>

int main()
{
    char x=0;
    char *a=&x;
    Toggle(a,1);
    printf("%d",x);
    return 0;
}
