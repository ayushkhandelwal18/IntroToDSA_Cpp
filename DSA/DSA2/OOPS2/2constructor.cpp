#include<iostream>
#include<string>

using namespace std;

class Teacher{

      private:
    double salary;

    public:
    string name;
    string dept;
    string subject;


     //parameterised constructor
    Teacher(string n , string d,string s,double sal){ 
       name=n;
       dept=d;
       subject=s;
       salary=sal;
    }

    void getInfo(){
        cout<<"name : "  <<name <<endl;
        cout<<"department : " <<dept <<endl;
        cout<<"subject : " <<subject <<endl;
        cout<<"salary : " <<salary <<endl;
    }



};




int main(){

    Teacher t1("Ayush Khandelwal" , "ECE" , "C++" , 40000);
    
  t1.getInfo();

   
}