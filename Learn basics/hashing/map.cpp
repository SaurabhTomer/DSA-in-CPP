#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Size of array: ";
    cin >> n;
    int arr[n];



    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
            
    }

    // pre computee
    map<int,int> mpp;
    for(int i = 0; i < n; i++) {
        mpp[arr[i]]++;
            
    }
    

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    while(q--) {
        int num;
        cin >> num;
        //fetch
        cout << num << " appears " << mpp[num] << " times\n";
    }

    return 0;
}