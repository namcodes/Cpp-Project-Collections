//Date Created : June 10 - 2022
//Name : Noel Mallari
//Facebook : https://facebook.com/noel.mallari.5638137

#include <iostream> //The standard includes of input and output library funtions. It provides cin and cout methods for reading from input and writing to output respectively.
#include <string>

//We have a 4 Types of Data types in C++ Language.
//1. Basic Data Type = int, char, float, double, string, etc.
//2. Derived Data Type = array, pointer, etc.
//3. Enumeration Data Type = enum.
//4. User Defined Data Type = structure.
//====================================================
// Sample basic data types
// int = 10; // int = integer.
// float = 10.2 // float = Floating point.
// double = 10.0 //double = decimal.
// char = 'A' // char = character.
// string = "A" // string = letter.

using namespace std;

//Basic output
void hello_world() {
	system("cls");
	cout << "Hello World" << endl; // endl = endline if you want to break the line.
}

//Basic input and output
void basic_input() {
	system("cls");
	string name = ""; //Iniitializing name variable as String.
	int age = 0; //Initializing age variable as integer.
	cin.clear();
	cin.sync();
	cout << "Enter your name : "; //Asking for your full name.
	getline(cin, name);//I recommend to use getline for string input  because it can get also the space you enter.

	cout << "Enter your age : "; //Asking for your age.
	cin >> age; //I use cin for age input because it is not string lols.

	//cout = It givis you an output
	cout << "\nWelcome to Basic C++ Program" << endl;
	cout << "Hi " << name << " " << endl;
	cout << "Your age is " << age << " " << endl;
}

//I think you know what is input and output now.
//In C++ we have control statements.
//1. If and else
//2. Switch
//3. For Loop
//4. While Loop
//5. Do-While Loop
//6. Break
//7. Continue
//8. Goto.

//Sample of If and Else with even and odd number.
void if_else() {
	system("cls");
	int num = 0;

	cout << "Enter your number : ";
	cin >> num;

	if(num % 2 == 0 ) {
		cout << "It is even number" << endl;
	} else {
		cout << "It is odd number" << endl;
	}
}

//Sample of Switch statement with simple calculator.
void calculator() {
	system("cls");
	int num1 = 0;
	int num2 = 0;
	int menu = 0;
	int addition = 0;
	int subtraction = 0;
	int multiplication = 0;
	int division = 0;

	cout << "[1] = Addition" << endl;
	cout << "[2] = Subtraction" << endl;
	cout << "[3] = Multiplication" << endl;
	cout << "[4] = Division" << endl;

	cout << "\nChoose menu : "; //So what \n means? it means new line lol.
	cin >> menu;

	switch(menu) {
		case 1: {
			cout << "\nYou choosed Addition" << endl;
			cout << "Enter number : ";
			cin >> num1;
			cout << "Enter number : ";
			cin >> num2;

			addition = num1 + num2;//Get the sum of 2 numbers.

			cout << "\nThe addition of [" << num1 << "] and [" << num2 << "] is " << addition << endl;
			break;
		}

		case 2: {
			cout << "\nYou choosed Subtraction" << endl;
			cout << "Enter number : ";
			cin >> num1;
			cout << "Enter number : ";
			cin >> num2;

			subtraction = num1 - num2;//Get the subtraction of 2 numbers.

			cout << "\nThe subtraction of [" << num1 << "] and [" << num2 << "] is " << subtraction << endl;
			break;
		}

		case 3: {
			cout << "\nYou choosed Multiplication" << endl;
			cout << "Enter number : ";
			cin >> num1;
			cout << "Enter number : ";
			cin >> num2;

			multiplication = num1 * num2;//Get the multiplication of 2 numbers.

			cout << "\nThe multiplication of [" << num1 << "] and [" << num2 << "] is " << multiplication << endl;
			break;
		}

		case 4: {
			cout << "\nYou choosed Division" << endl;
			cout << "Enter number : ";
			cin >> num1;
			cout << "Enter number : ";
			cin >> num2;

			division = num1 / num2;//Get the multiplication of 2 numbers.

			cout << "\nThe division of [" << num1 << "] and [" << num2 << "] is " << division << endl;
			break;
		}
		default: {
			cout << "[" << menu << "] is not found, Try again." << endl;
			break;
		}
	}
}

