#include <bits/stdc++.h>

using namespace std;

void explainVector()
{
  vector<int> v1;

  v1.push_back(1);
  v1.emplace_back(2);

  vector<pair<int, int>> vec;
  vec.push_back({1, 2});
  vec.emplace_back(1, 2);

  vector<int> v(5, 100);

  vector<int> v2(5, 20);
  vector<int> v3(v2);

  cout << v[0] << " " << v.at(0);
  cout << v.back();

  // ITERATOR
  vector<int>::iterator it = v.begin();
  it++;
  cout << *(it) << " ";

  it = it + 2;
  cout << *(it) << " ";

  // End will point to memory location after last element and if pointer is at the it then you have it-- then only it will point to last element
  vector<int>::iterator it = v.end();

  // These two rend and rbegin rarely used
  vector<int>::reverse_iterator it = v.rend();
  vector<int>::reverse_iterator it = v.rbegin();

  // how to print an vector
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
  {
    cout << *(it) << " ";
  }
  // OR
  for (auto it = v.begin(); it != v.end(); it++)
  {
    cout << *(it) << " ";
  }
  // OR
  for (auto it : v)
  {
    cout << it << " ";
  }

  // delete function
  // {10, 20, 12, 23}
  v.erase(v.begin() + 1);

  // {10, 20, 12, 23, 35}
  v.erase(v.begin() + 2, v.begin() + 4); // // {10, 20, 35} [start, end)

  // Insert function
  vector<int> v(2, 100);          //{100, 100}
  v.insert(v.begin(), 300);       // {300, 10, 10, 100, 100}
  v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

  vector<int> copy(2, 50);                       // {50, 50}
  v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

  // {10, 20}
  cout << v.size(); // 2

  //{10, 20}
  v.pop_back(); //{10}

  // v1 -> {10, 20}
  // v2 -> {30, 40}
  v1.swap(v2); // v1 -> {30, 40}, v2 -> {10, 20}

  v.clear(); // erases the entire vector

  cout << v.empty();
}

int main()
{
  explainVector();
  return 0;
}