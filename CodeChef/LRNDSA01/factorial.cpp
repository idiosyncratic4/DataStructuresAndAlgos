#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int div = 5;
    int sum = 0;
    while (t--)
    {
        sum = 0;
        div = 5;
        int n;
        cin >> n;
        while (div <= n)
        {
            sum = sum + n / div;
            div = div * 5;
        }
        cout << sum << "\n";
    }
}
