#include <iostream>
#include<string>
using namespace std;

class Human{
private:
string name;
int age;
public:
    Human(string iname,int iage)
    {
        name=iname;
        age=iage;
    }



    void tellme()
    {
        cout<<name<<age<<endl;
    }

friend void display(Human man);
};

void display(Human man)
{
        cout<<man.name<<endl<<man.age<<endl;
}
int main()
{
    Human Amartya("Amartyapandey",20);
    display(Amartya);
    return 0;
}
