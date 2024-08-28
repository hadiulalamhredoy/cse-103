#include<iostream>
using namespace std;
class Human{
public:
    static int human_count;
    Human(){
    human_count++;
    }
    void humanTotal(){
    cout<<"There are "<<"human count" <<" peoples are in the program"<<endl;

    }




};
int Human::human_count = 0;
int main()
{
    cout<<Human::human_count<<endl;
    Human anil;
    anil.humanTotal();
    cout<<Human::human_count<<endl;
    return 0;
}
