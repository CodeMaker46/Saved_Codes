#include <bits/stdc++.h>
#define co cout
#define e endl
using namespace std;

// Ecapsulation : simple class me bas private kr do data ko


// Polymorphism : exists in multiple forms
// types :
// 1. Compile Time Polymorphism
// 		a. function overloading
// 		b. operator overloading
// 2. Run Time Polymorphism
// 		a. function over-riding;


// Abstraction : Implementation hiding

// Key Difference in Abstraction and Encapsulation in Code:

// Abstraction is achieved through defining abstract classes or interfaces 
// that hide the internal details of how specific methods are implemented. 
// The code focuses on what methods an object will provide.

// Encapsulation is about hiding the internal data 
// (like balance in BankAccount) and providing public 
// methods to control how that data is accessed and modified.



// Inheritance : 

class parent_class
{
	public:
		int height;
		int weight;
		int age;

	// private:
		int cycle;

	public:

	int getAge(){
		return this->age;
	}

	void setWeight(int weight)
	{
		this->weight = weight;
	}

	int getCycle(){
		return this->cycle;
	}


};

class child_class : public parent_class {

	public:
		string color;

		void sleep()
		{
			co<<"Male sleeping"<<e;
		}

	

};

// for polymorphism

class Animal{
public:
	int val1;
	int val2;

	void setVal1(int val1){
		this->val1 = val1;
	}

	void setVal2(int val1)
	{
		this->val2 = val2;
	}

	void operator + (Animal &obj)
	{
		int val1 = this->val1;
		int val2 = obj.val1;
		cout<<"Output : "<<val2-val1<<endl;
	}

	void speak()
	{
		co<<"speaking"<<e;
	}
};

class Dog : public Animal{
	public:

	void speak()
	{
		co<<"barking"<<e;
	}


};

// public to protected ke case man lo agr me koi child class 
// banata hun to usko access sirf usi class me kr skte hai 
// for ex : valid in child_class 

// int getHeight()
// {
// 	return this->height;
// }


// Types of inheritance : 
// 1. Single Inheritance : B inherit A
// 2. Multilevel Inheritance : D inherit C inherit B inherit A
// 3. Multiple Inheritance : C inherit B and A both
// 4. Hierarchical Inheritance : One clas serve as parent class for more than one class



int main(){

	child_class obj1;
	
	co<<obj1.height<<e; // garbage
	co<<obj1.age<<e;    // garbage
	co<<obj1.weight<<e; // 1
	obj1.sleep();       // Male sleeping


	co<<obj1.cycle<<e; // can't be accessed 
	co<<"cycle : "<<obj1.getCycle()<<e;    // gives 1 

	obj1.setWeight(84); 

	co<<obj1.weight<<e; // 84

	// Polymorphism

	Animal newA, newB;
	newA.setVal1(6);
	newB.setVal1(4);

	newB + newA; // Output : 2


	// Function over-riding

	Dog D;

	D.speak(); // barking


	 
}
