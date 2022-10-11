#include <bits/stdc++.h>
using namespace std;

int dp[1e4] = {0};

int fib(int n) {
    if(n==0||n==1)return n;
    if(dp[n])return dp[n];
    dp[n] = fib(n-1)+fib(n-2);
    return dp[n];
}

int main() {
    int n
    cout<<"Enter n to find nth number in Fibonacci Sequence : "
    cin>>n
    cout<<"The nth integer in Fibonacci Sequence = "
    cout<<fib(n)<<endl
}
