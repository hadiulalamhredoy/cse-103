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
    name = "noname";
    age = 0;
    }
    Human(string iname,int iage = 0){
    cout<<"overloaded constructor"<<endl;
    name= iname;
    age = iage;
     }
     void speakUp(){
         cout<<name<<age<<endl;

     }
};


int main()
{
    Human anil("anil",24);
    anil.speakUp();
    return 0;
}
