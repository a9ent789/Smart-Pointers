//Tecumseh McMullin CSC275
//This is the cpp file for all of the functions for SmartPointers.cpp

#include "classes.h" //This includes the classes.h header file because this holds the class function methods.
#include "SmartPointers.h" //This includes the SmartPointers.h header file so I could use functions that I have created.
#include <iostream> //This includes the iostream library for input and output.
#include <memory> //This includes the memory library which adds smart pointers.
#include <cstdlib>  //This includes the cstdlib library, which allows pausing.
using namespace std; //This tells the program that we are using namespace std so we don't have to write it all the time.

//This is the pointerDem() function it returns nothing but its purpose is to create a unique smart pointer for the Pointers class so the user can see what happens.
void pointerDem() {

	//This is a unique pointer called P1 of the Pointers class.
	unique_ptr<Pointers> P1(new Pointers());

	//This pauses the output so that the user can take time reading and then continue when they are ready.
	system("pause");

	//This is output explaining the demonstration and what is happening.
	cout << "As you can see it created the object called P1" << endl;
	cout << "Now when you continue it will destroy the object P1 and output the message \"Pointer Destroyed\"" << endl;
	cout << "But the function that this is running in \"pointerDem()\" doesn't have the deconstructor ~Pointers() in it, so the function isn't the one deconstructing." << endl;
	cout << "What is happening is that the smart pointer is removed because it is a local variable of the function pointerDem()" << endl;
	cout << "Since it is a local variable when the function ends it deconstructs the object P1" << endl;
	
	//This pauses the output so that the user can take time reading and then continue when they are ready.
	system("pause");
}

//This is the demonstration() function it takes a user input to see if they want the demonstration or not.
void demonstration() {
	//Declaring local variables for the demonstration() function.
	bool error = true;
	char userInput;

	//This is a while loop that constantly checks to see if the user inputed a valid response.
	while (error == true)
	{
		//This is the input from the user for the switch statement.
		cin >> userInput;

		//This is a switch statement that takes userInput to decide what happens.
		switch (userInput)
		{
			//In the case they put y, it will explain the first part of the demonstration.
		case 'y' | 'Y':
			
			//This is the output explaining the demonstration.
			cout << "By showing the demonstration this will open a function that will create a smart pointer." << endl;
			cout << "The syntax in this case is unique_ptr<Pointers> P1(new Pointers());" << endl;
			cout << "This creates a new Pointers object called P1" << endl;
			cout << "When it is created it will output a message \"Pointer Created\"" << endl;
			
			//This pauses the output so that the user can take time reading and then continue when they are ready.
			system("pause");

			//This runs the pointerDem() function for the demonstration.
			pointerDem();

			//This changes error to false so that the loop can be exited.
			error = false;

			//This breaks out of the switch statement.
			break;

			//In the case they put n, it will break the loop and continue.
		case 'n'|'N':

			//This changes error to false so that the loop can be exited.
			error = false;

			//This breaks out of the switch statement.
			break;

			//This is the default case if they didn't put in a valid input.
		default:

			//This tells the user what they did wrong.
			cout << "Please enter a valid input!" << endl;

			//This breaks out of the switch statment.
			break;
		}
	}
}

//This is the Smart() function it explains smart pointers to the user.
void Smart() {

	//This is the output explaining smart pointers.
	cout << "Smart pointers are similar to regular pointers, but there purpose is more in debth." << endl;
	cout << "Smart pointers are a wrapper class of pointers." << endl;
	cout << "This means that they can use primitive data types as objects." << endl;
	cout << "They are used so that class memory allocation can be seemless and helps keep the program from having memory leaks." << endl;
	cout << "Smart pointers are also different from normal pointers because it destroyes the allocated memory, then it frees it then deallocates it." << endl;
	cout << "This way the memory can be used again." << endl;
}

//This is the unique() function, it explains unique pointers to the user and runs the demonstration.
void unique() {

	//This is the output explaining unique pointers.
	cout << "Unique pointers will be special and have a demonstration along with the description." << endl;
	cout << "The syntax is unique_ptr." << endl;
	cout << "The unique pointer stores one pointer only." << endl;
	cout << "You can assign another object only if you remove the current object connected to the smart pointer." << endl;
	cout << "pros                            cons" << endl;
	cout << "____                            ____" << endl;
	cout << "automatic resource cleanup      only one pointer per object" << endl;

	//This is prompting the user for an input for the demonstration.
	cout << "Would you like to see the demonstration now? y/n" << endl;

	//This runs the demonstration() function.
	demonstration();
}

