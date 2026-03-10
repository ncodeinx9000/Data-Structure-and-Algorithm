#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int> nums)
{

  // This is Brute Force method for Majority Element - O(n^2)
  // int n = nums.size();
  // for (int val : nums)
  // {
  //   int freq = 0;
  //   for (int el : nums)
  //   {
  //     if (el == val)
  //     {
  //       freq++;
  //     }
  //   }
  //   if (freq > n / 2)
  //   {
  //     return val;
  //   }
  // }
  // return -1;

  // This is better Solution - O(nlogn + n)
  // int n = nums.size();
  // sort
  // sort(nums.begin(), nums.end());
  // freq count
  // int freq = 1, ans = nums[0];
  // for (int i = 1; i < n; i++)
  // {
  //   if (nums[i] == nums[i - 1])
  //   {
  //     freq++;
  //   }
  //   else
  //   {
  //     freq = 1;
  //     ans = nums[i];
  //   }
  // }

  // Optimal Approach - Moore's Voting Algorithm
  int freq = 0, ans = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    if (freq == 0)
    {
      ans = nums[i];
    }
    if (ans == nums[i])
    {
      freq++;
    }
    else
    {
      freq--;
    }
  }
  return ans;
}
int main()
{
  vector<int> nums = {1, 2, 2, 1, 1};
  int ans = majorityElement(nums);
  cout << ans;
  return 0;
}