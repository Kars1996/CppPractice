#include <iostream>
using namespace std;


// Project to learn C++ And its use cases


int main() {
	// Define the things i use
	float calculatedNum;
	char operation;
	float calculatedNum2;

	cout << "Select a number > "; // Print
	cin >> calculatedNum; // Take Input and save it to variable

	cout << "Select a Calculation (x | / | + | -) > "; // Print
	cin >> operation; // Take Input and save it to variable
	
	cout << "Select a second number > "; // Print
	cin >> calculatedNum2; // (you guessed it) Take input and save it to variable

	if (operation == 'x') { // Check what the operation is
		cout << "\n" << (calculatedNum * calculatedNum2); // Print Answer
		return 0; // Make sure the code ends 
	}

	if (operation == '/') { // Check what the operation is
		cout << "\n" << (calculatedNum / calculatedNum2); // Print Answer
		return 0; // Make sure the code ends
	}

	if (operation == '+') { // Check what the operation is
		cout << "\n" << (calculatedNum + calculatedNum2); // Print Answer
		return 0; // Make sure the code ends
	}

	if (operation == '-') { // Check what the operation is
		cout << "\n" << (calculatedNum - calculatedNum2); // Print Answer
		return 0; // Make sure the code ends
	}

	else { // In the case that you haven't used a good one
		cout << "\nYou selected a function that does not exisist";
		return 1; // Error with a cool return
	}
	
	return 0; // Technically unesecary but idc
}