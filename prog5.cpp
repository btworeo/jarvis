#include <iostream>
using namespace std;

int main()
{
  char c;
  string uppercaseFound = "";
  string lowercaseFound = "";
  string converted = "";
  cout << "\nEnter characters (press # to stop): ";

  while (cin >> c && c != '#')
  {
    if (c >= 'A' && c <= 'Z')
    {
      uppercaseFound += c;
      converted += char(c + 32);
    }
    else if (c >= 'a' && c <= 'z')
    {
      lowercaseFound += c;
      converted += char(c - 32);
    }
    else
    {
      converted += c;
    }
  }

  cout << "\nUppercase letters found: "
       << uppercaseFound
       << "\nLowercase letters found: "
       << lowercaseFound
       << "\nConverted string: "
       << converted
       << endl
       << endl;
  return 0;
}

// example input:
// A b C d e f g h i j k l m n o p q r s t u v w x y z #
// example output:
// Uppercase letters found: ABC
// Lowercase letters found: bdefghijklmnopqrstuvwxyz
// Converted string: a B c D E F G H I J K L M N O P Q R S T U V W X Y Z
// Note: The output may vary based on the input provided.
// The program reads characters until '#' is entered, collects uppercase and lowercase letters,
// and converts them to the opposite case in the output string.
// The program uses C++17 features and is designed to handle character input efficiently.
