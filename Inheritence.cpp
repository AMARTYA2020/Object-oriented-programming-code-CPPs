#include <iostream>

using namespace std;

class Person{
protected:
    string name;
public:
    void setname(string iname)
    {
        name=iname;
    }

};
class student:public Person{// When we have protected access specifier in base class they are available in the derive class as public
public:
void display()
{
    cout<<name<<endl;
}

};
int main()
{
    student Amartyapandey;
    Amartyapandey.setname("AMARTYAPANDEY");
    Amartyapandey.display();
    return 0;
}
