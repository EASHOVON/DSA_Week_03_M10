#include <bits/stdc++.h>
using namespace std;

// Binary Search Implemented

int binarySearch(int array[], int x, int lwb, int upb)
{
    if (lwb <= upb)
    {
        int mid = (lwb + upb) / 2;
        if (array[mid] == x)
        {
            return mid;
        }
        else if (array[mid] < x)
        {
            binarySearch(array, x, mid + 1, upb);
        }
        else
        {
            binarySearch(array, x, lwb, mid - 1);
        }
    }
    else
    {
        return -1;
    }
}

int main()
{
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
    int res = binarySearch(array, checkValue, 0, size - 1);
    if (res != -1)
    {
        cout << "Index: " << res << ", Position: " << res + 1 << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}