//Sample of For loop statement with counting
void for_loop() {
	system("cls");
	int number = 0;

	cout << "Enter number : ";
	cin >> number;

	for(int i = 0; i <= number; i++) {
		cout << i << endl;
	}
}
//Sample of While loop statement with counting 1 to 100.
void while_loop() {
	system("cls");
	int number = 0;

	cout << "Enter number : "; //enter number from 1 to 30
	cin >> number;

	while(number <= 100) {
		cout << number << endl;
		number++;
	}
}
//Sample of Do-While loop with asking your age.
void do_while_loop() {
	system("cls");
	int age = 0;
	char menu;

	do {
		cout << "Enter your age : ";
		cin >> age;

		cout << "Your age is " << age << endl;
		cout << "\nWould you like to continue? [y/n]" << endl;
		cout << "answer : ";
		cin >> menu;
		cout << endl;

	} while(menu == 'y' || menu == 'Y');
}
//Sample of Break statement
void _break() {
	system("cls");
	int number = 0;
	cout << "Enter number : ";
	cin >> number;

	for(int i = 1; i <= number; i++) {
		if(i == 6) {
			cout << "Break counting" << endl;
			break; // The counting will end at 5
		}
		cout << i << endl;
	}
}
//Sample of Continue Statement
void _continue() {
	system("cls");
	int number = 0;
	cout << "Enter number : ";
	cin >> number;

	for(int i = 1; i <= number; i++) {
		if(i == 6) {
			cout << "Continue counting" << endl;
			continue; // The counting will end at 5
		}
		cout << i << endl;
	}
}
//Sample of Goto Statement
void _goto() {
	system("cls");
	int age = 0;

ineligible:
	cout << "You are not eligible to vote!\n" << endl;

	cout << "Enter age : ";
	cin >> age;

	if(age < 18) {
		goto ineligible; //Executing goto statement.
	} else {
		cout << "You are eligible to vote!" << endl;
	}

}
//Main function of the program.
int main() {
	int menu = 0;
	char choice;

	do {
		system("cls");
		cout << "Hi welcome to basic c++ program!" << endl;
		cout << "===================================="<< endl;
		cout << "[1] = Basic output" << endl;
		cout << "[2] = Basic input" << endl;
		cout << "[3] = If and Else" << endl;
		cout << "[4] = Switch" << endl;
		cout << "[5] = For Loop" << endl;
		cout << "[6] = While Loop" << endl;
		cout << "[7] = Do-while Loop" << endl;
		cout << "[8] = Break Statement" << endl;
		cout << "[9] = Continue Statement" << endl;
		cout << "[10] = Goto Statement" << endl;
		cout << "===================================="<< endl;
		cout << "\nEnter menu : ";
		cin >> menu;

		switch(menu) {
			case 1: {
				hello_world();
				cout << "\nWould you like to continue? [y/n]" << endl;
				cout << "Your choice : ";
				cin >> choice;
				cout << endl;
				break;
			}
			case 2: {
				basic_input();
				cout << "\nWould you like to continue? [y/n]" << endl;
				cout << "Your choice : ";
				cin >> choice;
				cout << endl;
				break;
			}
			case 3: {
				if_else();
				cout << "\nWould you like to continue? [y/n]" << endl;
				cout << "Your choice : ";
				cin >> choice;
				cout << endl;
				break;
			}
			case 4: {
				calculator();
				cout << "\nWould you like to continue? [y/n]" << endl;
				cout << "Your choice : ";
				cin >> choice;
				cout << endl;
				break;
			}
			case 5: {
				for_loop();
				cout << "\nWould you like to continue? [y/n]" << endl;
				cout << "Your choice : ";
				cin >> choice;
				cout << endl;
				break;
			}
			case 6: {
				while_loop();
				cout << "\nWould you like to continue? [y/n]" << endl;
				cout << "Your choice : ";
				cin >> choice;
				cout << endl;
				break;
			}
			case 7: {
				do_while_loop();
				cout << "\nWould you like to continue? [y/n]" << endl;
				cout << "Your choice : ";
				cin >> choice;
				break;
			}
			case 8: {
				_break();
				cout << "\nWould you like to continue? [y/n]" << endl;
				cout << "Your choice : ";
				cin >> choice;
				cout << endl;
				break;
			}
			case 9: {
				_continue();
				cout << "\nWould you like to continue? [y/n]" << endl;
				cout << "Your choice : ";
				cin >> choice;
				cout << endl;
				break;
			}
			case 10: {
				_goto();
				cout << "\nWould you like to continue? [y/n]" << endl;
				cout << "Your choice : ";
				cin >> choice;
				cout << endl;
				break;
			}
			default: {
				cout << "[" << menu << "] is not found, Please try again." << endl;
				cout << "\nWould you like to continue? [y/n]" << endl;
				cout << "Your choice : ";
				cin >> choice;
				cout << endl;
				break;
			}
		}
	} while(choice == 'y' || choice == 'Y');
	return 0;
}