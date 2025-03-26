/*FileName:Chapter3Exercise17.cpp
Programmer:Charles Sherwood
Date:2/2025
Requirments:This program should display two random numbers for 
user to add together and when the user is ready they can press a 
key and the correct solution will be shown.
*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

double Menu();
double Addition();
double Subtraction();
double Multiplication();
double Division();


int main()
{
	Menu();
}


double Menu()
{
	int choice;
	do {
		cout << "1-Addition" << endl;
		cout << "2-Subtraction" << endl;
		cout << "3-Multiplication" << endl;
		cout << "4-Division" << endl;
		cout << "5-EXIT" << endl;
		cin >> choice;
		if (choice > 5 || choice < 1)
		{
			cout << "Please Enter A Valid Choice";
			cin >> choice;
		}
		switch (choice)
		{
		case 1:
		{
			Addition();
		}
		break;
		case 2:
		{
			Subtraction();
		}
		break;
		case 3:
		{
			Multiplication();
		}
		break;
		case 4:
		{
			Division();
		}
		break;
		}
	} while (choice != 5);
	return 0;

}


double Addition()
{
	double A, B, C, U;
	unsigned seed = time(0);
	srand(seed);
	A = 1 + rand() % 350;
	B = 1 + rand() % 350;
	C = A + B;
	cout << endl;
	cout << A << " + " << B << " = ";
	cin >> U;
	if (U > C)
	{
		cout << "Incorect" << endl;
	}
	else if (U < C) {
		cout << "Incorrect" << endl;
	}
	else {
		cout << "Correct" << endl;

	}
	//pause the system until they enter a key
	cout << "Check answer?" << endl;
	system("pause");
	cout << A << " + " << B << " = " << C << endl;
	return	main();
}
double Subtraction()
{
	double A, B, C, U;
	unsigned seed = time(0);
	srand(seed);
	A = 1 + rand() % 350;
	B = 1 + rand() % 350;
	if (A < B)
	{
		C = B - A;
		cout << B << " - " << A << " = ";
	}
	else
	{C = A - B;
	cout << endl;
	cout << A << " - " << B << " = ";
	}
	cin >> U;
	if (U > C)
	{
		cout << "Incorect" << endl;
	}
	else if (U < C) {
		cout << "Incorrect" << endl;
	}
	else {
		cout << "Correct" << endl;

	}
	//pause the system until they enter a key
	cout << "Check answer?" << endl;
	system("pause");
	cout << A << " - " << B << " = " << C << endl;
	return	main();
}
double Multiplication()
{
	double A, B, C, U;
	unsigned seed = time(0);
	srand(seed);
	A = 1 + rand() % 350;
	B = 1 + rand() % 350;
	C = A * B;
	cout << endl;
	cout << A << " * " << B << " = ";
	cin >> U;
	if (U > C)
	{
		cout << "Incorect" << endl;
	}
	else if (U < C) {
		cout << "Incorrect" << endl;
	}
	else {
		cout << "Correct" << endl;

	}
	//pause the system until they enter a key
	cout << "Check answer?" << endl;
	system("pause");
	cout << A << " * " << B << " = " << C << endl;
	return	main();

}
double Division()
{
	double A, B, C, U;
	unsigned seed = time(0);
	srand(seed);
	A = 1 + rand() % 350;
	B = 1 + rand() % 350;
	C = A / B;
	cout << endl;
	cout << A << " / " << B << " = ";
	cin >> U;
	if (U > C)
	{
		cout << "Incorect" << endl;
	}
	else if (U < C) {
		cout << "Incorrect" << endl;
	}
	else {
		cout << "Correct" << endl;

	}
	//pause the system until they enter a key
	cout << "Check answer?" << endl;
	system("pause");
	cout << A << " / " << B << " = " << C << endl;
	return	main();

}