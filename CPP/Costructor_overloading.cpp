#include<iostream>
using namespace std;
class A 
{
  int a;
  public: A()
  {
    a=10;
    cout<<"Default Constructor"<<endl;
  }
  A(int b)
  {
    a = a+b;
    cout<<"Value of a = "<<a<<endl;
  }
  A(int x,double y)
  {
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
  }
};
int main()
{
  A obj1,obj2(20),obj3(30,57.85);
  return 0;
}