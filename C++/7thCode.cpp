#include<iostream>
#include<string>
using namespace std;
class Human{
private:
    string name;
    int age;
public:
    Human(){
    cout<<"default constructor"<<endl;
    name="no name";
    age=0;

    }
    Human(string iname,int iage){
    cout<<"overloaded Constructor"<<endl;
    name = iname;
    age = iage;
    }
    void speakUp(){
    cout<<name<<endl<<age<<endl;


    }

};

int main()
{
    Human anil("anil",24);
    anil.speakUp();
    return 0;
}
