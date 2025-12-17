#include <bits/stdc++.h>
using namespace std;

bool TM(string s)
{
  s = " " + s + " ";
  int i = 1;

  while (true)
  {
    while (s[i] == 'X')
      i++;
    if (s[i] == ' ')
      break;
    if (s[i] != 'a')
      return false;
    s[i++] = 'X';
    //
    while (s[i] == 'a' || s[i] == 'X')
      i++;
    if (s[i] != 'b')
      return false;
    s[i++] = 'Y';

    while (s[i] == 'b' || s[i] == 'Y')
      i++;
    if (s[i] != 'c')
      return false;
    s[i] = 'Z';

    i = 1;
  }

  for (char c : s)
    if (c == 'a' || c == 'b' || c == 'c')
      return false;

  return true;
}

int main()
{
  string s;
  cout << "Enter strings to test the TM (Ctrl+D to end): ";
  while (cin >> s)
    cout << (TM(s) ? "Accepted" : "Rejected") << '\n';
  return 0;
}
