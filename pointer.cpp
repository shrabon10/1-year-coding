#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int x = 10;
    int *p;
    p = &x;

    cout << "value of x: " << x << endl;
    cout << "value pointed to by p: " << *p << endl;

    return 0; // Don't forget to return a value from main
}

