/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

float Avg(int *Ptr,int Size)
{
    float Avg=0;
    for(int i=0;i<Size;i++)
    {
        Avg+=Ptr[i];
    }
    Avg=(float)(Avg/Size);
    return Avg;
}


int Count(void)
{
    static int Count=0;
    Count++;
    return Count;
}

int fib(int Number)
{
    int a=0;
    int b=1;
    int res=0;
    if(Number==0)
    {
        return 0;
    }
    else if(Number==1)
    {
        return 1; 
    }
    else
    {
        for(int i=0;i<Number-2;i++)
        {
            res=a+b;
            a=b;
            b=res;
        }
    }
    return res;
}

#include <stdio.h>

int main()
{
printf("%d",fib(10));
    return 0;
}
