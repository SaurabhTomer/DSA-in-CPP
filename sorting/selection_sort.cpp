#include<bits/stdc++.h>
using namespace std;

 void selection_sort(int arr[], int n){
    for(int i =0 ; i < n-2 ; i++){ // code run for n-2 because after that only one element is left

        int mini = i;
        for(int j=i ; j < n-1;j++){// this will run for last element for swap
            if(arr[j] < arr[mini]) {
                mini = j;
            }
        }
        swap(arr[mini],arr[i]);
    }

}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0 ; i < n;i++){
        cin >> arr[i];
    }
    selection_sort(arr,n);
     for(int i =0 ; i < n;i++){
        cout << arr[i] << " ";
    }
}