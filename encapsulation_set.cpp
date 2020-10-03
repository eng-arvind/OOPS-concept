#include<iostream>
using namespace std;
class enc
{
private:
  int sal;
public:
  void set_sal(int a)
  {
    sal=a;
  }
  int get_sal()
  {
    return sal;
  }
};
int main()
{
  enc p1;
  p1.set_sal(2000);
  cout<<p1.get_sal();
  return 0;
}
