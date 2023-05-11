#include <stdio.h>

// bit_utils.c - Intake43 ITI, Winter 2022
// YOUR NAME HERE :Ahmed Elessawy

// TODO: Implement the following Macros like a function in a generic way !
// NOTE: If there're multiple ways please feel free to implement all possible solutions .


/*

    // Complete :-
    & :- 
        x &  x =  x
        x & ~x =  0s
        x & 1s =  x
        x & 0s =  0s
    | :-
        x |  x =  x
        x | ~x =  1s
        x | 1s =  1s 
        x | 0s =  x
    ^ :-
        x ^ x  = 0s
        x ^ ~x = 1s
        x ^ 1s = ~(x)
        x ^ 0s =  x
    

*/


#define SET_BIT(REG,Bit_NO)     (REG) |= (1<<(Bit_NO)) // For example !

#define CLR_BIT(REG,Bit_NO)		(REG) &= ~(1<<(Bit_NO))	

// Get The Bit number Bit_NO
#define GET_BIT(REG,Bit_NO)		(((REG)>>(Bit_NO)) &0x01) 

// Right Shift by No
#define RSHFT_REG(REG,NO)       (REG)>>=(NO) 

// Left Shift by NO
#define LSHFT_REG(REG,NO)       (REG)<<=(NO)

// Circular Right Shift
#define CRSHFT_REG(REG,NO)		REG=(REG>>NO)|(REG<<(sizeof(REG)-NO))

// Circular Left Shift
				
#define CLSHFT_REG(REG,NO)		REG=(REG<<NO)|(REG>>(sizeof(REG)-NO))

// Assign a Value to a Register
#define ASSIGN_REG(REG,VALUE)	REG=VALUE

// Set The Register [1s]
#define SET_REG(REG)			REG=-1			

// Clear the Register [0s]
#define CLR_REG(REG)			REG=0

// Toggle a Bit in Register
#define TGL_BIT(REG,Bit_NO)		((REG)^=(1<<Bit_NO))

// Toggle a Register Value
#define TGL_REG(REG)			REG=(~REG)

// Set The High Nibble in a Register
#define SET_H_NIB(REG)			REG|=0xF0

// Set The Low Nibble in a Register
#define SET_L_NIB(REG)			REG|=0x0F

// Clear The High Nibble in a Register
#define CLR_H_NIB(REG)			REG&=~(0xF0)

// Clear The Low Nibble in a Register
#define CLR_L_NIB(REG)			REG&=~(0x0F)

// Get The High Nibble in a Register
#define GET_H_NIB(REG)			((REG>>4)&0x0F)

// Get The Low Nibble in a Register
#define GET_L_NIB(REG)			(REG&=0x0F)

// Assign The High Nibble in a Register
#define ASSIGN_H_NIB(REG,VALUE)	 REG|=(VALUE<<4)

// Assign the Low Nibble in a Register
#define ASSIGN_L_NIB(REG,VALUE)  REG|=VALUE

// Toggle the High Nibble in a Register
#define TGL_H_NIB(REG)			  REG^=0xF0

// Toggle the Low Nibble in a Register
#define TGL_L_NIB(REG)			  REG^=0x0F	

// Swap the Nibbles in a Register
#define SWAP_NIB(REG)          	  (REG>>4)|(REG<<4) 		


/*
    Implement the setKthBit function that sets the kth bit in a variable and returns it .
    Ex :
    var = 10 or (00001010) , k = 2 
          13 or (00001110) 
*/
char setKthBit(char var, char k) {
    
	var|=(1<<k);
    return var ;
}

/*
    Implement the clearKthBit function that clears the kth bit in a variable and returns it .
    Ex :
    var = 10 or (00001010) , k = 3 
          2 or (00000010) 
*/
char clearKthBit(char var, char k) {
    var&=~((1<<k))
    return var ;
}

/*
    Implement the getKthBit function that gets the kth bit from a variable and returns it .
    Ex :
    var = 10 or (00001010) , k = 3 
          1 or (00000001) 
*/
char getKthBit(char var, char k) {
    (var>>k)&0x01
    return var ;
}

/*
    Implement the setRightMostZero function that sets the right most zero in a variable and returns it .
    Ex :
    var = 10 or (00001011)  
          15 or (00001111) 
*/
char setRightMostZero(char var) {
    var|=(var+1);
    return var ;
}

/*
    Implement the setTrailingZeros function that sets the trailing ones in a variable and returns it .
    Ex :
    var =  8 or (00001000)  
          15 or (00001111) 
*/

char setTrailingZeros(char var)
    var|=(var-1);
    return var ;
}

