/*FileName:Chapter3Exercise17.cpp
Programmer:Charles Sherwood
Date:4/2025
Requirments:This Revised Program should present the user
with a menu to choose what kind of math the need to work on 
and let them make a choice.
*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

//Create the variables that will need to be called 
void Addition();
void Subtraction();
void Multiplication();
void Division();
void Menu();
void InCO(double U,double C);

//Create a menu in main
int main()
{
	int choice;
	do {
		Menu();
		cin >> choice;
		if (choice > 5 || choice < 1)
		{
			cout << "Please Enter A Valid Choice" << endl;
			return main();
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

	cout << "-----------------------------------\n";
	cout << "!!THANK YOU FOR USING THE PROGRAM!!\n";
	cout << "-----------------------------------\n";
}

void Menu()
{
	cout << "----------------" << endl;
	cout << "1-Addition" << endl;
	cout << "2-Subtraction" << endl;
	cout << "3-Multiplication" << endl;
	cout << "4-Division" << endl;
	cout << "5-EXIT" << endl;
	cout << "----------------" << endl;

}
	
	//Have main call this for addition and so on.
	void Addition()
{
	double A, B, C, U;
	unsigned seed = time(0);
	srand(seed);
	A = 1 + rand() % 350;
	B = 1 + rand() % 350;
	C = A + B;
	cout << endl;
	cout <<fixed<<setprecision(0)<<right<<setw(6)<<A << endl <<
		" + " << B <<endl<<setw(6)<<"---"<<endl;
	cin >> U;
	InCO(U, C);
}





	void Subtraction()
{
	double A, B, C, U;
	unsigned seed = time(0);
	srand(seed);
	A = 1 + rand() % 350;
	B = 1 + rand() % 350;
	if (A < B)
	{
		C = B - A;
		cout << fixed << setprecision(0) <<right<< setw(6) << B << endl << 
			" - " << A << endl << setw(6) << "---" << endl;
	}
	else
	{C = A - B;
	cout << endl;
	cout << fixed << setprecision(0) << right << setw(6) << A << endl << 
		" - " << B << endl << setw(6) << "---" << endl;
	}
	cin >> U;
	InCO(U, C);
}





	void Multiplication()
{
	double A, B, C, U;
	unsigned seed = time(0);
	srand(seed);
	A = 1 + rand() % 350;
	B = 1 + rand() % 350;
	C = A * B;
	cout << endl;
	cout <<fixed<<setprecision(0)<< setw(6) << A << endl << 
		" * " << B << endl << setw(6) << "---" << endl;
	cin >> U;
	InCO(U, C);

}





	void Division()
{
	double A, B, C, U, rounded;
	unsigned seed = time(0);
	srand(seed);
	A = 1 + rand() % 350;
	B = 1 + rand() % 350;
	cout << "Please Round to the nearest tenths place" << endl;


	if (A < B)
	{
		C = B / A;
		 rounded = round(C * 10) / 10;
		 cout << endl;
		 cout << fixed << setprecision(0) << B << endl << "---" << endl << A << endl << "----"<<"\n";
	}
	else
	{
		C = A / B;
		 rounded= round(C * 10) / 10;
		 cout << endl;
		 cout << fixed<<setprecision(0)<<right<<A << endl << "---" << endl << B<<endl<<"----"<<"\n";
	}


	cin >> U;
	if (U > rounded||U < rounded)
	{
		cout << "Incorect" << endl;
		cout << "Check answer? ";
		system("pause");
	}
	else {
		cout << "Correct" << endl;

	}


	cout <<fixed<<setprecision(1)
		<< "The Correct Answer Is " << rounded << endl;
	cout << endl;
	cout << "--------------\n";
	cout << "Return To Menu" << endl;
	cout << "--------------\n";
	system("pause");
}
	
//Module to Check answer
	void InCO(double U,double C)
	{
		if (U > C || U < C)
		{
			cout << "Incorrect" << endl;
			cout << "Check answer? ";
			system("pause");
			cout << "The Correct Answer Is " << C << endl;
		}
		else {
			cout << "Correct" << endl;

		}
		cout << "--------------\n";
		cout << "Return To Menu" << endl;
		cout << "--------------\n";
		system("pause");

	}