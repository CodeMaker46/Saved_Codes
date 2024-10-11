#include <bits/stdc++.h>
using namespace std; 


// #include "hero.cpp" : if there is a file in which the
// hero class is defined

class HeroEmpty {

    // properties
};

class Hero{
    // properties
public:
    int health;
    char level;
    int *power;
    static int timeToComplete ;

    int getHealth() { return health; }

    void setHealth(int h)
    {
        health = h;
    }

    char getLevel() { return level; }

    void setLevel( char l)
    {
        level = l;
    }

    void setPower(int val)
    {
        *power = val;
    }

    // Constructor : object creation me hi call ho jayega 

    Hero(){
        cout<<"Constructor called "<<endl;
    }

    // Constructor : object creation me hi call ho jayega 

    Hero(int health,char level, int val)
    {
        cout<<"this->health = "<<health<<endl;
        this-> health = health;

        cout<<"this->level = "<<level<<endl;
        this-> level = level;

        cout<<"this->power = "<<*power<<endl;
        power  = new int;
        *power = val;




        // this -> health ka mtlb hai class ke andar wali health
    }

    // Copy Constructor (deep copy)

    Hero( Hero &temp)
    {
        cout<<"Copy constructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
        power =  new int ;
        *power = *(temp.power);
    }

    void print()
    {
        cout<<"health : "<<this->health<<endl;
        cout<<"level : "<<this->level<<endl;
        cout<<"power : "<<*power<<endl;
    } 

    ~Hero()
    {
        cout<<"Destructor called "<<endl;
    }

    // STATIC FUNCTION

    static void random()
    {
        cout<<" Note : can access only static members : "<<timeToComplete<<endl;
    }



};

int Hero::timeToComplete = 5;

int main()
{
    // creation of object 
    HeroEmpty h1;

    cout<<sizeof(h1)<<endl; // empty ke case me 1 dega 

    // creation of object 
    Hero h;

    // dot opearator is used to access the elements 

    cout<<"health is  : "<<h.health<<endl; // gives garbage value
    cout<<"level is  : "<<h.level<<endl; // gives garbage value

    h.health = 100;
    h.level = 'A';

    cout<<"health is  : "<<h.health<<endl; // gives : 100
    cout<<"level is  : "<<h.level<<endl; // gives : A

    h.setLevel('B');
    h.setHealth(80);

    cout<<"health is  : "<<h.health<<endl; // gives : 80
    cout<<"level is  : "<<h.level<<endl; // gives : B

    cout<<"health is  : "<<h.getHealth()<<endl; // gives : 80
    cout<<"level is  : "<<h.getLevel()<<endl; // gives : B


    // DYNAMIC ALLOCATION

    Hero *h2 = new Hero;

    h2->setHealth(50);
    h2->setLevel('C');

    cout<<"h2 health is  : "<<(*h2).health<<endl; // gives : 50
    cout<<"h2 level is  : "<<(*h2).level<<endl; // gives : C

    cout<<"h2 level is  : "<<h2->getLevel()<<endl; // gives : C


    // CONSTRUCTOR

    // constructor print hoga declaration static ho ya dynamic
    // constuctor define krte hi by default wala hat jayega

    Hero constuctor_check; // gives : constructor called

    // Parameterised constructor 

    Hero hello(10,'H',300);
     // this->health = 10 , this->level = 'H', power : 300
    
    hello.print();

    // Copy Constructor 
    cout<<endl;
    
    Hero bye(hello); // copy constructor called 
    
    bye.print();


    cout<<endl;
    hello.setLevel('P');
    hello.setPower(500); 
    // yaha change to bye me bhi change agr default constructor
    // use kar rhe hai to as wo SHALLOW copy karta hai
    hello.print();

    cout<<endl;
    bye.print();


    cout<<"For dyanamically constructed object you need to manually call the Destructor"<<endl;

    Hero *dyana = new Hero();

    delete dyana;

    // saare static destructor at the end print honge 

    // STATIC DATATYPE : it can be accessed without creating 
    // any object 

    cout<<Hero::timeToComplete<<endl;

    Hero a;
    Hero b;

    cout<<"a.timeToComplete : "<<a.timeToComplete<<endl; // 5
    cout<<"b.timeToComplete : "<<a.timeToComplete<<endl; // 5

    a.random(); // 5

    b.timeToComplete = 10;

    cout<<"a.timeToComplete : "<<a.timeToComplete<<endl; // 10
    cout<<"b.timeToComplete : "<<a.timeToComplete<<endl; // 10

    a.random(); // 10

    return 0;
}
