#include<iostream>
#include<string>
void display();
using namespace std;
int main ()
{
    display();
   return 0;
}
void display(){
    static int counter = 0;
    cout<<"display function called "<<++counter<<" times"<<endl;

}
