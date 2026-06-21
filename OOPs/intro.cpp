#include<iostream>
#include<cstring>
using namespace std;

class Hero{

    // properties
    private:
    int health; 

    public:
    char *name;
    char level;
    static int timeToComplete;

    Hero() {
        cout<<"Default constructor"<<endl;
        name = new char[100];
    }


    // parameterised constructor 
    Hero(int Health){
        this -> level = level;
       
    }

    Hero(int health, char level){
        this-> level = level;
        this -> health = health;
    }

    // copy constructor
    Hero(Hero& temp){

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout<<"copy constructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout<<endl;
        cout<<"[ name: "<<this->name<<", ";
        cout<<"health: "<<this->health<<", ";
        cout<<"level: "<<this->level<<" ]"<<endl;
    }


    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }

    ~Hero(){
        cout<<"destructor bhai called"<<endl;
    }
};

int Hero::timeToComplete = 5;

int main(){

    cout<<Hero::timeToComplete<<endl;



    // // static 
    // Hero a;

    // // dynamic
    // Hero *b = new Hero();
    // delete b;
    // manually destructor called for dynamic


    // Hero hero1;
    // hero1.setHealth(12);
    // hero1.setLevel('D');
    // char name[6] = "rohit";
    // hero1.setName(name);

    // hero1.print();

    // use defualt copy constructor
    // Hero hero2(hero1);
    // hero2.print();

    // hero1.name[0] = 'M';
    // hero1.print();
    // hero2.print(); 

    // hero1 = hero2;

    // hero1.print();
    // hero2.print();

    // // object created statically
    // Hero ramsesh(10);
    // // cout<<"Address or ramesh: "<< &ramsesh<<endl;
    // ramsesh.print();
    // // object created dynamically
    // Hero *h = new Hero(11);
    // h->print();

    // Hero temp(22, 'B');
    // temp.print();



    // // static allocation
    // Hero a;
    // a.setHealth(100);
    // a.setLevel('A');
    // cout<<"level is: "<<a.level<<endl;
    // cout<<"health is: "<<a.getHealth()<<endl;

    // // dynamic allocation
    // Hero *b = new Hero; 
    // b->setHealth(200);
    // b->setLevel('B');
    // cout<<"level is: "<<(*b).level<<endl;
    // cout<<"health is: "<<(*b).getHealth()<<endl;

    // cout<<"level is: "<<b->level<<endl;
    // cout<<"health is: "<<b->getHealth()<<endl;

    // creation of object
    // Hero ramesh;

    // cout<<"Size of ramesh: "<<sizeof(ramesh)<<endl;

    // cout<<"ramesh health is: "<<ramesh.getHealth()<<endl;

    // ramesh.setHealth(500);
    // ramesh.level = 'A';

    // cout<<"Health is: "<<ramesh.getHealth() <<endl;
    // cout<<"level is: "<<ramesh.level<<endl;
    // cout<<"size of level: "<<sizeof(ramesh.level)<<endl;

    return 0;
}