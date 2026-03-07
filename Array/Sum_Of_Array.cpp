#include <bits/stdc++.h>

using namespace std;

int main()
{
  // taking input as n and arr1
  int n1;
  cin >> n1;
  vector<int> arr1(n1);
  for (int i = 0; i < arr1.size(); i++)
  {
    cin >> arr1[i];
  }

  int n2;
  cin >> n2;
  vector<int> arr2(n2);
  for (int i = 0; i < arr2.size(); i++)
  {
    cin >> arr2[i];
  }

  vector<int> sum(n1 > n2 ? n1 : n2);

  int carry = 0;
  int i = arr1.size() - 1;
  int j = arr2.size() - 1;
  int k = sum.size() - 1;

  while (k >= 0)
  {
    int digit = carry;

    if (i >= 0)
    {
      digit += arr1[i];
    }
    if (j >= 0)
    {
      digit += arr2[j];
    }

    carry = digit / 10;
    digit = digit % 10;

    sum[k] = digit;

    i--;
    j--;
    k--;
  }

  if (carry != 0)
  {
    cout << carry;
  }
  for (int i = 0; i < sum.size(); i++)
  {
    cout << sum[i];
  }

  return 0;
}