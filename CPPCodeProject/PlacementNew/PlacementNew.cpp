/*
File Name:		PlacementNew.cpp
Created By:		Pawan Kumar
Date:			4-9-2019  04:51 PM
Last Modified:
Desc:
Usage:
Copyright (c)2019 Pawan90101@gmail.com
*/

#include "../IncludeAllHeaderOnce.h"

Base::Base()
{
	int i;
	cout << "Base constructed \n";
}

Base::~Base()
{
	cout << "Base Dectructed \n";
}

//int main(int args, char *argv[])
//{
	/*case 1;
	Base().~Base();//don't do this it's to dengorus;

	output:
	Base constructed
	Base Dectructed
	Base Dectructed
	*/

	/*case 2:

	Base obj;
	cout << "Something \n";

	output:
	Base constructed
	Something
	Base Dectructed

	*/

	/*case 3:

	Base()
	cout << "Something \n";

	Output:
	Base constructed
	Base Dectructed// just because it consturcted temperory Base object
	Something
	*/

	/*
	case 4: Use of placement new

	char *memory = new char(5 * sizeof(Base));

	//createing an object 10 time compiler switch the user to kernel and lot of calculation for alloted memory so better to get all memory at once
	//new is doing to things first say to kernel please allot a memory and constuct the object;


	//Use of placement new
	Base *obj1 = new (&memory[0])Base();
	Base *obj2 = new (&memory[4])Base();
	Base *obj3 = new (&memory[8])Base();
	Base *obj4 = new (&memory[12])Base();
	Base *obj5 = new (&memory[16])Base();

	//here is the case whare we use destructor explicitly
	obj1->~Base();
	obj2->~Base();
	obj3->~Base();
	obj4->~Base();
	obj5->~Base();

	delete[] memory;

	output:
	Base constructed
	Base constructed
	Base constructed
	Base constructed
	Base constructed
	Base Dectructed
	Base Dectructed
	Base Dectructed
	Base Dectructed
	Base Dectructed


	return 0;
	*/
//}