/**
*	@author Katie Hrenchir
*	@date November 2, 2016
*	@file TestSuite.cpp
*/

//don't forget destructor

#include "TestSuite.h"
#include <iostream>

TestSuite::TestSuite()
{


}

TestSuite::~TestSuite()
{
	std::cout<<"TestSuite destructor called\n";
}

void TestSuite::runTests()
{

	testIsEmpty();
	testSize();
	testSearch();
    testAddBack();
    testAddFront();
    testRemoveBack();
    testRemoveFront();

}



bool TestSuite::testIsEmpty()
{

	bool testFailed = false;
	int tempSize;
	LinkedListOfInts testableList;


	std::cout<<"\nTesting isEmpty() ";
	
	//checks the size of a brand new, unused list
	tempSize = testableList.size();
	std::cout<<"\nChecking size of newly created list: ";
	if(tempSize != 0) {
		std::cout<<" \033[1;31m FAILED \033[0m";
		testFailed = true;
	} else {
        std::cout<<"PASSED";
    }

//test if m_front is pointing to null
//can't access pointers bc LinkedListOfInts has no getters or setters
//m_front is inaccessible from the outside


    bool removeVal; 
   //test if removing from the front or back returns false, if so the list is empty

    removeVal = testableList.removeBack();
    std::cout<<"\nChecking if removeBack returns false on empty list: ";
	if(removeVal) {
		std::cout<<" \033[1;31m FAILED \033[0m";
		testFailed = true;
	} else {
        std::cout<<"PASSED";
    }

    removeVal = testableList.removeFront();
    std::cout<<"\nChecking if removeFront returns false on empty list: ";
	if(removeVal) {
		std::cout<<" \033[1;31m FAILED \033[0m";
		testFailed = true;
	} else {
        std::cout<<"PASSED";
    }


//test on non empty list to make sure it answers false
	testableList.addFront(12);
	tempSize = testableList.size();
	std::cout<<"\nChecking size of list with 1 item: ";
	if(tempSize != 1) {
		std::cout<<" \033[1;31m FAILED \033[0m";
		testFailed = true;
	} else {
        std::cout<<"PASSED";
    }




	return testFailed;

}

bool TestSuite:: testSize()
{

	bool testFailed = false;
	int expVal =0;
	int tempSize;
	LinkedListOfInts testableList;

	std::cout<<"\n\n\nTesting size() ";
	
	//checks the size of a brand new, unused list
	tempSize = testableList.size();
	std::cout<<"\nChecking size of newly created list: ";
	if(tempSize != 0) {
		std::cout<<" \033[1;31m FAILED \033[0m";
		testFailed = true;
	} else {
        std::cout<<"PASSED";
    }
	
	//checks the size of a list after adding two items to the front
	testableList.addFront(12);
	testableList.addFront(10);
	tempSize = testableList.size();
	std::cout<<"\nChecking size after adding two items to the front: ";
	if(tempSize != 2) {
		std::cout<<" \033[1;31m FAILED \033[0m";
		testFailed = true;
	} else {
        std::cout<<"PASSED";
		expVal+=2;
	}

	//checks the size of a list after adding two items to the back
	testableList.addBack(12);
	testableList.addBack(10);
	tempSize = testableList.size();
	std::cout<<"\nChecking size after adding two items to the back: ";
	if(tempSize != 4) {
		std::cout<<" \033[1;31m FAILED \033[0m";
		testFailed = true;
	} else{
        std::cout<<"PASSED";
		expVal +=2;
	}

	//checks the size of a list after removing one item from the front
	testableList.removeFront();
	tempSize = testableList.size();
	std::cout<<"\nChecking size of list after removing one value from the front: ";
	if(tempSize != 3) {
		std::cout<<" \033[1;31m FAILED \033[0m";
		testFailed = true;
	} else{
        std::cout<<"PASSED";
		expVal -=1;
	}

	//checks the size of a list after removing one item from the back
	testableList.removeBack();
	tempSize = testableList.size();
	std::cout<<"\nChecking size of list after removing one value from the back: ";
	if(tempSize != 2) {
		std::cout<<" \033[1;31m FAILED \033[0m";
		testFailed = true;
	} else {
        std::cout<<"PASSED";
		expVal -=1;
	}

	return testFailed;


}

bool TestSuite:: testSearch()
{

    bool testFailed = false;
    LinkedListOfInts testableList;
	std::cout<<"\n\n\nTesting search() ";

    bool valFound;
   //searches the list while empty, expected value is false
   valFound = testableList.search(12);
	std::cout<<"\nSearches for value in an empty list: ";
	if(valFound) {
		std::cout<<" \033[1;31m FAILED \033[0m";
		testFailed = true;
	} else {
        std::cout<<"PASSED";
	}

    //searches a list of 2 for a present value
	testableList.addBack(12);
	testableList.addBack(10);
    valFound = testableList.search(1);
	std::cout<<"\nSearches for value not present: ";
	if(valFound) {
		std::cout<<" \033[1;31m FAILED \033[0m";
		testFailed = true;
	} else {
        std::cout<<"PASSED";
	}

    //searches a list of 2 for a present value
    valFound = testableList.search(12);
	std::cout<<"\nSearches for a present value: ";
	if(!valFound) {
		std::cout<<" \033[1;31m FAILED \033[0m";
		testFailed = true;
	} else {
        std::cout<<"PASSED";
	}

    return testFailed;


}

