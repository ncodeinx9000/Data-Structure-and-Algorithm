#include <iostream>
#include <string>

using namespace std;
class Student
{

  // If we do perfect encapsulation then all the attributes or properties cannot be accessed
private:
  // Attributes
  int id;
  int age;
  string name;
  int nos;
  float *gpa;
  string gf;

public:
  void setGpa(float a)
  {
    // layer of authentication
    *this->gpa = a;
  }
  float getGpa() const
  {
    return *this->gpa;
  }

  int getAge() const
  {
    return this->age;
  }

  // ctor: Default ctor
  Student()
  {
    cout << "Student Default ctor called" << endl;
  }

  // ctor: Parameterised ctor
  Student(int id, int age, string name, int nos, float gpa, string gf)
  {
    cout << "Student Parameterised ctor called" << endl;
    this->id = id;
    this->age = age;
    this->name = name;
    this->nos = nos;
    this->gpa = new float(gpa);
    this->gf = gf;
  }

  // copy ctor
  Student(const Student &srcobj) // scrobj => A
  {
    cout << "Student copy called " << endl;
    this->id = srcobj.id;
    this->age = srcobj.age;
    this->name = srcobj.name;
    this->nos = srcobj.nos;
  }

  // Behaviour / Methods / Functions
  void Study()
  {
    cout << this->name << "Studying" << endl;
  }

  void sleep()
  {
    cout << this->name << "Sleeping" << endl;
  }
  void bunk()
  {
    cout << this->name << "Bunking" << endl;
  }

  // dtor: Default dtor
  ~Student()
  {
    cout << "Student Default dtor called" << endl;
    delete this->gpa;
  }

private:
  void gfchating()
  {
    cout << this->name << "chatting with gf" << endl;
  }
};

int main()
{
  Student A(1, 12, "Ranu", 5, 7.8, "Menu");

  // We have added the layer can't directly access the private attributes
  // cout << A.age << endl;

  // Inaccessible
  // cout << A.gf << endl;
  // cout<<A.gfchating();

  cout << A.getGpa() << endl;
  A.setGpa(6.7);
  cout << A.getGpa() << endl;
  return 0;
}