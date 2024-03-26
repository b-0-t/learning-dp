#include <bits/stdc++.h>
using namespace std;

int f(int n, vector<int> &dp)
{
    if (n <= 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = f(n - 1, dp) + f(n - 2, dp);
}

int main()
{
    vector<int> dp(4, -1);

    cout << f(4, dp);
    return 0;
}