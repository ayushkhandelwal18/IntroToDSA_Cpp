#include<iostream>
using namespace std;

class Player{
    private:
    int health;
    int score;
    int age;
    bool alive;

    public:
    int gethealth(){
        return health;
    }

    int getscore(){
        return score;
    }

    int getage(){
        return age;
    }

    int isAlive(){
        return alive;
    }

    void sethealth(int health){
        // Player::health=health;
       this->health=health;
    }

     void setscore(int score){
        this->score=score;
    }

     void setage(int age){
       this->age=age;
    }

     void setisAlive(bool alive){
        this->alive=alive;
    }
};

//int return krana h to int ka function
int addage(Player a, Player b){
    return a.getage()+b.getage();
}

//konse object ki age jada hai , to player
//class hi return krni h to player type function

Player getMaxAge(Player a,Player b){
    if(a.getage() > b.getage()) return a;
    else  return b;
}



int main(){
    //static , compile time allocation
    //stack memory
    Player ayush;
    Player sakshi;

    //dynamic memory allocation
    //run time allocation
    Player *chikku =new Player;
    Player chikkuObject =*chikku;

    ayush.setage(19);
    ayush.sethealth(50);
    ayush.setscore(90);
    ayush.setisAlive(true);

     sakshi.setage(20);
    sakshi.sethealth(60);
    sakshi.setscore(100);
    sakshi.setisAlive(true);

    // chikku->setage(25);
   // cout<<chikku->getage() <<endl;
   
     chikkuObject.setage(25);
    cout<<chikkuObject.getage() <<endl;

    cout<<addage(ayush,sakshi) <<endl;
   Player ans= getMaxAge(ayush,sakshi);
  cout<<ans.getage();


    
}