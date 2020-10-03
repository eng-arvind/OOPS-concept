#include<iostream>
using namespace std;
class A
{
public:
  int a=10;
};
class B:public A
{
public:
  int b=20;
};
class C:public B
{
public:
  int c=30;
  void show()
  {
    cout<<a<<" "<<b<<" "<<c;
  }

};
int main()
{
  C obj;
  cout<<obj.a<<endl;
    cout<<obj.b<<endl;
      cout<<obj.c<<endl;
        obj.show();
        return 0;

}
