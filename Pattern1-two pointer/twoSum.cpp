#include <bits/stdc++.h>
using namespace std;

pair<int, int> twoSum(int arr[], int size, int target)
{

  for (int i = 0; i < size; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
      if (arr[i] + arr[j] == target)
      {
        return {arr[i], arr[j]};
      }
    }
  }
  return {-1, -1}; // if not found
}
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int target;
  cin >> target;

  pair<int, int> result = twoSum(arr, n, target);

  if (result.first != -1)
    cout << result.first << " " << result.second;
  else
    cout << "No pair found";

  return 0;
}