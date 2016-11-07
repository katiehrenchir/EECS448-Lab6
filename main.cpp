/**
*	@author Katie Hrenchir
*	@date November 6, 2016
, *	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
//#include "LinkedListOfInts.h"
#include "TestSuite.h"

int main(int argc, char** argv)
{
	TestSuite myTester ;
	myTester.runTests();

	std::cout << "\n\n\nTests completed\n\n\n";
	
	return (0);

}

