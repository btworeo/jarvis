// wap to find the length of the string, check whether it is odd or even.

#include <iostream>
using namespace std;

int one()
{
  string s;
  cout << "\nEnter a string: ";
  cin >> s;
  int state = 0;

  for (char c : s)
  {
    if (state == 0)
      state = 1;
    else
      state = 0;
  }

  if (state == 0)
    cout << "\nLength is EVEN\n";
  else
    cout << "\nLength is ODD\n";
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

// example input: hello
// example output: Length is ODD
// example input: hello world
// example output: Length is EVEN