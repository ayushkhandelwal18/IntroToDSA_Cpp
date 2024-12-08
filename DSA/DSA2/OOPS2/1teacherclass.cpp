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

   // constructor sabse phle call hoga

   //non-parameterised constructor
    Teacher(){ 
        //ab sabke liye dept computer science hai
        // jab jab cout<<dept call hoga comp science hi print hoga
        dept="Computer Science"; 
        cout<<"Hi ! I am constructor " <<endl;
    }

  

   void setSalary(double money){
        salary=money;
        
    }

    double getSalary(){
        return salary;
    }


};




int main(){

    Teacher t1;
    Teacher t2;
    Teacher t3;
    Teacher t4;

    t1.name="Ayush Khandelwal";
   
    t1.subject="Enterprenurship";
    t1.setSalary(400000);

    cout<<t1.name <<endl;
    cout<<t1.dept <<endl;
    cout<<t1.subject <<endl;
    cout<<t1.getSalary();
   


}