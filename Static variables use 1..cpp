#include <iostream>

using namespace std;
void display();
int main()
{
    display();
    return 0;
}

void display()
{
    static string name = "Amartyapandey";
    static int times= 3;
    cout<<"Display funtion is calling "<< name << times<<"times"<<endl;
}
// No matter wheather ypu write static o not constran output
