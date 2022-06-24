#include <iostream>

using namespace std;

int main()
{
	string wcome, info, repeat;
	int num1, num2, output;
	char add, sub, mul, div, oper;
	add = '+';
	sub = '-';
	mul = '*';
	div = '/';
	wcome = "Welcome to C++ Calculator (Denhamrock)\n";
	info = "Enter the Number to start then the operator. EG +, -, *, /,\n";
	cout << wcome;
	cout << info;
	
add:
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << "Enter the operator: ";
	
	cin >> oper;
	if 
		
		(oper == '+') {
		output = num1 + num2;
		cout << "The output is: " << output;
	}
	else if (oper == '-')
	{
		output = num1 - num2;
		cout << "The output is: " << output;
	}
	else if (oper == '*')
	{
		output = num1 * num2;
		cout << "The output is: " << output;
	}
	else if (oper == '/')
	{
		output = num1 / num2;
		cout << "The output is: " << output;
	}
	else
	{
		cout << "Invalid operator" << endl;
	}
	repeat:
	cout << ". Would you like to do another calculation? (y/n) ";
	cin >> repeat;
	if
		(repeat == "y")
	{
		goto add;
	}
	else if (repeat == "n")
	{
		cout << "Thank you for using the calculator. Goodbye!" << endl;
	}
	else
	{
		cout << "Invalid input" << endl;
		goto repeat;
	}

	cout << "\nGoodbye! \n" << endl;
	system("pause"); 
}