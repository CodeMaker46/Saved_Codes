#include <bits/stdc++.h>
#define pb push_back
using namespace std;

/*
========================================
🔸 POLYMORPHISM IN C++ (Many Forms)
- Polymorphism allows functions or operators to behave differently 
  based on the context (input types, object types, etc).

✅ There are 2 main types:
----------------------------------------

1. Compile-Time Polymorphism:
   • Achieved using:
       - Function Overloading
       - Operator Overloading
   • Resolved during compilation.
   • Example: same function name with different parameters.

2. Run-Time Polymorphism:
   • Achieved using:
       - Virtual Functions
   • Resolved during program execution (via vtables).
   • Example: Derived class overriding base class function.

----------------------------------------
💡 BENEFIT:
- Increases code flexibility and reusability by enabling 
  a common interface for different behaviors.
========================================
*/

// Function Overloading :-

class Area{

public:

	double calculateArea(int r){
		return 3.14*r*r;
	}

	int calculateArea(int l,int b){
		return l*b;
	}

};

// Operator overloading :-

class Complex{
	int real, img;
public:

	Complex(){

	}
	
	Complex(int real,int img){
		this->real = real;
		this->img = img;
	}

	void display(){
		cout<<real<<"+"<<img<<"i"<<endl;
	}



	Complex operator + (Complex &C){
		Complex ans; // iske liye contructor define karna must hai 
		// NOTE -> C agr same class ka hota hai then only you can access its 
		// private members 
		ans.real = real + C.real;
		ans.img = img + C.img;
		return ans;
	}
};

// Virtual Functions :-

class Animal{
public:
	// virtual void  speak(){
	// 	cout<<"Hu hu"<<endl;
	// }

	// Agar is class ka ek bhi object nhi chahte ki bane to 
	// ek pure virtual function create kar do (to create a abstract class) 

	virtual void speak()=0;
};

class Dog : public Animal{
public:
	void speak(){
		cout<<"Bark"<<endl;
	}
};

class Cat : public Animal{
public:
	void speak(){
		cout<<"Meow"<<endl;
	}
};

int main(){

	// Function overloading :-

	Area ar;

	double ans = ar.calculateArea(7);
	int ans2 = ar.calculateArea(2,3);
	cout<<ans<<" "<<ans2<<endl;

	// Operator overloading :-

	Complex a(5,2);
	Complex b(2,5);
	a.display();
	b.display();

	Complex c = a + b; // this means -> a.fun(b) , just for explanation

	c.display();

	// Virtual function :-

	Animal *p; // assign on compile time
	p = new Dog(); // assign on run time as dynamic memory allocates in heap on run time
	p->speak(); // will give you "Hu Hu" not "Bark"

	// NOTE :- parent class me virtual likhne se wo hold me jayega then mtlb ki 
	// speak ka assignment run time me hoga phr 
	// agr dog me koi aisa funtion hai jo animal me nhi hai 
	// to you can not access that function

	// why so complex code ? taki sahi se access kar ske agr kabhi aise multiple check is cond aagai :-
	cout<<"\nCheck : \n";
	Animal *ind;
	vector<Animal*>animals;

	animals.pb(new Dog());
	animals.pb(new Cat());
	// animals.pb(new Animal()); // currently abstract kar rakha hai isse 
	animals.pb(new Cat());

	for(int i=0;i<animals.size();i++){
		ind = animals[i];
		ind->speak();
	}


}