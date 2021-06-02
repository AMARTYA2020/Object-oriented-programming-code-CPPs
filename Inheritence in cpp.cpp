#include <iostream>
#include<string>
using namespace std;

class person{
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

class student:public person{
public:
    int id;
    int cid;
    void setid(int iid)
    {
        id=iid;
    }
    void setcid(int ccid)
    {
        cid=ccid;
    }

    void introduce()
    {
        cout<<"Hi i am "<<name<<"I am "<<age<<"years old"<<endl<<"MY id card no is "<<id<<"Library id no is "<<cid<<endl;
    }

};

int main()
{
    student Amartyapandey;
    Amartyapandey.setname("Amartyapandey");
    Amartyapandey.setage(20);
    Amartyapandey.setid(123456);
    Amartyapandey.setcid(54321);
    Amartyapandey.introduce();
    return 0;
}