bool  TestSuite::testAddBack()
{

	bool testFailed = false;
    std::vector<int> contents;
	LinkedListOfInts testableList;

	std::cout<<"\n\n\nTesting addBack() ";

	//add to back of empty list, check m_front's value
	std::cout<<"\nChecking last value of single item list after using addBack(): ";
	testableList.addBack(12);
    contents = testableList.toVector();
    if(contents[contents.size() -1] != 12){
		std::cout<<" \033[1;31m FAILED \033[0m";
		testFailed = true;
	} else {
        std::cout<<"PASSED";
	}

	//add to back of populated list, iterate to the last node's value
	testableList.addBack(14);
	testableList.addBack(13);
	std::cout<<"\nChecking last value of multi item list after using addBack(): ";
    contents = testableList.toVector();
    if(contents[contents.size() -1] != 13){
		std::cout<<" \033[1;31m FAILED \033[0m";
		testFailed = true;
	} else {
        std::cout<<"PASSED";
	}

	return testFailed;

}

bool  TestSuite::testAddFront()
{
	bool testFailed = false;
    std::vector<int> contents;
	LinkedListOfInts testableList;

	std::cout<<"\n\n\nTesting addFront() ";

	//add to front of empty list
	std::cout<<"\nChecking last value of single item list after using addFront(): ";
	testableList.addFront(12);
    contents = testableList.toVector();
    if(contents[0] != 12){
		std::cout<<" \033[1;31m FAILED \033[0m";
		testFailed = true;
	} else {
        std::cout<<"PASSED";
	}

	//add to back of populated list, iterate to the last node's value
	testableList.addFront(14);
	testableList.addFront(13);
	std::cout<<"\nChecking last value of multi item list after using addBack(): ";
    contents = testableList.toVector();
    if(contents[0] != 13){
		std::cout<<" \033[1;31m FAILED \033[0m";
		testFailed = true;
	} else {
        std::cout<<"PASSED";
	}

	return testFailed;

}
bool  TestSuite::testRemoveBack()
{
	bool testFailed = false;
    std::vector<int> contents;
	LinkedListOfInts testableList;

	std::cout<<"\n\n\nTesting removeBack() ";

    bool removed;
    //test if returns false on empty list
    removed = testableList.removeBack();
	std::cout<<"\nChecking the return value when removing from an empty list: ";
    if(removed) {
		std::cout<<" \033[1;31m FAILED \033[0m";
		testFailed = true;
	} else {
        std::cout<<"PASSED";
	}

    //test if returns true on populated list
    testableList.addFront(12);
    removed = testableList.removeBack();
	std::cout<<"\nChecking the return value when removing from a populated list: ";
    if(!removed) {
		std::cout<<" \033[1;31m FAILED \033[0m";
		testFailed = true;
	} else {
        std::cout<<"PASSED";
	}

    //test if value is removed properly on single item list
	std::cout<<"\nRemoving from the back of a single item list: ";
    contents = testableList.toVector();
    if(contents[0] == 12){
		std::cout<<" \033[1;31m FAILED \033[0m";
		testFailed = true;
	} else {
        std::cout<<"PASSED";
	}

    //test if value is removed properly on muli item list	
    testableList.addFront(17);
    testableList.addFront(15);
    testableList.removeBack();
	std::cout<<"\nRemoving from the back of a multi item list: ";
    contents = testableList.toVector();
    if(contents[contents.size() -1] == 12){
		std::cout<<" \033[1;31m FAILED \033[0m";
		testFailed = true;
	} else {
        std::cout<<"PASSED";
	}


    return testFailed;

}
bool  TestSuite::testRemoveFront()
{
    bool testFailed = false;
    std::vector<int> contents;
	LinkedListOfInts testableList;

	std::cout<<"\n\n\nTesting removeFront() ";

    bool removed;
    //test if returns false on empty list
    removed = testableList.removeFront();
	std::cout<<"\nChecking the return value when removing from an empty list: ";
    if(removed) {
		std::cout<<" \033[1;31m FAILED \033[0m";
		testFailed = true;
	} else {
        std::cout<<"PASSED";
	}

    //test if returns true on populated list
    testableList.addFront(12);
    removed = testableList.removeFront();
	std::cout<<"\nChecking the return value when removing from a populated list: ";
    if(!removed) {
		std::cout<<" \033[1;31m FAILED \033[0m";
		testFailed = true;
	} else {
        std::cout<<"PASSED";
	}

    //test if value is removed properly on single item list
	std::cout<<"\nRemoving from the front of a single item list: ";
    contents = testableList.toVector();
    if(contents[0] == 12){
		std::cout<<" \033[1;31m FAILED \033[0m";
		testFailed = true;
	} else {
        std::cout<<"PASSED";
	}

    //test if value is removed properly on muli item list	
    testableList.addFront(17);
    testableList.addFront(15);
    testableList.removeFront();
	std::cout<<"\nRemoving from the front of a multi item list: ";
    contents = testableList.toVector();
    if(contents[0] == 15){
		std::cout<<" \033[1;31m FAILED \033[0m";
		testFailed = true;
	} else {
        std::cout<<"PASSED";
	}

    return testFailed;


}


//used for testing purposes, not called when program runs
void TestSuite::printList(LinkedListOfInts list)
{

    std::cout<<"\n PRINTED LIST\n";
    std::vector<int> contents = list.toVector();
    for(std::size_t i =0, max = contents.size(); i != max; i++) {
        std::cout<<contents[i] << "\n";
     }


}





