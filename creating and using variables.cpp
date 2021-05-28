#include <iostream>
#include<string>

using namespace std;

class humanbeing{
public:
    string name;
    void introduce()
    {
        cout<<"Hi my name is "<<name<<endl;
    }

};

int main()
{
    humanbeing Amartya;
    Amartya.name="Amartya";
    Amartya.introduce();

    return 0;
}
