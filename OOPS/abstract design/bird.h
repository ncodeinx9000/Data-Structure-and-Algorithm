#if !defined(BIRD_H)
#define BIRD_H
#include <iostream>
using namespace std;

class Bird
{
public:
  virtual void eat() = 0;
  virtual void fly() = 0;
};

class sparrow : public Bird
{
public:
  void eat()
  {
    cout << "Sparrow is eating\n";
  }
  void fly()
  {
    cout << "Sparrow is flying\n";
  }
};

class eagle : public Bird
{
public:
  void eat()
  {
    cout << "eagle is eating\n";
  }
  void fly()
  {
    cout << "eagle is flying\n";
  }
};

class pigeon : public Bird
{
public:
  void eat()
  {
    cout << "Pigeon is eating\n";
  }
  void fly()
  {
    cout << "Pigeon is flying\n";
  }
};
#endif // BIRD_H
