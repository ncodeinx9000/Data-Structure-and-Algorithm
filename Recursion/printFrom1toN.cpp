// Print Linearly from 1 to N recursively

#include <iostream>
using namespace std;

void print(int i, int n)
{
  if (i > n)
    return;
  cout << i << endl;
  print(i + 1, n);
}

int main()
{
  int n;
  cin >> n;
  print(1, n);
  return 0;
}