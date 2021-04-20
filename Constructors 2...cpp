#include <iostream>
#include<string>
using namespace std;

class Human{
private:
    string name;
    int age;
public:
    Human(){
    cout<<"The default constructor is called which is automatically called when object of a class is called"<<endl;
    name="Amartya pandey";
    age='20';
    }
 void display()
{
    cout<<"My name is "<<name<<endl<<"And my age is "<<age<<endl;
}

};

int main()
{
    Human anil;
    anil.display();
    return 0;
}
