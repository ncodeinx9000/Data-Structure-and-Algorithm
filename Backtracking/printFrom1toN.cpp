// Print from 1 to N using backtracking

#include <iostream>
using namespace std;

void print(int i, int n)
{
  if (i < 1)
    return;
  print(i - 1, n);
  // this 'cout' line will execute after the after the function call is executed
  cout << i << endl;
}
int main()
{
  int n;
  cin >> n;
  print(n, n);
  return 0;
}