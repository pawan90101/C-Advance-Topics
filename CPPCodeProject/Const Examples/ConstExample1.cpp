/*
File Name:		ConstExample1.cpp
Created By:		Pawan Kumar
Date:			30-8-2019  12:40 PM
Last Modified:
Desc:
Usage:
Copyright (c)2019 Pawan90101@gmail.com
*/



/* const
	A compile time constraint that an object can not be modified
*/
int main(int argc , char *argv[])
{
	int i = 1;

	const int *p1 = &i;  
	/*	data is const, pointer is not
		*p1 = 1; (ERROR: because data which is pointed by p1 is const)
		p1++ ; (OK: because pointer p1 itself is not const)
	*/

	int* const p2 = &i;
	/*	pointer is const, data is not
		*p1 = 1; (OK: because data which is pointed by p1 is not const)
		p1++ ; (ERROR: because pointer p1 itself is const)
	*/


	const int* const p3 = &i;
	/*	data and pointer are both const
		*p1 = 1; (ERROR: because data which is pointed by p1 is const)
		p1++ ; (ERROR: because pointer p1 itself is const)
	*/


	// Triky one
	int const *p4 = &i;   // data is const, pointer is not

	return 1;

}

/*
Note:
	If const is on the left  of *, data is const
	If const is on the right of *, pointer is const
*/

/*
  Why use const:
		a.) Guard against inadvertent write to the variable.
		b.) Self documenting
		c.) Enable compiler to do more optimiztion, making code tighter.
		d.) const usually means the variable is put in ROM. 
*/