#include <bits/stdc++.h>
using namespace std;

void rotate_array(int arr[], int n, int displace)
{
    reverse(arr, arr + displace);
    reverse(arr + displace, arr + n);
    reverse(arr, arr + n);
}

int main()
{
    int n;
    cout << "enter size of array:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int displace;
    cout << "enter d places:";
    cin >> displace;

    rotate_array(arr, n, displace);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}