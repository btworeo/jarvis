#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  stack<char> st;
  bool seen1 = false;

  for (char c : s)
  {
    if (c == '0' && !seen1)
      st.push('0');
    else if (c == '1')
    {
      seen1 = true;
      if (st.empty())
      {
        cout << "Rejected";
        return 0;
      }
      st.pop();
    }
    else
    {
      cout << "Rejected";
      return 0;
    }
  }

  cout << (!st.empty() || !seen1 ? "Rejected" : "Accepted");
}
