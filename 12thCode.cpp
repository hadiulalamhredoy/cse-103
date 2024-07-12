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
class student : public person{
public:
    void display(){
    cout<<name<<endl;
    }



};
int main()
{
    student anil;
    anil.setName("anil");
    anil.display();
    return 0;
}
