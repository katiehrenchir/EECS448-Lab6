#	Author: John Gibbons
#	Date: 2016.10.26


#Add needed Test.o
prog: main.o TestSuite.o
	g++ -g -Wall -std=c++11 main.o LinkedListOfInts.o TestSuite.o -o prog


main.o: main.cpp TestSuite.cpp TestSuite.h
	g++ -g -Wall -std=c++11 -c main.cpp


#Add needed Test.o recipe and compiler command

#Add needed Test.o recipe and compiler command
TestSuite.o : TestSuite.cpp TestSuite.h LinkedListOfInts.h Node.h
	g++ -g -Wall -c TestSuite.cpp --std=c++11

#DON'T delete LinkedList.o!
clean:
	rm main.o TestSuite.o *.*~ prog
