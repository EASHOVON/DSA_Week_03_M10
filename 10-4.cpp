#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Binary Search Self practice
    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int checkValue;
    cout << "Enter value you want to search: ";
    cin >> checkValue;
    int lwb = 0, upb = size - 1, mid;
    while (upb - lwb > 1)
    {
        mid = (lwb + upb) / 2;
        if (array[mid] < checkValue)
        {
            lwb = mid + 1;
        }
        else
        {
            upb = mid;
        }
    }
    if (array[lwb] == checkValue)
    {
        cout << "Index: " << lwb << endl;
    }
    else if (array[upb] == checkValue)
    {
        cout << "Index: " << upb << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}
