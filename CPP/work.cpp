// #include<iostream>
// using namespace std;
// class A {
//   int a,b;
//   double c;
//   public : A(int x,int y,double z)
//   {
//     a=x;
//     b=y;
//     c=z;
//   }
//   void display()
//   {
//     cout<<a<<" "<<b<<" "<<c<<endl;
//   }
// };
// int main()
// {
//   A obj1(10,20,85.95);
//   obj1.display();
//   A obj2 = obj1;
//   obj2.display();std }


// #include<iostream>
// using namespace std;
// class cse6
// {
//   int a;
//   public: cse6(int x)
  
//   {
//     a=x;
//   }
//   void display()
//   {
//     cout<<"a= "<<a<<endl;
//   }

//  ~ cse6(){
// cout<<"Destructor is at ...."<<endl;
//  }
// };



// int main()
// {
//   cse6 obj1(20);
//   obj1.display();
// }




#include<iostream>
using namespace std;

class A {
  int p,q,r;
  double x;
 public:  
 class B {
  int a;
  public: B(int x)
  {
    a = x ;
  }
  void display()
  {
    cout<<"a="<<a<<endl;
  }
 };
 public:
 class C{
  int b;
  B object1(45);
  public: C(int y);
  b=y;
 }
 void display()
 {
  cout<<"b="<<b<<endl;
 }
 void displayb()
 {
  object1.display();
 }
};

int main()
{
  A::B obj1(25);
  obj1.display();
}