/*
    Implement the clearRightMostOne function that clears the rightmost one in a variable and returns it .
    Ex :
    var =  10 or (00001010)  
           8 or (00001000) 
*/
char clearRightMostOne(char var) {
	var&=(var-1);	
    return var;
}

/*
    Implement the clearTrailingOnes function that clears the rightmost ones in a variable and returns it .
    Ex :
    var =  11 or (00001011)  
           8 or (00001000) 
*/
char clearTrailingOnes(char var) {
    var&=(var+1);
    return var ;
}

/*
    Implement the clearAllBitsFromMSBThroughKInclusive function that clears all bits starting from the most-significant bit 
    to the kth bit and returns it .
    Ex :               
    var =  174 or (10101111)  
           7   or (00000111)  
*/
char clearAllBitsFromMSBThroughKInclusive(char var, char k) {
    var&=(0xFF>>(8-k));
    return var ;
}

/*
    Implement the clearAllBitsFromLSBThroughKInclusive function that clears all bits starting from the least-significant bit 
    to the kth bit and returns it .
    Ex :              
    var =  174 or (10101111)  
           160 or (10100000)  
*/
char clearAllBitsFromLSBThroughKInclusive(char var,char k) {
    var&=(0xFF<<k);
    return var ;
}

/*
    Implement the toggleKthBit function that flips/toggle/change the kth bit in a variable and returns it .
    Ex :               k
    var =  174 or (10101111)  , k = 2 
           167 or (10100111)  
*/
char toggleKthBit(char var, char k) {
    var^=(1<<k);
    return var ;
}

/*
    Implement the createAWordWithSingleOneAtRightMostZero function that Isolate the rightmost one in a variable and returns it .
    Ex :               
    var =  162 or (10100010)  
           2   or (00000010)  
*/
char createAWordWithSingleOneAtRightMostZero(char var) {
    var&=(x^(x-1));
    return var ;
}

/*
    Implement the createAWordWithOnesAtPositionOfTrailingZeros function that sets the trailing zeros in a variable 
    , clears all other bits and returns it .
    Ex :               
    var =  176 or (10110000)  
           15  or (00001111)  
*/
char createAWordWithOnesAtPositionOfTrailingZeros(char var) {
    (var-1)&=(x^(x-1));
    return var ;
}

/*
    Implement the extractABitField function that extract a bitfield from a variable and returns it . 
    Ex :            j   i 
    var =  131 or (10110011)  , i = 2 , j = 6 , 
           12  or (00001100)  
*/
char extractABitField(char var, char i, char j) {
    char field ;
    
    field = (field >> j | field << i)
    
    return field ;
}

/*
    Implement the setABitField function that sets a variable with a field and returns it . 
    Ex :            j   i 
    var =  131 or (10000011)  , i = 2 , j = 6 , 
        field     (xxx10100)  , Note : x indicates that it can be anything !!
           211 or (11010011)  
*/
char setABitField(char var, char i , char j, char field)
{
	
	char mask =-(2<<j)^-(1<<i)
    return (var & ~mask) | (field | mask) ;
}

/*
    Implement flipBitToWin function :-
    You have an integer and you can flip exactly one bit from a 0 to a 1. Write code to
    find the length of the longest sequence of ls you could create.
    
    Ex :
    Input: 1775 (or: 11011101111) 
    Output: 8
    
*/
int flipBitToWin(int var) {
    int cnt = 0 ;
    
    

    return cnt ;
}

/*
    Implement the longestSequenceOfOnes function that gets the longest consecutive ones in a variable and returns it .
    Ex :
    Input: 1775 (or: 11011101111) 
    Output: 4
    
*/
int longestSequenceOfOnes(int var) {
	
	int Counter=0;
	while(n&1)
	{
		Counter++;
		n>>1;
	}
    return Counter;
}

/*
    Implement the conversion f|unction that determines the number of bits you would need to flip to convert integer A to integer B. 
    Ex :
    Input: 29 (or: 11101), 15 (or: 01111)
    Output: 2

*/
int conversion(int var1,var2) {
	
	return countNumOfOnesWay1(var1^var2);
    
}

/*
    Write a program to swap odd and even bits in an integer with as few instructions as
    possible (e.g., bit 0 and bit 1 are swapped, bit 2 and bit 3 are swapped, and so on). 

*/

int PairwiseSwap(int var) 
{
    int Even_Mask=0xAAAAAAAA;
	int Odd_Mask=0x55555555;
	Odd_Mask&=var;
	Even_Mask&=var;
	
    return (Odd_Mask<<1)|(Even_Mask>>1)  ;
}

