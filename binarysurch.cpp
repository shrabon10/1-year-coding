#include <iostream>
using namespace std;


int main ()
{
    int a[] = {1, 3, 5, 18, 40,100, 200, 300, 400, 500, 600};
    int item = 400;
    int left, right, mid;
    left = 0;
    right = 9;
    
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (a[mid] == item)
        {
            cout << "the item of index - " << mid << endl;
            return 0;
        }
        else if (a [mid] < item)
        {
            left = mid + 1;
        }
        else 
        {
            right = mid - 1;
        }

    }
    cout << "item is not fonded this index";
    return 0;
}

