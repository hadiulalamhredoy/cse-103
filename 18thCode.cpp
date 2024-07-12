#include<iostream>
using namespace std;
class person{
public:
    person(){
    cout<<"constructor of the person class called"<<endl;

    }
    ~person(){

    cout<<"destructor of the person class called"<<endl;
    }
};
class Student : public person{
public:
    Student(){

    cout<<"Constructor of the student class called"<<endl;
    }
    ~Student(){
    cout << "destructor of the student class called"<<endl;

    }
};

int main()
{
    Student anil;
    return 0;

}
