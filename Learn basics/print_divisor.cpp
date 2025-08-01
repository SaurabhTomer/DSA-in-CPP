#include<bits/stdc++.h>
using namespace std;

int print_divisors_1(int num){
  
    for(int i = 1; i < num ; i++){
        if(num % i == 0){
            cout << i << " ";
        }
        
    }
  
}



int main(){
    int num;
    cout << " Enter Number:";
    cin >> num;
    int ans = print_divisors_1(num);
    cout << ans;
 }