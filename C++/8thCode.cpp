#include<iostream>
#include<string>
using namespace std;
class Human{
public:
    Human(){
    cout<<"constructor called"<<endl;

    }
    ~Human(){
    cout<<"Destructor called"<<endl;

    }
};


int main()
{
    Human *anil;
    anil = new Human();
    delete anil;
    return 0;
}
