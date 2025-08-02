#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter value of array:";
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < arr.size(); i++)
    { // taking input in array
        cin >> arr[i];
    }

    // using unordered map due to its time coomplexites o(1)
    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {

        mpp[arr[i]]++; // pre compute value
    }

    // iterate map
    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl; // this is how we acces vvalue from mpp
    }
}