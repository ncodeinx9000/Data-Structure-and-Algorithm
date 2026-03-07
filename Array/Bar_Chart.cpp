#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);

  // Taking input
  for (int i = 0; i < arr.size(); i++)
  {
    cin >> arr[i];
  }

  // find max element in array
  int max = arr[0];
  for (int i = 1; i < arr.size(); i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }

  for (int floor = max; floor >= 1; floor--)
  {
    for (int i = 0; i < arr.size(); i++)
    {
      if (arr[i] >= floor)
      {
        cout << "*\t";
      }
      else
      {
        cout << " \t";
      }
    }
    cout << "\n";
  }
  return 0;
}