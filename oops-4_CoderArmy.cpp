#include <bits/stdc++.h>
using namespace std;

/*
	==================================
	✳ Inheritance (Theory)
	==================================

	- Inheritance allows a class (child/derived) to **reuse** properties and methods of another class (parent/base).
	- Promotes **code reusability** and logical hierarchy.
	- Syntax: `class Child : access_modifier Parent { ... };`
	- Types in C++: Single, Multilevel, Multiple, Hierarchical, Hybrid.
	- Access Specifiers control what is inherited: 
	  - `public` → public and protected members stay the same,
	  - `private` → everything becomes private in derived class (not recommended),
	  - `protected` → rarely used, keeps access limited to derived class.
*/		

/*
==================================
🔐 Access Specifiers in C++
==================================

→ These define the scope/visibility of class members.

┌─────────────┬────────────────────┬────────────────┬────────────────────┐
│ Specifier   │ External Code      │ Within Class   │ Derived Class      │
├─────────────┼────────────────────┼────────────────┼────────────────────┤
│ public      │ ✅ Accessible       │ ✅ Accessible 	│ ✅ Accessible     	 │
│ protected   │ ❌ Not Accessible   │ ✅ Accessible 	│ ✅ Accessible      │
│ private     │ ❌ Not Accessible   │ ✅ Accessible 	│ ❌ Not Accessible  │
└─────────────┴────────────────────┴────────────────┴────────────────────┘

🔸 Use `private` for strict encapsulation.
🔸 Use `protected` to allow child class access but hide from external code.
🔸 Use `public` for open access where needed.
*/

class A{

protected:
	int b;
private:
	int c;
public:
	int a;

	void fun(){
		a = 10,b=20,c=30;
	}
};

class Human{
public:
	string name;
// private:
	int age;
protected:
	int weight;
};

// Child classes :-

class Student : private Human{
private:
	int roll_number,fees;
public:

	void fun(string name,int roll,int fee,int w,int age){
		roll_number = roll;
		fees = fee;
		weight = w;
		this->age = age;
		this->name = name;
	}

	void print(){
		cout<<"Name : "<<name<<"\nAge : "<<age<<"\nWeight : "<<weight;
		cout<<"\nroll_number : "<<roll_number<<"\nfees : "<<fees<<endl;
	}




};


int main(){
	A aadmi;
	// aadmi.a  = 100;
	aadmi.fun();
	cout<<aadmi.a<<endl;

	Student raju;
	// raju.name = "Raju";
	// raju.age = 10;
	raju.fun("Rajua",2022,200000,75,19);
	// raju.weight = 40;

	raju.print();


}





















