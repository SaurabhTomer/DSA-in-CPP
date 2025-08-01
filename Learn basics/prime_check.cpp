#include<bits/stdc++.h>
using namespace std;

int isPrime(int num){
    int count =0 ;
   for(int i = 1 ; i <= num ;i++){
    if(num % i ==0){
        count++;
    }
   }
   if(count == 2)
   return true;
   else
   return false;
  
}


int main(){
    int num;
    cout << " Enter Number:";
    cin >> num;
    int ans = isPrime(num);
    cout << ans;

    
  
    
 }