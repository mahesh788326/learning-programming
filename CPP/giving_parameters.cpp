#include<iostream>
using namespace std;
class sample
{
    public:
    int x;
    void get(int n)
    {
      x=n;
    }
    void show()
    {
        cout<<"x="<<x;
    }
};
int main()
{
    sample s;
    s.get(6);
    s.show();
    return 0;
}

// #include<iostream>
// using namespace std;
// class emp
// {
//     public:
//     string first;
//     string last;
//     void get()
//     {
//         cout<<"Enter your first name: "<<endl;
//         getline(cin,first);
//         cout<<"Enter your last name: "<<endl;
//         getline(cin,last);
//     }
//     void show()
//     {
//         cout<<"Name="<<first<<" "<<last;
//     }
// };
// int main()
// {
//     emp e;
//     e.get();
//     e.show();
//     return 0;
// }