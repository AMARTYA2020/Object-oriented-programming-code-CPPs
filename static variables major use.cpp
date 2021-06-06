#include <iostream>

using namespace std;


void display();
int main()
{
    
    display();
    display();
    display();
    return 0;
}

void display()
{
    static int counter=0;
    cout<<"Display function called"<<++counter<<"times"<<endl;
    cout<<"Static keyword is used inside a function that variable will be availablle to fuction calls"<<endl;

}
