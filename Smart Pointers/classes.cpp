//Tecumseh McMullin CSC275
//This is the cpp file for all of the classes for SmartPointers.cpp


#include "classes.h" //This includes the classes.h header file because this holds the class function methods.
#include "SmartPointers.h" //This includes the SmartPointers.h header file so I could use functions that I have created.
#include <iostream> //This includes the iostream library for input and output.
#include <memory> //This includes the memory library which adds smart pointers.
#include <cstdlib>  //This includes the cstdlib library, which allows pausing.
using namespace std; //This tells the program that we are using namespace std so we don't have to write it all the time.

//This is the constructor method for the Pointers class.
Pointers::Pointers() {
	//This is an output for the demonstration.
	cout << "Pointer Created" << endl;
}

//This is the deconstructor method for the Pointers class.
Pointers::~Pointers() {
	//This is an output for the demonstration.
	cout << "Pointer Destroyed" << endl;
}