//based on the tutorial of protected inheritence
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
class Student : protected person{
public:
    void display(){
    cout<<name<<endl;
    }
    void setStudentName(string iname){
    setName(iname);
    }
} ;

int main()
{
    Student anil;
    anil.setStudentName("anil");
    anil.display();
    return 0;
}
