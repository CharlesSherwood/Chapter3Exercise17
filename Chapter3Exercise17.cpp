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

int main()
{
	double A, B, C, U;

	unsigned seed = time(0);
	srand(seed);
	//Let the user know what The program does.
	cout << "Hello, Welcome to Math Tutor" << endl;
	cout << "I will be helping you learn addition today" << "\n\n";
	cout << "I will display two random numbers, try and solve for the answer." << endl;

	//Get two random numbers and add them together
	A = 1 + rand() % 350;
	B = 1 + rand() % 350;
	C = A + B;

	cout << "\n";


	cout << A << " + " << B << " = ";
	cin >> U;
	if (U > C) {
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
	return 0;
}
