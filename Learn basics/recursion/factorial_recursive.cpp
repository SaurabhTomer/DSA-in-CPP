#include<bits/stdc++.h>
using namespace std;

int factorial(int num){
   if(num == 1 ){
    return 1;
   }
   else{
    return num * factorial(num - 1);
   }

}

int main(){
    int num;
    cout << "enter num:";
    cin >> num;
    int fact = factorial(num);
    cout << fact;
}