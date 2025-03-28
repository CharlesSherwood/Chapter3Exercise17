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

int RandNum();
bool Repeat();
void Display(double A, double B,double C);
void Welcome();
double UserIn();
int main()
{
	double A, B, C;
	Welcome();
	//Create a loop for the program.
	do
	{
		A =  RandNum();
		B = RandNum();
		C = A + B;
		Display(A, B,  C);
	} while (Repeat());
}

void Welcome()
{
	cout << "Hello, Welcome to Math Tutor" << endl;
	cout << "I will be helping you learn addition today" << "\n\n";
	cout << "I will display two random numbers, try and solve for the answer." << endl;

}


//Have a module that gets random numbers and adds them
int RandNum()
{
	unsigned seed = time(0);
	srand(seed);
	1 + rand() % 350;
	return;
}


double UserIn(double C)
{
	double input;
	cout << "What Would The Answer Be:";
	cin >> input;
	if (input < C)
	cout << "Wrong Answer";

	return input;
}

//Have a module that will ask the user if they want to repeat the program.
bool Repeat()
{
	int RP;
	cout <<endl<< "Would You Like To Repeat The Program?";
	cin >> RP;
	return RP;
}

void Display(double A,double B, double C)
{
	cout << "\n";
	cout << setw(6) << A << endl << " + " << B << endl << setw(6) << " --- " << endl;
	UserIn(C);
	//pause the system until they enter a key
	cin.get();
	cout << setw(6) << A << endl << " + " << B << endl << setw(6) << "---" << endl << setw(6) << C << endl;
}
