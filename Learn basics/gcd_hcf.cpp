#include <bits/stdc++.h>
using namespace std;

void gcd_1(int num1, int num2)
{
    int gcd = 1; // always gcd is 1 for any  number

    for (int i = 1; i < min(num1, num2); i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    cout << gcd;
}

void gcd_2(int num1, int num2)
{
    int gcd = 1; // always gcd is 1 for any  number

    while (num1 > 0 && num2 > 0)
    {
        if (num1 > num2)
        {
            num1 = num1 % num2;
        }
        else
        {
            num2 = num2 % num1;
        }
    }
    if (num1 == 0)
    {
        cout << num2;
    }
    else
    {
        cout << num1;
    }
}

int main()
{
    int num1, num2;
    cout << " Enter Number 1 and number 2:";
    cin >> num1;
    cin >> num2;
    // gcd_1(num1,num2);
    gcd_2(num1, num2);
}