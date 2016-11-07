/**
*	@author Katie Hrenchir
*	@date November 2, 2016
*	@brief A header file for Test Suite class
*/

#ifndef TESTSUITE_H
#define TESTSUITE_H

#include "LinkedListOfInts.h"

#include <vector>

class TestSuite
{
	public:
	/** @pre None.
	*   @post An empty TestSuite object is created.
	*/
	TestSuite();

	/** @pre None.
	*   @post None.
	*/
	void runTests();

	/** @pre None.
	*   @post Prints tests for isEmpty() and results to the console.
	*   @return true any of the individual tests failed
	*/
	bool testIsEmpty();

	/** @pre None.
	*   @post Prints tests for size() and results to the console.
	*   @return true any of the individual tests failed
	*/
	bool testSize();

	/** @pre None.
	*   @post Prints tests for search() and results to the console.
	*   @return true any of the individual tests failed
	*/
	bool testSearch();

	/** @pre None.
	*   @post Prints tests for addBack() and results to the console.
	*   @return true any of the individual tests failed
	*/
	bool testAddBack();

	/** @pre None.
	*   @post Prints tests for addFront() and results to the console.
	*   @return true any of the individual tests failed
	*/
	bool testAddFront();

	/** @pre None.
	*   @post Prints tests for removeBack() and results to the console.
	*   @return true any of the individual tests failed
	*/
	bool testRemoveBack();

	/** @pre None.
	*   @post Prints tests for removeFront() and results to the console.
	*   @return true any of the individual tests failed
	*/
	bool testRemoveFront();

	/** @pre None.
	*   @post Prints a list from the values of a LinkedListOfInts object.
	*/
    void printList(LinkedListOfInts list);


	private:

};


#endif
