#include <bits/stdc++.h>
using namespace std;

// Constructor  :-

// It is a special fn that is invoked automatically at the time of object creation.

// Name of the constructor should be same as class name.

// It doesn’t have any return type.

// It is used to initialize the value.



class Customer{
	

	int acc;
	string name;
	int  balance;
	int *value;
	int *a;

	public:

	// Constructor Overloading :-

	Customer(){
		// compiler by default contructor call karta hai
		// agr contructor banaya to user ne jo banaya 
		// sirf wo use krta hai
		name = "hello";
		acc = -1;
		balance=-1;
		a = new int[100]; // agr avail nhi hua size to 
		// yahi error ajayega thats why we use class

		cout<<"Constructor 1 is called"<<endl;
	}

	// parametrized constructor and constructor overloading :-

	Customer(int acc){
		this->acc = acc; // agr this nahi likha to sabse pass wala acc dhundta hai program
		
		cout<<"Constructor 2 is called"<<endl;
	}
	Customer(int acc,int balance){
		this->acc = acc;
		this->balance = balance;
		
		cout<<"Constructor 3 is called"<<endl;
	}

	Customer(int acc,int balance,string name): name(name),acc(acc),balance(balance){
		cout<<"Inline Constructor (4) is called"<<endl;
	};

	// Copy Contructor :-

	Customer (Customer &B){

		// Copy constructor by default system ka call hota hai 
		// agr user ne define kia to system wala call nhi hoga 
		// user ka hoga NOTE & LAGANA IMP HAI NHI TO INITIALLY 
		// SYSTEM KA COPY CONTRUCTOR CALL KA TRY HOGA BUT USER HAD
		// ALREADY DEFINED HIS COPY CONSTRUCTOR SO IT WILL STUCK IN
		// INFINITE LOOP

		name = B.name;
		acc = B.acc;
		balance = B.balance;

	}

	void print(){
		cout<<"name : "<<name<<"\nacc : "<<acc<<"\nbalance : "<<balance<<endl;
	}



	// Destructor :-

	// It is an instance member function that is invoked automatically whenever an object is going to be destroyed.

	// It is a last fn that is going to be called before an object is destroyed.


	Customer(int acc,int balance,int val,string name){
		this->acc = acc;
		this->balance = balance;
		value = new int; // dynamic memory assign kar di hai 
		*value = val;
		cout<<"Inline Constructor (4) is called"<<endl;
	} 

	~Customer(){
		// same by default hota hai but user wala banane pe....

		// ye basically heap me dynamically allocated 
		// memory ko hatane ke liye use hota hai what is does :
		// delete value;

		cout<<"Destructor is called for acc : "<<acc<<endl;
		// aur jo object ka instance sabse last me hua hai uska pehle 
		// call hota hai destructor

		// but constructor order me hi hota hai

		// why destructor do this ? :

		// Memory Safety and Dependencies
		// If an object depends on another (e.g., B depends on A), and you destroy A first, then B may crash if it tries to access A during its destruction.

		// Using LIFO ensures:

		// Dependencies are still valid during destruction.

		// Objects clean up in the reverse order of setup, preventing resource leaks or crashes.

		// Destructors are called in Last-In-First-Out (LIFO) order.

		// This means the last object created is destroyed first.

		// It happens because C++ uses a stack for storing local objects.

		// The stack always removes the last added item first.

		// This ensures all objects are cleaned up safely and correctly.

	}


};

int main(){
	Customer Harshit(1,100000,"Harshit"); // 1 will be called
	Harshit.print();

	Customer Shikshak(2,100,"Shikshak"); // 4 will be called
	Shikshak.print();

	Customer Prince(3,100000,"Prince"); // 4 will be called
	Shikshak.print();

	Customer Copy_Shikshak(Shikshak);
	Copy_Shikshak.print();

	Customer *A = new Customer
	delete A ;// isko aise de allocate karna pdega 

}