#include<iostream>
using namespace std;
class vehicle
{
public:
  string brand="ford";
  void honk()
  {
    cout<<"tut tut"<<endl;
  }
};

class car:public vehicle
{
public:
  string model="mustagi";

};
int main()
{
  car p1;
  p1.honk();
  cout<<p1.model<<endl;
  cout<<p1.brand<<endl;
  return 0;

}
