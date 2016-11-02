/**
*	@author Katie Hrenchir
*	@date November 2, 2016
*	@file TestSuite.cpp
*/

//constructor calls each and every method to test everything
//don't forget destructor

#include "TestSuite.h"
#include <iostream>

TestSuite::TestSuite()
{


}

void TestSuite::runTests()
{

	testIsEmpty();
	testSize();
	testSearch();	


}



bool TestSuite::testIsEmpty()
{

	bool testFailed = false;
	int expVal =0;
	int tempSize;
	LinkedListOfInts testableList;


	std::cout<<"\nTesting isEmpty() \n";
	
	//checks the size of a brand new, unused list
	tempSize = testableList.size();
	std::cout<<"\nChecking size of newly created list: "<<tempSize;
	if(tempSize != 0) {
		std::cout<<"\n \033[1;31m TEST FAILED. Expected value: " << expVal << " \033[0m\n";
		testFailed = true;
	} 

//test if m_front is pointing to null
	

//test if removing from the front or back returns false, if so the list is empty

	return testFailed;

}

bool TestSuite:: testSize()
{

	bool testFailed = false;
	int expVal =0;
	int tempSize;
	LinkedListOfInts testableList;

	std::cout<<"\n\n\nTesting size() \n";
	
	//checks the size of a brand new, unused list
	tempSize = testableList.size();
	std::cout<<"\nChecking size of newly created list: "<<tempSize;
	if(tempSize != 0) {
		std::cout<<"\n \033[1;31m TEST FAILED. Expected value: " << expVal << " \033[0m\n";
		testFailed = true;
	} 
	
	//checks the size of a list after adding two items to the front
	testableList.addFront(12);
	testableList.addFront(10);
	tempSize = testableList.size();
	std::cout<<"\nChecking size after adding two items to the front: "<<tempSize;
	if(tempSize != 2) {
		std::cout<<"\n \033[1;31m TEST FAILED. Expected value: " << expVal+2 << " \033[0m\n";
		testFailed = true;
	} else {
		expVal+=2;
	}

	//checks the size of a list after adding two items to the back
	testableList.addBack(12);
	testableList.addBack(10);
	tempSize = testableList.size();
	std::cout<<"\nChecking size after adding two items to the back: "<<tempSize;
	if(tempSize != 4) {
		std::cout<<"\n \033[1;31m TEST FAILED. Expected value: " << expVal+2 << " \033[0m\n";
		testFailed = true;
	} else{
		expVal +=2;
	}

	//checks the size of a list after removing one item from the front
	testableList.removeFront();
	tempSize = testableList.size();
	std::cout<<"\nChecking size of list after removing one value from the front: "<<tempSize;
	if(tempSize != 3) {
		std::cout<<"\n \033[1;31m TEST FAILED. Expected value: " << expVal-1 << " \033[0m\n";
		testFailed = true;
	} else{
		expVal -=1;
	}

	//checks the size of a list after removing one item from the back
	testableList.removeBack();
	tempSize = testableList.size();
	std::cout<<"\nChecking size of list after removing one value from the back: "<<tempSize;
	if(tempSize != 2) {
		std::cout<<"\n \033[1;31m TEST FAILED. Expected value: " << expVal-1 << " \033[0m\n";
		testFailed = true;
	} else {
		expVal -=1;
	}

	delete testableList;

	return testFailed;


}

bool TestSuite:: testSearch()
{
	return true;


}

bool  TestSuite::testAddBack()
{

	bool testFailed = false;
	int expVal =0;
	int tempSize;
	LinkedListOfInts testableList;

	std::cout<<"\n\n\nTesting addBack() \n";
	
	//add to back of empty list, check m_front's value



	//add to back of populated list, iterate to the last node's value



	tempSize = testableList.size();
	std::cout<<"\nChecking size of newly created list: "<<tempSize;
	if(tempSize != 0) {
		std::cout<<"\n \033[1;31m TEST FAILED. Expected value: " << expVal << " \033[0m\n";
		testFailed = true;
	} 
	
	return testFailed;

}

bool  TestSuite::testAddFront()
{

	//add to the front of empty list, check m_front's value
	//and check that it's pointing to nullptr

	//add to the front of populated list, check m_front's value
	//and check that the old m_front is now pointing to the new one


	return true;

}
bool  TestSuite::testRemoveBack()
{
	return true;

}
bool  TestSuite::testRemoveFront()
{
	return true;

}
