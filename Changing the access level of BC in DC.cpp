#include <iostream>
#include<string>
using namespace std;

class person{
protected:
    string name;
public:
    
    void setname(string iname)
    {
        name=iname;
    }

};
class student : private person{
public:
person::name;
void display()
{
    cout<<name<<endl;
}
void studentsetname(string iname)
{
    setname(iname);
}

};

int main()
{
    student Amartya;
    Amartya.name="Amartyapandey";
    Amartya.display();
    return 0;
}
