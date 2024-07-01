#include <iostream>
#include <conio.h>
using namespace std;

void addition (int a, int b)
{
    int sum = a + b;
    cout << "sum = " << sum << endl;
}
void subtraction  (int a, int b)
{
    int subtraction = a - b;

    cout << "subtraction = " << subtraction << endl;
}
void multipication (int a, int b)
{
    int multipication =a * b;
    cout << "multipication = " << multipication  << endl;
}

int main ()
{
   addition(20,34);
   subtraction(3,90);
   multipication(3,8);
   cout << "all function are called" <<endl << "";


    getch ();
}
