#include<iostream>
using namespace std;

class Gun{
    public:
  int ammo;
  int damage;
  int scope;
};

class Player{
    
    class Helmet{
      int hp;
      int level;

      public:

     void setHP(int hp){
        this->hp=hp;
     }
     void setLEVEl(int level){
        this->level-level;
     }
  
      int getHP(){
      return hp;
      }

      int getLEVEL(){
       return level;
         }
    };

 private:
    int health;
    int score;
    int age;
    bool alive;
    Gun gun;
    Helmet helmet;

    

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

    Gun getGUN(){
        return gun;
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

    void setGUN(Gun gun){
       this->gun=gun;
    }

    void setHelmet(int level){
        Helmet *helpro =new Helmet;
        helpro->setLEVEl(level);

        int health=0;

        if(level==1) health=25;
        else if(level==2) health=50;
        else if(level==3) health=100;
        else cout<<"Error , Invalid Level";

        helpro->setHP(health);
        this->helmet=*helpro;
    }
 
  void getHelmet(){
    cout<<helmet.getHP() <<endl;
    cout<<helmet.getLEVEL() <<endl;
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

    Gun akm;
    akm.ammo=200;
    akm.damage=50;
    akm.scope=5;

    ayush.setage(19);
    ayush.sethealth(50);
    ayush.setscore(90);
    ayush.setisAlive(true);
    ayush.setGUN(akm);
    ayush.setHelmet(2);

    Gun awm;
    awm.ammo=100;
    awm.damage=500;
    awm.scope=255;


     sakshi.setage(20);
    sakshi.sethealth(60);
    sakshi.setscore(100);
    sakshi.setisAlive(true);
    sakshi.setGUN(awm);
    sakshi.setHelmet(3);

    Gun ak47=ayush.getGUN();
    cout<<ak47.damage <<endl;
     cout<<ak47.ammo<<endl;
      cout<<ak47.scope <<endl;

        Gun ak900=sakshi.getGUN();
    cout<<ak900.damage <<endl;
     cout<<ak900.ammo<<endl;
      cout<<ak900.scope <<endl;

     ayush.getHelmet();


    // chikku->setage(25);
   // cout<<chikku->getage() <<endl;
   
     chikkuObject.setage(25);
    cout<<chikkuObject.getage() <<endl;

    cout<<addage(ayush,sakshi) <<endl;
   Player ans= getMaxAge(ayush,sakshi);
  cout<<ans.getage();


    
}