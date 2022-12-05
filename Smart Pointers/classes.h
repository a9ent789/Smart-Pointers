//Tecumseh McMullin CSC275
//This is the header file for all of the classes for SmartPointers.cpp

#ifndef CLASSES_H //This checks to see if classes.h is defined.
#define CLASSES_H //If it isn't defined it defines classes.h.

#include <iostream> //This includes the iostream library for input and output.
#include <memory> //This includes the memory library which adds smart pointers.
#include <cstdlib>  //This includes the cstdlib library, which allows pausing.
using namespace std; //This tells the program that we are using namespace std so we don't have to write it all the time.

//This class is just for the demonstration it is named Pointers and only has a constructor and deconstructor method.
class Pointers
{
public:
	//Declaring public methods for the Pointers class.
	Pointers();
	~Pointers();
};

//Ends the definition of classes.h.
#endif // !CLASSES.H

