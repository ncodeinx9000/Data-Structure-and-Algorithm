// Print from  N to 1 using backtracking

#include <iostream>
using namespace std;

void print(int i, int n)
{
  if (i > n)
    return;
  print(i + 1, n);
  // this 'cout' line will execute after the after the function call is executed
  cout << i << endl;
}
int main()
{
  int n;
  cin >> n;
  print(1, n);
  return 0;
}