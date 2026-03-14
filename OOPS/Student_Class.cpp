#include <iostream>
#include <string>

using namespace std;
class Student
{
public:
  // Attributes
  int id;
  int age;
  string name;
  int nos;
  int *gpa;

  // ctor: Default ctor
  Student()
  {
    cout << "Student Default ctor called" << endl;
  }

  // ctor: Parameterised ctor
  Student(int id, int age, string name, int nos, float gpa)
  {
    cout << "Student Parameterised ctor called" << endl;
    this->id = id;
    this->age = age;
    this->name = name;
    this->nos = nos;
    this->gpa = new int(gpa);
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
};

int main()
{
  // Student A;
  // A.id = 1;
  // A.age = 15;
  // A.name = "Ranu";
  // A.nos = 6;

  // A.Study();

  // Student B;
  // B.id = 2;
  // B.age = 15;
  // B.name = "Rahul";
  // B.nos = 5;

  // B.bunk();

  // Student A(1, 15, "Ranu", 6); // Stack
  // Student B(1, 13, "Rahul", 4);
  // Student C(1, 11, "Rena", 6);
  // Student D(1, 43, "Ronaldo", 6);

  // cout << A.name << " " << A.age << endl;

  // copy ctor
  // Student C = A;
  // Student C(A);

  // cout << C.name << " " << A.name << endl;

  // Dynamic alllocation, or Student pointer;
  Student *A = new Student(1, 14, "Babban", 7, 9.8);
  cout << A->name << endl;
  cout << A->age << endl;
  A->Study();
  delete A;
  return 0;
}