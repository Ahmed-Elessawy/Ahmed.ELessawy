/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
/*
u8 func(u8 x) 
{
     static u8 z = x;
     z++;
    return z;
}
void main(void) 
{
     printf(func(5));
}*/
//compiler error as static var needs initialization before run time 



void Prime(int N)
{
    char State='P';
    int M=N/2;
    for(int i=1;i<=M;i++)
    {
        if(N%i==0)
        {
            State='N';

        }
    }
    printf("%c",State);
}


void NumberOfZerosOnes(int N)
{
    int Zeros=0;
    int Ones=0;
    while(N)
    {
        Zeros+=!(N&0x01);
        Ones+=(N&0x01);
        N>>=1;
    }
    printf("%d %d",Zeros,Ones);
}

unsigned char SwapNipple(unsigned char A)
{
    return ( (A & 0x0F)<<4 | (A & 0xF0)>>4 );
}

unsigned char CShift(unsigned char A,unsigned char N )
{
    return ((A<<N) | (A>>(8-N)));
}

unsigned char ReverseBits(unsigned char A)
{
    unsigned char Res=0;
    for(int i=0;i<8;i++)
    {
        Res|=((A>>i)&0x01)<<(7-i);
    }
    return Res;
}

unsigned int reverseBits(unsigned int num)
{
    unsigned int count = sizeof(num) * 8 - 1;
    unsigned int reverse_num = num;
 
    num >>= 1;
    while (num) {
        reverse_num <<= 1;
        reverse_num |= num & 1;
        num >>= 1;
        count--;
    }
    reverse_num <<= count;
    return reverse_num;
}


int FindRepeated(int *P)
{
    int Freq[101]={0};
    for(int i=0;i<101;i++)
    {
        Freq[P[i]]++;
        if(Freq[P[i]]>1)
        {
            return P[i];
        }
    }
    
}

int RemoveDuplicte(int *P)
{
    int Freq[1000]={0};
    int Ptr[101];
    int j=0;
    for(int i=0;i<101;i++)
    {
        Freq[P[i]]++;
        if(Freq[P[i]]>1)
        {
            
        }
        else
        {
            Ptr[j]=P[i];
            j++;
        }
    }
    for(int i=0;i<=j;i++)
    {
        P[i]=Ptr[i];
    }
    return j;
}


void ReverseArr(int *P,int size)
{
    int M=size/2;
    int temp;
    for(int i=0;i<M;i++)
    {
        temp=P[i];
        P[i]=P[size-i-1];
        P[size-i-1]=temp;
    }
}
int main()
{
    //Prime(9);
    //NumberOfZerosOnes(7);
    //printf("%d",ReverseBits(0b11010010));
  // printf("%d",CShift(0b11010010,7));
  //printf("%d",ReverseBits(0b11010010));
  //int arr[101];
  /*for(int i=0;i<100;i++)
  {
      arr[i]=i;
  }
  arr[100]=50;
  //RemoveDuplicte(arr);
  /*for(int i=0;i<99;i++)
  {
      printf("%d ",arr[i]);
  }*/
  
  int A[7]={1,2,3,4,5,6,7};
  ReverseArr(A,7);
  for(int i=0;i<7;i++)
  {
      printf("%d ",A[i]);
  }
    return 0;
}
