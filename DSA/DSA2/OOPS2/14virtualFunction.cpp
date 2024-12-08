#include<iostream>
using namespace std;
 
class Parent{
    public:

   void getinfo(){
        cout<<"Parent class\n";
    }

   virtual void hello(){
        cout<<"hello form parent\n";
    }


};

class Child{
    public:

    void getinfo(){
        cout<<"child class\n";
    }

    
    void hello(){
        cout<<"hello form child\n";
    }
};

int main(){

    Child c1;
    c1.hello();

   

 
}