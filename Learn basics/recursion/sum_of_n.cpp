#include<bits/stdc++.h>
using namespace std;

int add(int num){
   if(num == 0 ){
    return 0;
   }
   else{
    return num + add(num - 1);
   }

}

int main(){
    int num;
    cout << "enter num:";
    cin >> num;
    int ans = add(num);
    cout << ans;
}