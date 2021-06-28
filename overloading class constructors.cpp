#include <iostream>
#include<string>
using namespace std;

class Human{
private:
    int age;
    string name;
public:
    Human(){
    cout<<"Default constructor is called"<<endl;
    age=20;
    name="Amartya pandey";
    }



    Human(string iname){
    cout<<"Constructor with name as the parameter called"<<endl;
    age=21;
    name=iname;
    }

    Human(int iage){
    cout<<"Constructor with age as the parameter called"<<endl;
    age=iage;
    name="Amartya pandey";
    }

    void display()
    {
        cout<<"My name is "<<name<<"and i am "<<age<<"years old"<<endl;
    }
    };

    int main()
    {
        Human Jyoti;
        Jyoti.display();
    }
