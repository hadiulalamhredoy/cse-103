#include<iostream>
#include<string>
using namespace std;
class Person{
protected:
    string name;
public:
    void setName(string hasib){
    name = hasib;
    }

};
class Student : public Person{
public:
    void display(){
    cout<<name<<endl;
    }
};

int main()
{

    Student anil;
    anil.setName("anil");
    anil.display();
    return 0;
    //oop17a and oop 18a are same
}
