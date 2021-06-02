#include <iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;
    void setname(string iname)
    {
        name=iname;
    }
    void setage(int iage)
    {
        age=iage;
    }

};

class student : public Person{
public:
    int id;
    void setid(int iid)
    {
        id=iid;
    }

    void introduce()
    {
        cout<<"Hello there my name is"<<name<<"And my age is "<<age<<"My id card no is "<<id<<endl;
    }
};

int main()
{
    student Amartyapandey;
    Amartyapandey.setname("AMARTYA");
    Amartyapandey.setage(20);
    Amartyapandey.setid(7980);
    Amartyapandey.introduce();
    return 0;
}
