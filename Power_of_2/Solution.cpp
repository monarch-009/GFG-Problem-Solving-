#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    // Function to check if given number n is a pow
    bool isPowerofTwo(long long n)
    {
        if (n == 0)
        {
            return false;
        }

        return (ceil(log2(n)) == floor(log2(n)));
    }
};

int main()
{

    int t;
    cin >> t; // testcases

    for (int i = 0; i < t; i++)
    {
        long long n; // input a number n
        cin >> n;

        Solution ob;
        if (ob.isPowerofTwo(n)) // Now, if log2 produces an integer not decimal then we are sure raising 2 to this value
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
