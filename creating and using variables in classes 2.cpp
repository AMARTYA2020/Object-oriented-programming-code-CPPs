#include <iostream>

using namespace std;

class Humanbeing{
public:
    int age;
    string husbandname;
    string wifename;
    string address;
    string collegename;

 void introduction()
 {
     cout<<"Hello everyone i am "<<husbandname<< "and the name of my wife is"<<wifename<<"our address is at"<<address<<"I am a b.tech from "<<collegename<<endl;
 }

};

int main()
{
    Humanbeing myintroduction;
    myintroduction.age=20;
    myintroduction.husbandname="Amartya pandey";
    myintroduction.wifename="Jyoti srivastav";
    myintroduction.address="RR plot, kolkata";
    myintroduction.collegename="Meghnad saha institute of technology MSIT";
    myintroduction.introduction();
return 0;
}
