// write a program in CPP for creating machine that accept the string always ending with 101 (eg. 001100101).

#include <iostream>
using namespace std;

int one()
{
  string s;
  cout << "\nEnter a binary string: ";
  cin >> s;
  int state = 0;
  for (char c : s)
  {
    if (state == 0)
      state = (c == '1') ? 1 : 0;
    else if (state == 1)
      state = (c == '1') ? 1 : 2; // '1'->still prefix '1', '0'->'10'
    else if (state == 2)
      state = (c == '1') ? 3 : 0; // '1'->'101' (accept), '0'->no prefix
    else
      state = (c == '1') ? 1 : 2;
  }

  if (state == 3)
    cout << "\nACCEPTED\n";
  else
    cout << "\nREJECTED\n";
  cout << endl;
  return 0;
}

int two()
{
  one();
  return 0;
}

int main()
{
  one();
  two();
  return 0;
}

// example input: 001100101
// example output: ACCEPTED
// example input: 00110010
// example output: REJECTED