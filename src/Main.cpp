#include <iostream>
using namespace std;

int main() 
{
  string name;
  cout << "What's your name? ";
  cin >> name;
  cout << name << endl << endl;
  cout << "Hello, " + name << "!";

    return 0;
}