//This is the shared() function, it explains shared pointers to the user.
void shared() {

	//This is the output explaining shared pointers to the user.
	cout << "The shared pointer uses the syntax shared_ptr." << endl;
	cout << "The shared pointer allows multiple pointers to point to the same object." << endl;
	cout << "The shared pointer also gets to have a reference counter that can tell the user how many pointers are on a single object." << endl;
	cout << "There is syntax for this as well it is \"use_count()\"" << endl;
	cout << "pros                                              cons" << endl;
	cout << "____                                              ____" << endl;
	cout << "reference counter                                 Can end in deadlock" << endl;
	cout << "last shared pointer on an object disposes it      Can get more confusing then unique pointers" << endl;
	cout << "Multiple pointers for one object" << endl;
}

//This is the weak() function, it explains weak pointers to the user.
void weak() {

	//This is the output explaining weak pointers to the user.
	cout << "The weak pointer uses the syntax weak_ptr." << endl;
	cout << "They are very similar to the shared pointer." << endl;
	cout << "The differenct is that there isn't a reference counter." << endl;
	cout << "This is to help keep the program from forming a deadlock when a pointer holding an object requests another object." << endl;
	cout << "pros                                 cons" << endl;
	cout << "____                                 ____" << endl;
	cout << "Keeps deadlock from happening        Can get more confusing then unique pointers" << endl;
	cout << "                                     Can only gain access if the object exists" << endl;
	cout << "                                     doesn't delete the object." << endl;
	cout << "                                     The object can be deleted before the pointer needs to use it." << endl;
	cout << "                                     Cannot dirrectly access the object." << endl;
}

//This is the goodbye() function, it says goodbye to the user.
void goodbye() {
	//This is the output for saying goodbye.
	cout << "Thank you for training with the jedi council. Goodbye." << endl;
}

//This is the decision() function, it takes the user input and runs the function accordingly.
void decision() {

	//Declaring local variables for the decision() function.
	int userChoice;
	bool error = true;

	//This is a while loop that makes sure the user inputs a valid input.
	while (error == true)
	{
		//This takes input from the user for the switch case statement.
		cin >> userChoice;

		//This is a switch case statement that uses userInput to run the appropriate function.
		switch (userChoice)
		{
			//This is the case that they inputed 1 and want to learn about smart pointers in general.
		case 1:
			//This runs the Smart() function.
			Smart();
			//This changes error to false so that the loop can be exited.
			error = false;
			//This breaks out of the switch statement.
			break;

			//This is the case that they inputed 2 and want to learn about unique pointers.
		case 2:
			//This runs the unique() function.
			unique();
			//This changes error to false so that the loop can be exited.
			error = false;
			//This breaks out of the switch statement.
			break;

			//This is the case that they inputed 3 and want to learn about shared pointers.
		case 3:
			//This runs the shared() function.
			shared();
			//This changes error to false so that the loop can be exited.
			error = false;
			//This breaks out of the switch statement.
			break;

			//This is the case that they inputed 4 and want to learn about weak pointers.
		case 4:
			//This runs the weak() function.
			weak();
			//This changes error to false so that the loop can be exited.
			error = false;
			//This breaks out of the switch statement.
			break;

			//This is the case that they inputed 5 and want to leave the program.
		case 5:
			//This runs the goodbye() function.
			goodbye();
			//This runs the exit() function and returns 0 to the computer saying that no errors have occured.
			exit(0);
			//This breaks out of the switch statement.
			break;

			//This is the default case if they didn't put in a valid input.
		default:
			//This is the output telling the user that they failed ot input a valid input.
			cout << "please enter a valid input!" << endl;
			//This breaks out of the switch statement.
			break;
		}

	}
}

//This is the menu() function it outputs the menu for the user so that they know what to input.
void menu() {
	//This is the output for the menu that promptes the user for an input.
	cout << "There are 3 smart pointers that you need to be aware of along with the general information of smart pointers." << endl;
	cout << "Please enter the number that is associated with your selection of what you would like to learn." << endl;
	cout << "1. Smart Pointers." << endl;
	cout << "2. Unique Pointers." << endl;
	cout << "3. Shared Pointers." << endl;
	cout << "4. Weak Pointers." << endl;
	cout << "5. Exit" << endl;

	//This runs the decision input.
	decision();
}