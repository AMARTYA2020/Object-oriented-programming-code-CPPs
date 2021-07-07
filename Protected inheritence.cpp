#include <iostream>

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
class student:protected person{
public:
    void display(){
    cout<<name<<endl;
    }
void setstudentname(string iname){
setname(iname);
}

};

int main(){
student Amartyapandey;
Amartyapandey.setstudentname("AMARTYAPANDEY");
Amartyapandey.display();
return 0;
}
