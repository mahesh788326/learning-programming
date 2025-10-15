#include<iostream>
using namespace std;

template<typename gen>
void swap (gen a , gen b) {
    gen temp;
    temp = a;
    a = b;
    b = temp;

    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}   

int main()
{
  swap(25,75);
  swap(10.65,71.87);
  swap('A','Z');  
  return 0;
}
