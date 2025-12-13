#include <bits/stdc++.h>
using namespace std;

int main()
{
  unsigned long long n;
  cout << "\nEnter an integer: ";
  if (!(cin >> n))
    return 0;

  if (n == 0)
  {
    cout << "\nBinary: 0\n";
    return 0;
  }

  string s;
  while (n)
  {
    s.push_back(char('0' + (n & 1)));
    n >>= 1;
  }
  reverse(s.begin(), s.end());

  cout << "\nBinary: " << s << "\n\n";
  return 0;
}

// example input:
// Enter an integer: 10
// example output:
// Binary: 1010
// example input:
// Enter an integer: 0
// example output:
// Binary: 0