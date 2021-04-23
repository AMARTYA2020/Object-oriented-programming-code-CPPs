#include <iostream>

using namespace std;

class Human{
public:
static int humancount;

human()
{
    humancount++;
}
void humantotal()
{
    cout<<"These are "<<humancount<<" people in here rest are absent today due to bad wheather today"<<endl;
}
};

int Human::humancount = 0;

int main()
{
    cout<<Human::humancount<<endl;
    Human Amartya;
    Amartya.humantotal();
    cout<<Human::humancount<<endl;
    return 0;
}
