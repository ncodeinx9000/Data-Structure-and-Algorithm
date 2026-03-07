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

  int min = arr[0];
  int max = arr[0];
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }

  int span = max - min;
  cout << span;

  return 0;
}
