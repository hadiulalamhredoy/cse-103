
#include<iostream>
#include<string>
using namespace std;
class person{
protected:
    string name;
public:
    void setName(string iname){
    name = iname;

    }
};
class Student : private person{
public:
    Person :: name ;
    person::setName;
    void display(){
    cout<<name<<endl;
    }
    void StudentSetName(string iname){
    setName(iname);
    }
} ;


int main()
{
    Student anil;
    anil.SetName("anil");
    anil.display();
    return 0;
}

