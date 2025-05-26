#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    int *arr = new int[5];
    for (int i = 0; i < 3; i++)
    {
        arr[i] = a[i];
    }
    arr[3] = 140;
    arr[4] = 150;
    // delete[] a;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}