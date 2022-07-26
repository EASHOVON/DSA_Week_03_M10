#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int target;
    cin >> target;
    int l = 0, r = size - 1;
    bool found = false;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (array[mid] == target)
        {
            cout << "Index " << mid;
            found = true;
            break;
        }
        else if (array[mid] > target)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    if (found == false)
    {
        cout << "Not Found" << endl;
    }
    return 0;
}