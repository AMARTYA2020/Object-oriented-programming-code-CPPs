#include <iostream>

using namespace std;

class person{
public:
    person()
    {
        cout<<"constructor of the class person i.e base class is called"<<endl;
    }
    ~person()
    {
        cout<<"destructor of the class person i.e base class is called"<<endl;
    }

};
class student:public person{
public:
    student(){
    cout<<"constructor of the class student i.e derived class is called"<<endl;
    }
    ~student(){
    cout<<"Destructor of the class student i.e derived class is called"<<endl;
    }

};

int main()
{
    student Amartya;
    return 0;
}
