#include<iostream>
using namespace std;

class Person{
    public :
    string name;
    int age;
};

class Student : public Person{
    public :
    int rollNO;
};

class Gradstudent : public Student{
  public :
  string ResearchArea;
};

int main(){
   
    Gradstudent s1;

    s1.name="Ayush Khandelwal";
    s1.ResearchArea="biotech";

    cout<<s1.name <<endl;
    cout<<s1.ResearchArea;
    
}