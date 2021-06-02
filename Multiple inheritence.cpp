#include <iostream>
#include<string>
using namespace std;

class father{
public:
    int height;
    void askfather()
    {
        cout<<"I am your father ask me what you want from myside"<<endl;
    }

};

class Mother{
public:
    string skincolour;
    void askmother()
    {
        cout<<"I am your mother ask me what you want from myside"<<endl;
    }
};

class child:public father,public Mother{
public:
    void askparents()
    {
        cout<<"I am aking my details from my parents"<<endl;
    }
    void setcolor(string icolour)
    {
        skincolour=icolour;
    }
    void setheight(int iheight)
    {
        height=iheight;
    }
    void display()
    {
        cout<<"Height is "<< height <<"and skin colour is "<< skincolour <<endl;
    }

};

int main()
{
    child Amartyapandey;
    Amartyapandey.setcolor("fair");
    Amartyapandey.setheight(6);
    Amartyapandey.display();
    Amartyapandey.askfather();
    Amartyapandey.askmother();
    return 0;
}
