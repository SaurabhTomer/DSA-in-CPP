#include <bits/stdc++.h>
using namespace std;

int reverse_num(int num)
{
    int rev_num = 0;

    while (num > 0)
    {

        int lastdigit = num % 10;
        num = num / 10;
        rev_num = (rev_num * 10) + lastdigit;
    }
     return rev_num;
}
int main()
{

    int num;
    cout << "Enter num:";
    cin >> num;
    int ans = reverse_num(num);
    cout << ans;
}