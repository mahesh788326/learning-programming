#include<iostream>
using namespace std;

template<typename T>
T sum(T x, T y) {
    return x + y;
}

// int sum(int x, int y) {
//     return x + y;
// }
// float sum(float x, float y) {
//     return x + y;
// }
// double sum(double x, double y) {
//     return x + y;
// }

int main()
{
    cout<<"Sum of integers:"<<sum(5, 10)<<endl;
    cout<<"Sum of floats:"<<sum(72.65, 65.19)<<endl;
    cout<<"Sum of doubles:"<<sum(1500.65, 213.79)<<endl;
    return 0;
}