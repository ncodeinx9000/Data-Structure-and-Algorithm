#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);

  for (int i = 0; i < arr.size(); i++)
  {
    cin >> arr[i];
  }

  int number;
  cin >> number;

  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] == number)
    {
      cout << i;
    }
  }

  return 0;
}