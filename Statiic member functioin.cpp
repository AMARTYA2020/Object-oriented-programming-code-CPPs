#include <iostream>

using namespace std;

class Human{
public:
    static int humancount;

    human(){
    humancount++;
    }
    void humantotal()
    {
        cout<<"There are "<<humancount<<"people inside in this classroom rest are absent today for no any specific reason"<<endl;

    }
    static void countinghuman()
    {
        cout<<"There are"<<humancount<<"people here"<<endl;
    }

};
int Human::humancount=0;
int main()
{
    cout<<Human::humancount<<endl;
    Human Amartyapandey;
    Human jyotisrivastav;
    Human Divyasrivastav;
    Human::countinghuman();
    cout<<Human::humancount<<endl;
    return 0;
}
