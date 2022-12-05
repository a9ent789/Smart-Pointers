//Tecumseh McMullin CSC275
//This is the header file for SmartPointers.cpp

#ifndef SMARTPOINTERS_H //This checks to see if SmartPointers.h is defined.
#define SMARTPOINTERS_H //If it isn't defined it defines SmartPointers.h.
#include <iostream> //This includes the iostream library for input and output.
#include <memory> //This includes the memory library which adds smart pointers.
#include <cstdlib>  //This includes the cstdlib library, which allows pausing.
using namespace std; //This tells the program that we are using namespace std so we don't have to write it all the time.

//Declaring functions for other files to use.
void menu();
void decision();
void goodbye();
void weak();
void shared();
void unique();
void Smart();

//Ends the header file definition.
#endif // !SMARTPOINTERS_H

