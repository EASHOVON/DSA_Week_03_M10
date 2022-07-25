#include <bits/stdc++.h>
using namespace std;

// Linear Search Implementation
int main()
{
    int size;
    cin >> size;
    int array[size];

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    char c;
    cout << "Do you want to search: (Y/N) ";
    cin >> c;
    while (toupper(c) == 'Y')
    {
        int checkValue;
        cout << "Please enter the value you want to search:";
        cin >> checkValue;
        int flag = 0;
        for (int i = 0; i < size; i++)
        {
            if (array[i] == checkValue)
            {
                cout << "Index no: " << i << ", Position: " << i + 1 << endl;
            }
        }
        if (flag == 0)
        {
            cout << "Not Found" << endl;
        }

        cout << "Do you want to search: (Y/N) ";
        cin >> c;
    }

    return 0;
}