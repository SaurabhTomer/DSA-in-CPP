#include <bits/stdc++.h>
using namespace std;
int  moveZeros(int arr[] , int n){
    int j = -1;

    // finding zero element index
    for(int i =0 ; i < n ;i++){
        if(arr[i] == 0){
            j = i;
            break;//no need to search further
        }
    }
    if(j == -1){
        return arr[n];
    }

    // shifting 0 to end
    for(int i = j +1 ;i < n ;i++){
        if(arr[i] != 0){
            swap(arr[j] , arr[i]);
            j++;
        }
    }
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
    moveZeros(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
    

}