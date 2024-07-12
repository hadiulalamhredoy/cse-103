#include<iostream>
#include<string>
using namespace std;
class Human{
private:
    int age;
    string name;
public:
    Human(){
        cout<<"default constructor"<<endl;
        age = 0;
        name = "no name";
    }
    Human(string iname){
        cout<<"constructor with name as parameter"<<endl;
        age = 0;
        name = "iname";

    }
    Human(int iage){
        cout<<"default constructor with age as parameter"<<endl;
        age = iage;
        name = "no name";
    }

void display(){
    cout<<name<<endl<<age<<endl;
}
};
int main()
{
    Human anil;
    anil.display();
    Human andy("andy");
    andy.display();
    Human alex;
    alex.display();

    return 0;
}
