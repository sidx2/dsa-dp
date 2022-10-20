#include <bits/stdc++.h>
using namespace std;

bool isDivisibleBy2(int n) {
  return(n % 2 == 0); // Completed this function tht checks if number is divisible by 2 or not
}

int main() {
  if(isDivisibleBy2(38)) cout << "YES\n";
  else cout << "NO\n";
}
