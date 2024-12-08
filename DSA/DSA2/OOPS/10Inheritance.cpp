#include<iostream>
using namespace std;

class vehicle{
public:
    int tyresize;
    int enginesize;
    int lights;
     string companyname;

     void showCompany(){
        cout<<companyname <<endl;
     }
};

class car : public vehicle{
    public:
   int steeringsize;
};

class bike: public vehicle{
    public:
    int handlesize;
   };

int main(){

   bike honda;
   honda.handlesize=10;
   honda.tyresize=90;
   honda.companyname="Hero Honda";

   honda.showCompany();

}