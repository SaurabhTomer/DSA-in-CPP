#include<bits/stdc++.h>
using namespace std;

int armstrong_num(int num){
    int dup = num;
    int sum = 0;
      while(num > 0){

        int last_digit = num % 10;
        sum = sum + (last_digit * last_digit * last_digit);
        num = num / 10;

    }
    if(sum == dup) return sum;
    else return -1;
  
}


int main(){
    int num;
    cout << " Enter Number:";
    cin >> num;
    int ans = armstrong_num(num);
    cout << ans;

 }