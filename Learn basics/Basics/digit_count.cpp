#include<bits/stdc++.h>
using namespace std;

 int digit_count(int num){
      int count = 0;

    while(num > 0){
        int last_digit = num % 10;

        num = num / 10;
        count++;
    }
    return count;
}

int log_method(int num){

    int cnt = (int)(log10(num) + 1);

        return cnt;

}

int main(){
    int num;
    cout << " Enter Number:";
    cin >> num;

    int answer = digit_count(num);
    // cout << answer;
    int answer_2 = log_method(num);
    cout << answer_2;
  
    
 }