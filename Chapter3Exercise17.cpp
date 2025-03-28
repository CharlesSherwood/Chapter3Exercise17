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
double A, B, C;
int main()
{
	//Let the user know what The program does.
	cout << "Hello, Welcome to Math Tutor" << endl;
	cout << "I will be helping you learn addition today" << "\n\n";
	cout << "I will display two random numbers, try and solve for the answer." << endl;

	//Create a loop for the program.
	do
	{
		RandNum();
		cout << "\n";
		cout << setw(6) << A << endl << " + " << B << endl << setw(6) <<  " --- " << endl;

		//pause the system until they enter a key
		system("pause");
		cout << setw(6) << A << endl << " + " << B << endl << setw(6) << "---" << endl << setw(6) <<  C << endl;

	} while (Repeat());
}


//Have a module that gets random numbers and adds them
int RandNum()
{
	unsigned seed = time(0);
	srand(seed);
	A = 1 + rand() % 350;
	B = 1 + rand() % 350;
	C = A + B;
	return C;
}

//Have a module that will ask the user if they want to repeat the program.
bool Repeat()
{
	int RP;
	cout <<endl<< "Would You Like To Repeat The Program?";
	cin >> RP;
	return RP;
}
