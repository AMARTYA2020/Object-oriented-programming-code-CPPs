#include <iostream>

using namespace std;

class person{
public:
    void introduce(){
    cout<<"Hi there i am a human being a philanthropist person"<<endl;
    cout<<"This is a base class person"<<endl;
    cout<<endl;
    }
};

class student:public person{
public:
    void introduce(){
    cout<<"Hi there i am a competitive programmer"<<endl;
    cout<<"This is AMARTYA from derived class"<<endl;
    cout<<endl;
    }
};

int main()
{
    student Amartya;
    Amartya.introduce();
    Amartya.person::introduce();
    return 0;
}
