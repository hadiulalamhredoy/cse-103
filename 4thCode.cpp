#include<iostream>
#include<string>
using namespace std;
class Human{
private:
    string name;
    int age;
public:
    Human(){
        name="noname";
        age=0;
        cout<<"Constructor is called when u create an object of human"<<endl;
        }
     void display(){
     cout<<name<<endl<<age<<endl;
     }


};
int main()
{
    Human anil;
    anil.display();
    return 0;
}
