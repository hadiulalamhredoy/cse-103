
//based on the tutorial of private inheritence
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
    void display(){
    cout<<name<<endl;
    }
    void StudentSetName(string iname){
    setName(iname);
    }
} ;
class GStudent : public Student{
public:
    void setGStudentName(string iname){
    StudentSetName(iname);

    }

};

int main()
{
    GStudent anil;
    anil.setGStudentName("anil");
    anil.display();
    return 0;
}
