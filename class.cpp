#include<bits/stdc++.h>
using namespace std;
class A
{
public:
  int a;
  int b;
  string c;
  float f;
  void  fun()
  {
  cout<<"a: "<<a<<" b: "<<b<<" c: "<<c<<" f: "<<f;
  }
};
int main()
{
  A obj;
  obj.a=10;
  obj.b=20;
  obj.c="Arvind";
  obj.f=20.5;
  obj.fun();
  return 0;
}
