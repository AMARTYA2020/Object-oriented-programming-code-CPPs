#include <iostream>
#include<string>
using namespace std;

class Human{
public:
string name;
int age;
public:
  void display()
  {
      cout<<"Hello world to everyone my name is  "<<name<<"My age is  "<<age<<endl;
  }
};

int main()
{
    Human *myintroduction= new Human();
    myintroduction->name="Amartya pandey";
    myintroduction->age=20;
    myintroduction->display();
    return 0;

}
