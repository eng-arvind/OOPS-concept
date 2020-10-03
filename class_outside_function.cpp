#include<bits/stdc++.h>
using namespace std;
class MyClass {
  public:
    int  myMethod();
};

int MyClass::myMethod()
{
  return 1;
}

int main() {
  MyClass myObj;
  cout<<myObj.myMethod();
  return 0;
}
