#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Size of array: ";
    cin >> n;

    vector<int> arr(n);       // Dynamic array
    vector<int> hash(1e7, 0); // Large enough hash array (if needed)

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        hash[arr[i]]++;       // Precompute frequencies
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    while(q--) {
        int num;
        cin >> num;
        cout << num << " appears " << hash[num] << " times\n";
    }

    return 0;
}
