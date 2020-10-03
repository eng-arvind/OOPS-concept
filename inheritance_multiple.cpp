#include<iostream>
using namespace std;
class first
{
public:
  void show()
  {
    cout<<"fist parant class";
  }
};
class second
{
public:
  void show1()
  {
    cout<<"second parant class";
  }
};
class child: public second, public first
{
public:

  void show2()
  {
    cout<<"child class inherited first and second";
  }
};
int main()
{
  child p1;
  p1.show();
  p1.show1();
  p1.show2();
  return 0;
}
