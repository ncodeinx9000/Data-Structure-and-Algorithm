#include <bits/stdc++.h>

using namespace std;

void swap(int arr[], int i, int j)
{
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

int main()
{
  int arr[5] = {33, 47, 59, 67, 98};

  swap(arr, 0, 4);

  for (int i = 0; i < size(arr); i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}