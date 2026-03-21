#include <iostream>
#include <string>

using namespace std;
// Compile time Polymorpishm Types - 1) Function Overloading - to achieve Polymorphism
/*
class Add
{
public:
  // x, y, two int addition
  int sum(int x, int y)
  {
    cout << "Sum of two int" << endl;
    return x + y;
  }

  // x, y, z, three int addition
  int sum(int x, int y, int z)
  {
    cout << "Sum of three int" << endl;
    return x + y + z;
  }

  // double add
  double sum(double x, double y)
  {
    cout << "Sum of two double" << endl;
    return x + y;
  }
};
*/

/***************************************************************************************************************************/

// 2) Operator Overloading
class Complex
{
public:
  int real;
  int imag;

  Complex()
  {
    real = imag = -1;
  }

  Complex(int r, int i) : real(r), imag(i) {};

    // syntax for operator overloading
  /*Ret_type operator<op>(args)
  {
    // adfsbvdd
    return <>
  }*/

  Complex operator+(const Complex &B)
  {
    /// this -> A instance
    Complex temp;
    temp.real = this->real + B.real;
    temp.imag = this->imag + B.imag;
    return temp;
  }
  Complex operator-(const Complex &B)
  {
    /// this -> A instance
    Complex temp;
    temp.real = this->real - B.real;
    temp.imag = this->imag - B.imag;
    return temp;
  }

  bool operator==(const Complex &B)
  {
    /// this -> A instance
    return (this->real == B.real) && (this->imag == B.imag);
  }
  void print()
  {
    printf("[%d + i%d]\n", this->real, this->imag);
  }
};
int main()
{
  // Function Overloading example
  //   int x = 5, y = 3;
  //   int z = 2;
  //   Add add;
  //   cout << add.sum(x, y) << endl;
  //   cout << add.sum(x, y, z) << endl;
  //   cout << add.sum(5.2, 2.3) << endl;

  Complex A(2, 5);
  A.print();
  Complex B(2, 3);
  B.print();

  bool a = A == B;

  Complex C = A + B;
  C.print();

  Complex D = A - B;
  D.print();
  return 0;
}