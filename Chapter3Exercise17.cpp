/*FileName:Chapter3Exercise17.cpp
Programmer:Charles Sherwood
Date:3/2025
Requirments:This is a revised version of a program
that now includes modules and a loop to retry the program 
to test if it works 
*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

int RandNum();
bool Repeat();
void Display(double A, double B, double C);
void Welcome();
double UserIn(double C);

int main()
{
    srand(time(0)); // Seed random generator only ONCE
    Welcome();

    do
    {
        double A = RandNum();
        double B = RandNum();
        double C = A + B;
        Display(A, B, C);
    } while (Repeat());

    return 0;
}

void Welcome()
{
    cout << "Hello, Welcome to Math Tutor" << endl;
    cout << "I will be helping you learn addition today\n\n";
    cout << "I will display two random numbers, try and solve for the answer." << endl;
}

// Generates a random number between 1 and 350
int RandNum()
{
    return 1 + rand() % 350;
}

double UserIn(double C)
{
    double input;
    cout << "What Would The Answer Be: ";
    cin >> input;

    if (input != C)
        cout << "Wrong Answer\n";
    else
        cout << "Correct Answer!\n";

    return input;
}

// Ask the user if they want to repeat
bool Repeat()
{
    char RP;
    cout << "\nWould You Like To Repeat The Program? (Y/N): ";
    cin >> RP;
    return (RP == 'Y' || RP == 'y');
}

//Display the answers on the screen
void Display(double A, double B, double C)
{
    cout << "\n" << setw(6) << A << endl
        << " + " << B << endl
        << setw(6) << "---" << endl;

    UserIn(C);

    cout << setw(6) << A << endl
        << " + " << B << endl
        << setw(6) << "---" << endl
        << setw(6) << C << endl;
}
