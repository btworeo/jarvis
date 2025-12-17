#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  s = " " + s + " ";
  int l = 1, r = s.size() - 2;

  while (l < r)
  {
    if (s[l] == 'X' || s[l] == 'Y')
    {
      l++;
      continue;
    }
    if (s[r] == 'X' || s[r] == 'Y')
    {
      r--;
      continue;
    }
    if (s[l] != s[r])
    {
      cout << "Rejected";
      return 0;
    }
    s[l++] = s[r--] = (s[l - 1] == 'a' ? 'X' : 'Y');
  }

  cout << "Accepted";
}
