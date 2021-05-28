#include <iostream>

using namespace std;

class human{
public:
    string name;
    int age;
    string address;
    string countryname;

    void display()
    {
        cout<<"Hi name is "<<name<< "I am "<<age<<"And my address is"<<address<<"my country is "<<countryname<<endl;
    }
};

int main()
{
human my_introduction;
my_introduction.name="Amartya pandey";
my_introduction.age='20';
my_introduction.address="RR plot,kolkata ,west bengal";
my_introduction.countryname="INDIA";
my_introductiion.display();
return 0;
