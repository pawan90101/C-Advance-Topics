/*
File Name:		main.cpp
Created By:		Pawan Kumar
Date:			31-8-2019  06:17 PM
Last Modified:
Desc:
Usage:
Copyright (c)2019 Pawan90101@gmail.com
*/

#include "IncludeAllHeaderOnce.h"

int main(int args, char *argv[])
{
	CBitwise cb;
	int msbset = cb.setBit(12,2);
	cout << msbset;
	return 0;
}
