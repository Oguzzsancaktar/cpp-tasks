//2017555021 Esra Ertsak
//2017555051 Oğuz Taha Sancaktar
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class People
{
public:

  char name[20];

};



class Staff : public People
{
public:
    int i;
    Staff()
    {
        int i = 3;
    };
};
class Manager : public People
{
public:
    int j;
    Manager()
    {
        int j = 8;
    };
};

class Lecturer : public Manager, public Staff
{
public:
    
    void set(char*a){
        strcpy(name ,a);
        };
    void get(){
        // cout<<"Lecturer name:"<<name<<endl;
        cout <<"Number of managers:"<<j<<endl;
        cout <<"Number of staff:"<<i<<endl;
        };
};

int main()
{

    Lecturer ob;
    ob.i = 1;
    ob.j = 6;
    ob.set("aaa bbb");
    ob.get();
    return 0;
}