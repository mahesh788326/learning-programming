// #include<iostream>
// using namespace std;

// factorial(int n)
// {
//     if(n==0||n==1)
//      return 1;
//     else
//      return n*factorial(n-1);
// }

// int main()
// {
//     int num;
//     cout<<"Enter a number to find it's Factorial: ";
//     cin>>num;
//     cout<<"Factorial of "<<num<<" is: "<<factorial(num);
//     return 0;
// }


#include <iostream>
using namespace std;

void callByValue(int x) {
    x = x + 10;
    cout << "Inside callByValue function, x = " << x << endl;
}

void callByReference(int &y) {
    y = y + 10;
    cout << "Inside callByReference function, y = " << y << endl;
}

int main() {
    int a = 5, b = 5;

    cout << "Initially: a = " << a << ", b = " << b << endl;

    callByValue(a);
    cout << "After callByValue, a = " << a << endl;

    callByReference(b);
    cout << "After callByReference, b = " << b << endl;

    return 0;
}
