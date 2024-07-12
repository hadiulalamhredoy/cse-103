 #include<iostream>
 #include<string>
 using namespace std;
 class Human{
 public:
     string name;
     void introduce();
 };
 void Human :: introduce(){
     cout<<Human :: name<<endl;
 }
 int main()
 {
     Human anil;
     anil.name = "anil";
     anil.introduce();
     return 0;
 }
