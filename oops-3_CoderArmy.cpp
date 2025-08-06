#include <bits/stdc++.h>
using namespace std;

/*  
=====================
 Static Data Member
=====================

- They are attributes of classes (shared across all objects).
- Declared using `static` keyword.
- Only one copy is created for the class.
- Initialized before any object is created.
*/

class Customer {

	int acc;
	string name;
	int balance;
	int *value;

	// Static members: shared across all instances
	static int total_customer;
	static int total_balance;

public:

	/*
	====================
	 Static Member Functions
	====================

	- Can access only static data members.
	- Can be called without creating an object.
	*/

	static void getTotalCustomers() {
		cout << "Total Customers : " << total_customer << endl;
	}

	static void getTotalBalance() {
		cout << "Total Balance : " << total_balance << endl;
	}

	/*
	====================
	 Constructor
	====================
	*/

	Customer() {
		name = "hello";
		acc = -1;
		balance = -1;

		cout << "Constructor 1 is called" << endl;
	}

	Customer(int acc, int balance, string name)
		: name(name), acc(acc), balance(balance) {
		cout << "Inline Constructor (4) is called" << endl;
		total_customer++;
		total_balance += balance;
	}

	/*
	====================
	 Print Function with const
	====================

	- `const` after the function means:
	  This function **does not modify any member variables**.

	- It can be called on **const objects** as well.

	- Useful for safety and clarity.
	*/

	void print() const {
		cout << "name : " << name << "\nacc : " << acc << "\nbalance : " << balance << endl;
	}

	/*
	====================
	 Example of const function argument
	====================

	- This function takes a const string reference.
	- It guarantees that the function won’t modify the string.
	*/

	void greetCustomer(const string& greeting) const {
		cout << greeting << ", " << name << "!" << endl;
	}

	/*
		==================================
		✳ Encapsulation (Theory)
		==================================

		- Encapsulation means wrapping data and methods together in one unit (a class).
		- It helps in data hiding and protecting internal object state.
		- Data members are kept `private` and accessed via `public` functions.
		- This makes the code more secure and modular.
	*/

	/*
		==================================
		✳ Abstraction (Theory)
		==================================

		- Abstraction means showing only **essential features** and hiding internal details.
		- Focuses on **what an object does**, not how it does it.
		- Achieved in C++ using **classes**, **access specifiers** (private/public), and **functions**.
		- Helps reduce complexity and increase code clarity.

		in simple words  : deposit ka function banaya to user ko nhi 
		dikh rha hai deposit work kaise kar rha hai use bs end output milega
		that is updated balance 

		examples like : pow(x,n);
	*/



};

// Initialize static members
int Customer::total_customer = 0;
int Customer::total_balance = 0;

int main() {

	Customer Harshit(1, 100000, "Harshit");
	Harshit.print();

	Customer Shikshak(2, 100, "Shikshak");
	Shikshak.print();

	Customer Prince(3, 100000, "Prince");
	Prince.print();

	Customer::getTotalCustomers();
	Customer::getTotalBalance();

	// Using const function
	Harshit.greetCustomer("Welcome");

	// Creating a const object
	const Customer ConstGuy(4, 5000, "ConstGuy");
	ConstGuy.print(); //  Works because print() is a const function
	// ConstGuy.balance = 0;  Error: Cannot modify members of const object

	return 0;
}
