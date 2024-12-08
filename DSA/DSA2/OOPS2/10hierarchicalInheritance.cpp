#include<iostream>
using namespace std;

class Student{
    public :
    string name;
    int rollNO;
    
};

class Teacher : public Student{
    public :
    string subject;
    int salary;
};

class MTechstudent : public Student{
    public:
 
};

int main(){
   MTechstudent m1;
   m1.name="ayush";
   m1.salary=90000;

   cout<<m1.name <<endl;
   cout<<m1.salary;

   return 0;

}