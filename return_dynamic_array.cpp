#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    int *arr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    return arr;
}

int main()
{
    int *res = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << " " << res[i];
    }
    return 0;
}