#include<iostream>
using namespace std;

class Bike{
    public:
    int tyreSize;
    int engineSize;


    Bike (int tyreSize , int engineSize){
        this->tyreSize=tyreSize;
        this->engineSize=engineSize;
    
    }

   
}

};



int main(){
     Bike hero(30,90); //object creation // constructor ko call jayega
     Bike honda(40,100);
     Bike bullet(60,190);

     cout<<hero.tyreSize <<"     "  <<hero.engineSize <<endl;
     cout<<honda.tyreSize <<"     "  <<honda.engineSize<<endl;
     cout<<bullet.tyreSize <<"     "  <<bullet.engineSize<<endl;

}