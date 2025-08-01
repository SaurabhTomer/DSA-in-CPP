#include <bits/stdc++.h>
using namespace std;

void f(int i, int num)
{
    if (i > num)
    {
        return;
    }
    else
    {
        cout << i;
        f(i + 1, num);
        
    }
}

int main()
{
    int num;
    cout << "enter num:";
    cin >> num;
    f(1, num);
}