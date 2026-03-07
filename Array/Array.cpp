#include <bits/stdc++.h> // Includes iostream, iterator, vector, etc.

// #include <iostream>
// #include <iterator>  //Required for std::size
// #include <iostream>

// using namespace std;

// // sizeof(arr) - sizeof returns the total number of bytes the array occupies in memory, not the number of elements.

// int main()
// {
//   // declaring and initializing an array of size 5
//   int arr[5] = {33, 47, 59, 67, 98};

//   // printing array elements
//   /*Replace std::size(arr) with this:
//   int length = sizeof(arr) / sizeof(arr[0]);*/
//   for (int i = 0; i < std::size(arr); i++)
//   {
//     cout << arr[i];
//   }

//   return 0;
// }
using namespace std;

int main()
{
  int arr[] = {33, 47, 59, 67, 98};

  // std::size works because bits/stdc++.h included <iterator>
  for (int i = 0; i < size(arr); i++)
  {
    cout << arr[i] << " ";
  }
  cout << size(arr);

  return 0;
}