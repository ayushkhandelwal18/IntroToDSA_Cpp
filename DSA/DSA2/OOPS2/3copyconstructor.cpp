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

   //copy constructor // pass by refernce
    Teacher(Teacher  &Orignalobject){
        cout<<"I am custom copy constructor" <<endl;
        this->name=Orignalobject.name;
        this->subject=Orignalobject.subject;
        this->dept=Orignalobject.dept;
        this->salary=Orignalobject.salary;

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
    
     Teacher t2(t1); // default copy constructor
     //without making custom copy constructor
       t2.getInfo();
   
}