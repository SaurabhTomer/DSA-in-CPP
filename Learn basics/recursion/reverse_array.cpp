#include<bits/stdc++.h>
using namespace std;


//USING 2 POINTERS
void reverse_1(int arr[] ,int start , int end){
  
    if(start >= end){
        return ;
    }
    swap(arr[start] , arr[end]);
    reverse(arr, start + 1 , end - 1);  // calls itself until condiotion is not matched

}

//USING 1 POINTER


int main(){
    int arr[]={1,2,3,4,5};
    int size = 5;
    
    reverse(arr , 0 , size - 1 );   // passes array with start inedx 0  and end index size -1

    for(int i =0 ; i < size ;i++){
        cout << arr[i] << " ";
    }
    
}