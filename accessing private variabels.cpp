#include <iostream>

using namespace std;

class Human{
private:
    int age;

public:
    void displayage(){
    cout<<"I am Amartya pandey i am "<<age<<" years old"<<endl;
    }

    void setage(int value)
    {
        age=value;

    }
};

int main()
{
    Human *Amartyapandey= new Human();
    Amartyapandey->setage(20);
    Amartyapandey->displayage();
    return 0;
}
