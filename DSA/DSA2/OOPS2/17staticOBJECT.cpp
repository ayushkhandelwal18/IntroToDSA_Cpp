#include<iostream>
using namespace std;

class ABC{
    public :

    ABC(){
        cout<<"constructor" <<endl;
    }

    ~ABC(){
        cout<<"destructor"  <<endl;
    }

};

int main(){

    if(true){
        // ABC obj; 
         
        static ABC obj;

        // dono me alag numberwise print hoga
    }

     cout<<"end of main function" <<endl;
    

}