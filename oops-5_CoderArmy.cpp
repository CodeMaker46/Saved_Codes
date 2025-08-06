#include <bits/stdc++.h>
using namespace std;

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


// Mulilevel :-

class Person{
protected:
	string name;
public:
	void introduce(){
		cout<<"Hello my name is "<<name<<endl;
	}
};

class Employees : public Person {
protected:
	int salary;
public:
	void monthly_salary(){
		cout<<"My monthly salary is "<<salary<<endl;
	}
};

class Manager : public Employees{
protected:
	string department;
public:

	Manager(int salary,string name,string department){
		this->salary = salary;
		this->name = name;
		this->department = department;
	}

	void work(){
		cout<<"I am leading the department "<<department<<endl;
	}
};

// Multipler Inheritance :-

class Engineer {
public:
	string specialization;

	void work(){
		cout<<"i have a specialization in "<<specialization<<endl;
	}
};

class Youtuber {
public:
	int subscribers;

	void ContentCreator(){
		cout<<"i have a subscriber base of "<<subscribers<<endl;
	}
};

class Coder : public Engineer , public Youtuber {
	 // NOTE -> Jo pehle likha hoga uska contructor pehle print hoga 
public:
	string name;

	Coder(string name,string specialization, int subscribers){
		this->name = name;
		this->specialization = specialization;
		this->subscribers = subscribers;
	}

	void showcase(){
		cout<<"My name is "<<name<<endl;
		work();
		ContentCreator();
	}
};

// Hierarchical Inheritance :-


class Teacher  : public Human{
	int salary;

public:
	Teacher(int salary,string name, int age){
		this->salary = salary;
		this->name = name;
		this->age = age;
	}

	void display(){
		cout<<"salary : "<<salary<<"\nname : "<<name<<"\nage : "<<age<<endl;
	}

};

class Chaprasi : public Human{
	string duty;
	int salary;

public:
	Chaprasi(int salary,string name, int age,string duty){
		this->salary = salary;
		this->name = name;
		this->age = age;
		this->duty = duty;
	}

	void display(){
		cout<<"salary : "<<salary<<"\nname : "<<name<<"\nage : "<<age<<"\nduty : "<<duty<<endl;
	}
};

// Multipath inheritance :-

class A{
	
public:
	string name;

	void display(){
		cout<<"My name is "<<name<<endl;
	}

};

class B :  virtual public A{
public:
	string specialization;

	B(){
		cout<<"hello B "<<endl;
	}

	void work(){
		cout<<"My specialization is "<<specialization<<endl;
	}
};

class C :  virtual public A{
public:
	int subscribers;

	C(){
		cout<<"hello C "<<endl;
	}

	void ContentCreator(){
		cout<<"My subscribers base is "<<subscribers<<endl;
	}
};

class D : public B , public C{
public:
	int salary;

	D(){
		cout<<"hello D"<<endl;
	}

	D(int salary,int subscribers,string name,string specialization){
		this->subscribers = subscribers;
		this->name = name;
		this->specialization = specialization;
	}

	void showcase(){
		cout<<"My name is "<<name<<endl;
		work();
		ContentCreator();
	}
};