/*
    Explain what the following code does: 
    ...it returns zero if the number is power of 2 and 1 else
    ...
    ...
    Is it missing sth ?!
	yes:handling case of n being equal zero
*/

int Debugger(int var) {
	int n;
	n=var;
    return !( ( n & (n-1) ) == 0 && n!=0); 
}

/*
    Implement the NextNumber function :-
    Given a positive integer, print the next smallest and the next largest number that
    have the same number of 1 bits in their binary representation.
*/

int* NextNumber(int var) {
    static MinMax [2] = {0,0};
	
	
    
}

/*
    zh2t mn el comments bs if u did not find the function's name descriptive plz leave me a comment in slack ! 
*/

char isOddEvenWay1(char var) {
	
	//return 0 if even 
	//return 1 if odd
	if(var%2==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	
    
}

char isOddEvenWay2(char var) {
	//return 0 if even 
	//return 1 if odd
	
	//return (var-1)%2;
	
	return var&0x01;
    
}

char countNumOfOnesWay1(char var) {
	
	int Counter,Iterator;
	Counter=0;
    
	for(Iterator=0;Iterator<8;Iterator++)
	{
		if((var>>Iterator)&0x01)
		{
			Counter++;
		}
		else{
			
		}
	}
	return Counter;
}

char countNumOfOnesWay2(char var) {
	int Counter=0;
	while(n)
	{
		n&=n-1;
		Counter++;
	}
	
    return Counter;
}

char countNumOfOnesWay3(char var) {
	char LookUpTable[128];
	LookUpTable[0]=0;
	for(int i=0;i<128;i++)
	{
		LookUpTable[i]=(i&0x01)+LookUpTable[i/2];
	}
	
	return LookUpTable[var&0x0F]+LookUpTable[(var>>4)&0x0F];
	
    
}

char countNumOfOnesWay4(char var) {
    // Note :- search for a built-in function 
	
	return __builtin_popcount(var);
}

char isPowerOfTwo(char var) {
	//it is implemented already using (n&n-1) and this the simple approach
	
	char Counter;
	Counter=0;
	while(n)
	{
		if(n&1)
		{
			Counter++;
		}
		
		n>>1;
	}
	if(Counter==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
    
}

int Power(int var,int i)
{
	int Result=1;
	while(i)
	{
		
	Result=var*Result;
	i--;
	
	}
	
	return Result;
}

char roundUpToPowerOfTwo(char var) 
{
	Result=1;
	if(var==0)
	{
		return 1;
	}
	while(Result<var){
	
		Result*=2;
	
		var>>1;
	}
    return Result;
}

char isPowerOfFour(char var) {
   
	return isPowerOfTwo&&((positionOfRightMostOne(var)%2)>0);
   
}


void swapWithoutTemp(char* var1, char* var2){
	int Temp;
	Temp=*var1;
	*var1=*var2;
	*var2=Temp;
    
}

char positionOfRightMostOne(char var) {
	int Position;
	int Iterator;
	for(Iterator=0;Iterator<8;Iterator++)
	{
		if(var>>Iterator&0x01)
		{
			return Position=Iterator;
		}
	}
    
}

char xorFromOneToNWithoutLooping(char n) {
	
    if(n%4==0)
	{
		return n;
	}
	
	else if(n%2==0)
	{
		return n+1;
	}
	else if(n%4==1)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

char xorFromLeftToRightRangeUsingxorFromOneToNWithoutLoopingFunction(char i ,char j) {
	
	return xorFromOneToNWithoutLooping(j-i);
    
}

/*
    Given an array of numbers that contain different numbers in the range [0,n], return the only number in the
    range that is missing from the array .
*/
int missingNumber(int n) {
	int Result;
	char iterator;
	Result=0;
	for(Iterator=0;Iterator<=n;Iterator++)
	{
		Result+=Iterator;
	}
	
	return (((n*(n+1))/2)-Result);
    
}

/*
    print the binary representation of a decimal value .
*/
void decimalToBinary(int var) {
	
	
	while(var)
	{
		printf("%d",var&1);
		var>>1;
	}
	
    
}



char haveDifferentSigns(char var1, char var2) 
{
		//return 1 if have both sign and zero else
		if((var1*var2)>0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
    
}

char areEqualNumbersWithoutUsingEqual(char var1 , char var2) {
	
	//returns 0 if equal and one else
	
    return var1^var2;
}

char minimumWithoutBranching(char var1, char var2) {
	
	
	return var1*(var1<var2)+var2*(var2<var1);
	
}


int main()
{
    

    return 0;
}
