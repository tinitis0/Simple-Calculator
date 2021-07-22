#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	//Defining and initializing variables

	int choice; // this is for the menu where user gets a choice of adding, subtracting, multiplying, dividing and exit.
	int num1, num2, ans; // these variables will be used when user has tp input number 1 and number 2 which then calculates the answer.

	//Header when the program is running

	cout << " Welcome to Arithmetic Calculator Program! \n";
	cout << "========================================== \n";
	cout << "\n"; // empty line to seperate texts on screen.

	// Displays the calculation options for the user 

	cout << "Choose your option:\n";
	cout << "1 = Addition!\n";
	cout << "2 = Subtraction!\n";
	cout << "3 = Mulitplying!\n";
	cout << "4 = Division!\n";
	cout << "5 = Exit! \n";
	cout << "\n";    // empty line to seperate texts on screen.
	cout << "Choice: \n";
	cin >> choice; // this allows users input which is later used as "choice variable". User has to input number between 1 and 5 depending on what calculation they want to do.

	//While loop checks if onr of the options has been entered (number betweeen 1 and 5)

	while (choice < 1 || choice > 5)
	{
		cout << "Please choose one of the option above!\n";
		cout << "Choice: \n";
		cin >> choice;
	}

	switch (choice)
	{
		// Addition case
	case 1:
		cout << "Enter two numbers - \n"; // tells user to input 2 numbers
		cout << "\n"; // gap line to make in less squished together
		cout << "First number: \n"; // tells user to input first number
		cin >> num1; //user inputs the first number
		cout << "Secound number: \n";// tells user to input secound number
		cin >> num2; // user inputs secound number
		ans = num1 + num2; // program adds the 2 numbers together and the sum of them and replaces the "ans" variable 
		cout << "Answer =" << ans; // Answer is presented back to the user
		break; //stops the switch statment from processing fallowing cases below
		
	    // Subtraction
	case 2:
		cout << "Enter two numbers - \n"; //tells user to input 2 numbers
		cout << "\n"; // gap line
		cout << "First number: \n";
		cin >> num1; // first number
		cout << "Secound number:\n";
		cin >> num2; // secound number
		ans = num1 - num2; // program subtracts number 2 from number 1;
		cout << "Answer = " << ans; //Desplays the answer
		break;
		// Multiplying
	case 3:
		cout << "Enter two numbers - \n"; //tells user to input 2 numbers
		cout << "\n"; // gap line
		cout << "First number: \n";
		cin >> num1; // first number
		cout << "Secound number:\n";
		cin >> num2; // secound number
		ans = num1 * num2; // program mutiplys number 1 and number 2;
		cout << "Answer = " << ans; //Desplays the answer
		break;
		// Dividing
	case 4:
		cout << "Enter two numbers - \n"; //tells user to input 2 numbers
		cout << "\n"; // gap line
		cout << "First number: \n";
		cin >> num1; // first number
		cout << "Secound number:\n";
		cin >> num2; // secound number

		//this while loop checks that the secound number is not "0"!
		while (num2 == 0)
		{
			cout << "Secound number cannot be 0 \n"; // shows error message to user saying that secound number cannot be "0"
			cout << "Please enter secound number again: \n"; 
			cin >> num2; // allows user to re enter secound number
		}

		ans = num1 / num2; // divides number 2 from number 1
		cout << "Answer =" << ans; // desplays the answer
		break;

		// exit option if user wants to close the calculator.		
	case 5:

		return 0;			
	}

	cout << "\n";
	system("PAUSE");// pauses the program allowing the user to press any button to close it. 
}
