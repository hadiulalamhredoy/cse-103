#include<iostream>
#include<string>
using namespace std;
class Human{
public:
    string name;
    void introduce(){
        cout<<"hi "<<name<<endl;

    }

};
int main()
{
    Human *anil = new Human();
    anil->name="anil";
    anil->introduce();
    Human *bunty = new Human();
    bunty->name ="Bunty";
    bunty->introduce();
    return 0;

}
