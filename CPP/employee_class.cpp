#include <iostream>
using namespace std;
class employee
{
    public:
    int e_id;
    string name;
    string role;
    void get()
    {
        cout<<"Enter id number:"<<endl;
        cin>>e_id;
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter your role:"<<endl;
        cin>>role;
    }
    void show()
    {
        cout<<"\nid="<<e_id<<endl;
        cout<<"name="<<name<<endl;
        cout<<"role="<<role<<endl;
    }
};
int main()
{
    employee d;
    d.get();
    d.show();
    return 0;
}