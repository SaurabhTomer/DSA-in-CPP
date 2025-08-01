#include <bits/stdc++.h>
using namespace std;

void f(int i, int num)
{
    if (i < 1)
    {
        return;
    }
    cout << i;
    f(i - 1, num);
}

int main()
{
    int num;
    cout << "enter num:";
    cin >> num;
    f(num, num);
}