#include<iostream>
using namespace std;

class A{
    public: 
    int a_ka_public;

};

class B : public A{
   public: 
    int b_ka_public;
};

class C : public A{
  public: 
    int c_ka_public;
};

class D: public B , public C {
  public: 
    int d_ka_public;
};


int main(){

}