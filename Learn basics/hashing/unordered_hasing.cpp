#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // pre computee
    unordered_map<int, int> mpp; // store value in sort manner
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    // iterate in map
    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    while (q--)
    {
        int num;
        cin >> num;
        // fetch
        cout << num << " appears " << mpp[num] << " times\n";
    }

    return 0;
}