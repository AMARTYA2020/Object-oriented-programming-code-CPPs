#include <iostream>
#include<string>
using namespace std;

class father{
protected:
    int height;
public:
   father()
   {
       cout<<"constructor of class father called which is the base class"<<endl;
   }
};

class mother{
protected:
    string skincolour;
public:
    mother()
    {
        cout<<"constructor of class mother called which is also independent base class"<<endl;
    }

};
class child:father,mother{
public:
child(int x,string icolour):father(),mother(){
height=x;
skincolour=icolour;
cout<<"constructor of child is called which is derived class of base classes father and mother"<<endl;
}
void display(){
cout<<"Height is "<< height <<"skin texture is "<< skincolour<<endl;
}
};

int main()
{
    child Amartya(6,"fair");
    Amartya.display();
    return 0;
}
