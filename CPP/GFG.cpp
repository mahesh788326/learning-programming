// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int X;
//         float Y;
//         cin >> X >> Y;
//         float c = 0.5;

//         if (X % 5 == 0 && X + c <= Y) {
//             cout << fixed << setprecision(2) << Y - X - c << endl;
//         } else {
//             cout << fixed << setprecision(2) << Y << endl;
//         }
//     }
//     return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;

// string fizzBuzz(int number) {
//     if (number < 1 || number > 100) {
//         return "Number out of range";
//     }

//     if (number % 3 == 0 && number % 5 == 0) {
//         return "FizzBuzz";
//     } else if (number % 3 == 0) {
//         return "Fizz";
//     } else if (number % 5 == 0) {
//         return "Buzz";
//     } else {
//         return to_string(number);
//     }
// }

// int main() {
//     int number;
//     cin >> number;
//     cout << fizzBuzz(number) << endl;
//     return 0;
// }
#include<iostream>
using namespace std;

class solution
{
  public:
  int n;
  void get() {
  cin>>n;
  int arr[n];
  cin>>arr[n];
  int key;
  cin>>key;
  }
  void show()
  {
  cout<<arr[key]<<endl;
  return key;
  }
  
};
int main(){
 solution s;
 s.get();
 s.show();
}
