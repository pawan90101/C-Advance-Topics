/*
File Name:		BitwiseClass.h
Created By:		Pawan Kumar
Date:			31-8-2019  06:16 PM
Last Modified:
Desc:
Usage:
Copyright (c)2019 Pawan90101@gmail.com
*/

#pragma once

class CBitwise
{
public:
	bool isMSBSet(int num);
	bool isLSBSet(int num);
	bool isBitSet(int num, int bitPosition);
	int getBit(int num , int bitNo);//Returns only 0 or 1;
	int setBit(int num, int bitPosition); 
	int clearBit(int num, int bitPosition);
	int toggleBit(int num, int bitPosition);
	int getHighestOrderBitSet(int num);
	int getLowestOrderBitSet(int num);
	int countSetBit(int num);
	int countUnSetBit(int num);
	int* decimalToBinary(int num);
	void Swap(int *num1, int *num2);
	bool isEven(int num);
};