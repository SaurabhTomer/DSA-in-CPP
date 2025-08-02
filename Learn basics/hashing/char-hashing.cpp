#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cout << "enter string : ";
    cin >> n;

    int hash[256] = {0};

    for (int i = 0; i < n.size(); i++)
    {

        hash[n[i]]++; // Precompute frequencies
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    while (q--)
    {
        char ch;
        cin >> ch;
        // fetch
        cout << ch << " appears " << hash[ch] << " times\n";
    }

    return 0;
}
