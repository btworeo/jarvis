// write a program in CPP for creating machine that accept atleast 3 consecutive ones

#include <iostream>
using namespace std;

bool ones(const string &s)
{
  int count = 0; // how many continuous 1's seen

  for (char c : s)
  {
    if (c == '1')
    {
      count++; // increase consecutive 1s
      if (count == 3)
        return true; // ACCEPT immediately
    }
    else
    {
      count = 0; // reset because 0 breaks the chain
    }
  }
  return false; // never saw 3 consecutive ones
}

int one()
{
  string s;
  cout << "\nEnter a binary string: ";
  cin >> s;

  if (ones(s))
    cout << "\nAccepted\n";
  else
    cout << "\nRejected\n";
  return 0;
}

int two()
{
  string s;
  cout << "\nEnter a binary string: ";
  cin >> s;

  if (ones(s))
    cout << "\nAccepted\n";
  else
    cout << "\nRejected\n";
  return 0;
}

int main()
{
  one();
  two();
  cout << endl;
  return 0;
}

// example input:
// 1100111
// example output:
// Accepted

// example input:
// 101010
// example output:
// Rejected
