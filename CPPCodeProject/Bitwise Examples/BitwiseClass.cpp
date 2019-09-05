/*
File Name:		BitwiseClass.cpp
Created By:		Pawan Kumar
Date:			31-8-2019  06:16 PM
Last Modified:
Desc:
Usage:
Copyright (c)2019 Pawan90101@gmail.com
*/



/*
references:
https://www.geeksforgeeks.org/bitwise-hacks-for-competitive-programming/
https://codeforwin.org/2016/01/bitwise-operator-programming-exercises-and-solutions-in-c.html
*/
 
#include "../IncludeAllHeaderOnce.h"

bool  CBitwise::isMSBSet(int num)
{
	int bitsRequire = sizeof(int) * 8;
	return ((num << (bitsRequire - 1)) & 1); //or (1 << (bitsRequire - 1))&num
}
bool  CBitwise::isLSBSet(int num)
{
	return (num & 1);
}

bool CBitwise::isBitSet(int num, int bitPosition)
{
	return ((num >> (bitPosition - 1)) & 1);
}

int CBitwise::getBit(int num , int bitPosition)
{
	return (num >> (bitPosition - 1)) & 1;
}

int CBitwise::setBit(int num, int bitPosition)
{
	return (1 << (bitPosition - 1)) | num;
}

int CBitwise::clearBit(int num, int bitPosition)
{
	return ~(1 << (bitPosition - 1)) & num;
}

int CBitwise::toggleBit(int num, int bitPosition)
{
	return num ^ (1 << bitPosition);
}

int CBitwise::getHighestOrderBitSet(int num)
{
	int bit_Order = 0;
	int bitsRequire = sizeof(int) * 8;
	for (int i= 0 ; i < bitsRequire ; i++)
	{
		if ((num >> i) & 1)
		{
			bit_Order = i+1;
		}
	}
	return bit_Order;

	/*
	int ret = num & (-num);
	return ret;
	*/

}

int CBitwise::getLowestOrderBitSet(int num)
{
	int bit_Order = 0;
	int bitsRequire = sizeof(int) * 8;

	for (int i = 0; i < bitsRequire; i++)
	{
		if ((num >> i) & 1)
		{
			bit_Order = i+1;
			break;
		}
	}
	
	return bit_Order;
}

int CBitwise::countSetBit(int num)
{
	int bit_Count = 0;
	int bitsRequire = sizeof(int) * 8;
	for (int i = 0; i < bitsRequire; i++)
	{
		if ((num >> i) & 1)
		{
			bit_Count++;
		}
	}
	return bit_Count;
}

int CBitwise::countUnSetBit(int num)
{
	int bit_Count = 0;
	int bitsRequire = sizeof(int) * 8;
	for (int i = 0; i < bitsRequire; i++)
	{
		if (!((num >> i) & 1))
		{
			bit_Count++;
		}
	}
	return bit_Count;
}

int* CBitwise::decimalToBinary(int num)
{
	int bitsRequire = sizeof(int) * 8;
	int arr[sizeof(int) * 8];

	while (--bitsRequire >= 0)
	{
		arr[bitsRequire] = num & 1;
		num >>= 1;
	}
	return arr;
}

void CBitwise::Swap(int *num1 , int *num2)
{
	int x = *num1 ^ *num2;
	*num1 = x ^ *num1;
	*num2 = x ^ *num2;

	/*
	*num1^=*num2;
	*num2 = *num1 ^ *num2;
	*num1 = *num1^*num2;
	*/
//https://codeforwin.org/2016/01/c-program-to-swap-two-numbers-using-bitwise-operator.html
}

bool CBitwise::isEven(int num)
{
	if (num & 1)
	{
		return false;
	}
	
	return true;

	//https://codeforwin.org/2016/01/c-program-to-check-even-or-odd-using-bitwise-operator.html
}
