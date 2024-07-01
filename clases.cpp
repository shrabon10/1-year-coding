#include <iostream>
#include <conio.h>
using namespace std;

int largest (int x, int y);
int largest (int x, int y, int z);
int largest (int x, int y, int z, int k);

int main () 
{
    int choice, r, r1, r2, x, y , z , k;
    while(1)
    {
        cout << "enter your choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        cout << "enter the value of x & y :";
        cin >> x >> y ;
        r = largest (x, y);
        cout << r << endl;
            break;
            case 2: 
            cout << "enter the value of x y & z:";
            cin >> x >> y >> z;
            r1 = largest (x, y, z);
            cout << r1 << endl;
            break;
            case 3:
            cout << "enter the value of x, y, z & k";
            cin >> x >> y >> z >> k;
            r2 = largest (x, y, z, k);
            cout << r2 << endl;
        default:
        cout << "Invalid choice. please try again." << endl;
            break;
        }
    }  
    getch ();
}
    int largest (int x, int y)
    {
        int m = (x > y) ? x : y;
        return m;
    }
    int largest (int x, int y, int z)
    {
        int m = (x> y && x > z) ? x :
        (y > z) ? y : z;
        return m;
    }
    int largest (int x, int y, int z, int k)
    {
        int m = (x> y && x > z && x > k) ? x :
        (y > z && y > k) ? y:
        (z > k) ? z : k;
        return m;
    }
    
