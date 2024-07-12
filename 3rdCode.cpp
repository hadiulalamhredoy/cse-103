#include<iostream>
using namespace std;
class Human{
private:
    int age;
    int getAge(){
        return age-5;
    }
public:
    void displayAge(){
        cout<<getAge()<<endl;
    }
    void setAge(int value){
        age = value;

    }
};
int main()
{
    Human anil;
    anil.setAge(24);
    anil.displayAge();
    return 0;
}
