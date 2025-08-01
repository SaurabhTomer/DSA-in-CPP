#include <bits/stdc++.h>
using namespace std;

bool palindrome(int num)
{
    int dup = num;
    int rev_num = 0;

    while (num > 0)
    {
        int lastDigit = num % 10;
        num = num / 10;
        rev_num = (rev_num * 10) + lastDigit;
    }
    if (rev_num == dup)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{

    int num;
    cout << "Enter num:";
    cin >> num;
    int ans = palindrome(num);
    cout << ans;
}