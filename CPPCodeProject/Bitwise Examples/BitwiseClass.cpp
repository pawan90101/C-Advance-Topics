/*
File Name:		BitwiseClass.cpp
Created By:		Pawan Kumar
Date:			31-8-2019  06:16 PM
Last Modified:
Desc:
Usage:
Copyright (c)2019 Pawan90101@gmail.com
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