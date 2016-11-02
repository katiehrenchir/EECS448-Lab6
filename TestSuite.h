/**
*	@author Katie Hrenchir
*	@date November 2, 2016
*	@brief A header file for Test Suite class
*/

#ifndef TESTSUITE_H
#define TESTSUITE_H

#include "LinkedListOfInts.h"

class TestSuite
{
	public:
	TestSuite();

	void runTests();

	bool testIsEmpty();

	bool testSize();

	bool testSearch();

	bool testAddBack();

	bool testAddFront();

	bool testRemoveBack();

	bool testRemoveFront();


	private:

};


#endif
