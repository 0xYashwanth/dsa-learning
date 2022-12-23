#include <iostream>
using namespace std;
//program using pointers in functions
//sending the adresss of the variable to the fuction 
void calc(int *foot, int *inch, int *yard)
{
    cout << "Enter the value in inches: ";
    cin >> *inch;
    *yard = *inch / 36;
    *foot = (*inch % 36) / 12;
    *inch = *inch - (*yard * 36 + *foot * 12);
    
}
int main()
{
    int foot, yard, inch;
    calc(&foot, &inch, &yard);
    cout << yard << " Yards, " << foot << " Feet, " << inch << " Inches " << endl;
}