//Tecumseh McMullin CSC275
//This is the main file that holds the main() function. This program is to teach a user about smart pointers in c++.

#include "classes.h" //This includes the classes.h header file because this holds the class function methods.
#include "SmartPointers.h" //This includes the SmartPointers.h header file so I could use functions that I have created.
#include <iostream> //This includes the iostream library for input and output.
#include <memory> //This includes the memory library which adds smart pointers.
#include <cstdlib>  //This includes the cstdlib library, which allows pausing.
using namespace std; //This tells the program that we are using namespace std so we don't have to write it all the time.

//This is the main() function it controls the entire program and is needed to run everything.
int main() {
	//This is the entro output for the program.
	cout << "This is a training program to teach young padawans about smart pointers." << endl;

	//This is a while statement that keeps the program going forever until the exit option is chosen.
	while (true)
	{
		//This runs the menu() function.
		menu();
	}

	//This returns 0 to the computer saying that no errors have occured.
	return 0;
}