int main(){


	// Types of Inheritance :-


	// Single level inheritance :-

	// NOTE : contructor pehle parent ka call hota hai then child ka
	// opposite for destructor 

	/*
	===============================================
	🌟 Single Level Inheritance - C++ (Theory)
	===============================================

	📌 Definition:
	Single Level Inheritance is a type of inheritance where 
	a class (Derived/Child) inherits from one and only one 
	Base (Parent) class.

	📦 Structure:
	    Base Class --> Derived Class

	🔹 Syntax:
	    class Base {
	        // data members and member functions
	    };

	    class Derived : access_specifier Base {
	        // additional members of derived class
	    };

	🔐 Access Specifier:
	- 'public' inheritance is most common:
	    - public members of Base remain public in Derived
	    - protected members remain protected

	🎯 Benefits:
	- Reusability of code
	- Logical hierarchy and cleaner code organization

	🧪 Example:
	- Base Class: Student (with name and roll)
	- Derived Class: CollegeStudent (adds college name)

	Result: CollegeStudent has access to both its own and 
	the inherited members of Student class.

	===============================================
	*/


	// NOTE : -> agr ek fun parent and child dono me hai to pehle child wla access 
	// hoga child me call karne pe then wo find krrega parent agr nhi mila child me 

	cout<<"Single level Inheritance"<<endl;
	Student raju;
	raju.fun("Rajua",2022,200000,75,19);
	raju.print();
	cout<<endl;




	// Multilevel Inheritance :-

	/*
	===============================================
	🔷 Multilevel Inheritance - C++ (Theory)
	===============================================

	📌 Definition:
	Multilevel Inheritance is a type of inheritance in which
	a class is derived from another derived class. This forms 
	a chain or hierarchy of inheritance.

	🔗 Structure:
	    Class A  --> Base Class
	    Class B  --> Derived from A
	    Class C  --> Derived from B

	So, Class C indirectly inherits from Class A as well.

	🧱 Syntax:
	    class A {
	        // Base class members
	    };

	    class B : public A {
	        // B inherits A
	    };

	    class C : public B {
	        // C inherits B (and indirectly A)
	    };

	🔐 Access Specifier:
	- 'public' is commonly used for inheritance:
	    - public members of base stay public in all levels
	    - protected members are accessible in derived classes
	    - private members are NOT directly accessible

	🎯 Advantages:
	- Promotes stepwise refinement
	- Allows complex inheritance chains (carefully structured)
	- Improves code reusability and separation of concerns

	📌 Real-world Analogy:
	    Human (Base)
	        ↓
	    Employee (Derived from Human)
	        ↓
	    Manager (Derived from Employee)

	In this case, Manager has all properties of both Employee and Human.

	===============================================
	*/

	cout<<"Multilevel Inheritance"<<endl;
	class Manager A1(100000,"Shikshak","Finance");
	A1.introduce();
	A1.monthly_salary();
	A1.work();
	cout<<endl;

	// Multiple Level :-

	/*
	=================================================
	🔷 Multiple Inheritance - C++ (Theory)
	=================================================

	📌 Definition:
	Multiple Inheritance is a type of inheritance where a 
	single derived class inherits from **two or more base classes**.

	🔗 Structure:
	    class A { ... };
	    class B { ... };
	    class C : public A, public B { ... };

	- Class C inherits from both class A and class B.
	- It gets access to all accessible members of both base classes.

	⚠️ Important:
	- If both base classes have a function or variable with the same name,
	  ambiguity arises. This must be resolved using scope resolution (A:: or B::).
	- Virtual inheritance is used to handle the "diamond problem" if needed.

	🎯 Use Case:
	When a class logically needs features from multiple distinct base classes.

	📌 Example:
	- Coder class → represents coding ability
	- Youtuber class → represents content creation ability
	- Engineer class → inherits both coding and content skills

	=================================================
	*/


	cout<<"Multiple level Inheritance"<<endl;
	Coder S("Shikshak","MAC",100);
	S.showcase();
	cout<<endl;

	// Hierarchial Inheritance :-


	/*
	=================================================
	🔷 Hierarchical Inheritance - C++ (Theory)
	=================================================

	📌 Definition:
	Hierarchical Inheritance is a type of inheritance where 
	**multiple derived classes inherit from a single base class**.

	🔗 Structure:
	        Base Class
	           /   \
	 Derived1     Derived2

	- All derived classes share the same base class.
	- Each derived class can have additional members of its own.
	- They all inherit the common members from the base.

	🎯 Use Case:
	When multiple subclasses share common characteristics 
	from a single superclass, but also have their own unique behaviors.

	📌 Example:
	- Base class: Person → contains common details (like name)
	- Derived classes:
	    - Coder → adds coding-related behavior
	    - Youtuber → adds video-related behavior

	Each of them "is-a" Person, but with different specialties.

	=================================================
	*/


	// Hybrid inheritance :-


	/*
	=================================================
	🔷 Hybrid Inheritance - C++ (Theory)
	=================================================

	📌 Definition:
	Hybrid Inheritance is a combination of **two or more types** 
	of inheritance (such as multiple, multilevel, hierarchical, etc.)
	in a single program.

	It reflects complex real-world relationships and is often used
	to create a more flexible and reusable class hierarchy.

	🔁 Common Hybrid Combinations:
	- Multiple + Multilevel
	- Hierarchical + Multilevel
	- Any mix of inheritance types

	⚠️ Ambiguity & Diamond Problem:
	- When a base class is inherited multiple times via different paths,
	  it may cause ambiguity.
	- This is known as the **Diamond Problem**.
	- **Solution**: Use **virtual inheritance** to ensure only one instance of the base class exists.

	📌 Example Scenario:
	- Base class: Person
	- Derived classes: Coder and Youtuber (both inherit Person)
	- Final derived class: Engineer inherits both Coder and Youtuber

	➡️ This forms:
	    Person
	     /   \
	 Coder  Youtuber
	     \   /
	    Engineer

	This is a hybrid + diamond structure, handled using virtual inheritance.

	=================================================
	*/



	// Multipath inheritance :-

	/*
	=================================================
	🔷 Multipath Inheritance in C++
	=================================================

	📌 Definition:
	Multipath Inheritance occurs when a **single base class** is 
	inherited by multiple intermediate classes, which are then 
	inherited by a single derived class.

	This creates **multiple paths** to the same base class in 
	the inheritance hierarchy.

	📌 Structure:

	          A  ← Base Class
	         / \
	        B   C  ← Derived from A
	         \ /
	          D  ← Derived from B and C

	Class D ends up inheriting class A **twice** — once via B 
	and once via C.

	⚠️ Problem (Diamond Problem):
	- The derived class (D) gets **two copies of class A**.
	- This causes ambiguity when accessing members of A.
	- For example: `d.display();` → Compiler can't decide whether 
	  to call A::display() from B or from C.

	✅ Solution: Virtual Inheritance
	- Use the `virtual` keyword when inheriting from the base class.
	- This ensures that only **one shared copy** of the base class
	  exists, no matter how many times it is inherited.

	📌 Corrected structure using virtual inheritance:

	        class A { };
	        class B : virtual public A { };
	        class C : virtual public A { };
	        class D : public B, public C { };

	Now, class D has **only one** instance of class A.

	📌 Use Case:
	Multipath inheritance is useful when building systems where 
	multiple roles or behaviors are derived from a common base, 
	but eventually need to merge.

	=================================================
	*/

	// Note D class jo hai wo name access kar rahi hai 
	// through C and B so you may get a conflict bcoz 2 instance man 
	// lega compiler us name ke so ek banane ke liye you have to add a keyword 
	// called virtual : This ensures that only one shared copy of A exists inside D, solving the ambiguity and memory duplication.

	D obj(10000,100,"Raj","MAC");
	obj.showcase();

}





















