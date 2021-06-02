#include <iostream>

using namespace std;

class introduction{
public:
    void display(){
    cout<<"OOPs concepts begins from objects and classes,Class is a userdefined data type that allows us to group numerous activities and action together"<<endl;
    }

    void constructor(){
    cout<<"\n A constructor is automatically called when we create an object of a class"<<endl;
    }

};

int main()
{
    introduction ByAmartyapandey;
    ByAmartyapandey.display();
    ByAmartyapandey.constructor();
    return 0;
}
