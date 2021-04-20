#include <iostream>

using namespace std;

class father{
protected:
    int height;
public:
    father()
    {
        cout<<"constructor of class father is called which is the base class"<<endl;
    }

};

class child:father{
public:
    child(int x):father(){
    height=x;
    cout<<"constructor of class child is called which is the derived class of father"<<endl;
    }

void display()
{
    cout<<"Height is "<< height <<endlf;
}
};
int main(){
child Amartyapandey(20);
Amartyapandey.display();
return 0;
}
