#include<iostream>
using namespace std;
class cse6{
  int i;
  public: void seti(int n)
  {
    i=n;
  }
  int geti()
  {
    return i;
  }
};
cse6 newfun()
{
  cse6 x;
  x.seti(10);
  return x;
}
int main()
{
  cse6 obj;
  obj=newfun();
  cout<<"Now we are in main.....printing i = "<<obj.geti()<<endl;
  return 0;
}