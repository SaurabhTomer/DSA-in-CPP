#include<bits/stdc++.h>
using namespace std;

void f(int i,int num){ // 3,3 comes
    if(i < 1 ){ // condiiton becomes false
    return ;
    }
    else{
        cout << i;  //print 3
        f(i - 1,num);   //calls f(2,3) till func become f(0,2)
        

    }

}

int main(){
    int num;
    cout << "enter num:";
    cin >> num;
    f(num,num);
}