#include <iostream>

using namespace std;

class father{
protected:
    int height;
public:
    father(int h)
    {
        cout<<"constructor of father is called in the class father which is a base class"<<endl;
        height=h;
    }

};
class child:father{ //any access specifier will work here
public:
child(int x):father(x){
  cout<<"Child class constructor is called "<<endl;
}
void display()
{
    cout<<"Height is "<<height<<endl;
}
};

int main()
{
    child Amartya(20);
    Amartya.display();
    return 0;
}
