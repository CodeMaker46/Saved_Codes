#include <bits/stdc++.h>
using namespace std;

class Student{
	public :
	int age; // 4 bytes
	int roll; // 4 bytes
	string name; // 32 bytes (on most 64-bit compilers like g++)

	Student(){
		age = -1; 
		roll = -1;
		name = "";
	}


	// Notes :-
	// 1. private vars in class ko hum funtion ki 
	// help se access kar sakte hai.

	// 2. function banane ki need ? -> additional security 
	// add kar sakte hai isiliye live valid or not or some kind of password
	// protection.

	void setName(string name){
		if(name.empty()){
			cout<<"error : invlaid name !"<<endl;
		}
		this->name = name;
	}

	void setAge(int age){
		if(age<=0){
			cout<<"error : invalid age"<<endl;
		}
		this->age = age;
	}



	void setRoll(int roll){
		if(age<0){
			cout<<"error : invalid roll"<<endl;
		}
		this->roll = roll;
	}

	void getName(){
		if(this->name.size()==0){
			cout<<"error : name not defined !"<<endl;
		}
		cout<<name<<endl;
	}
};

class TestChar{
	// agr sirf char a hota to class ka size 1 ata hai
	// aur jab int bhi dal dete hai to 8 ata hia because of padding

	// What happens  ? :-
	// Because of memory alignment and padding.

	// Alignment Rule (on most 64-bit systems):
	// int needs to be aligned on a 4-byte boundary.
	// The compiler inserts 3 bytes of padding after char a to make sure int n starts at a multiple of 4.

	// 	Offset  | Data
	// 	--------|---------
	// 	0       | char a (1 byte)
	// 	1-3     | padding (3 bytes)
	// 	4-7     | int n (4 bytes)

	// So conclusion is that 
	// 1 byte wale -> muliple of 1 pe start
	// 2 byte wale -> multiple of 2 pe start
	// 3 byte wale -> multiple of 3 pe start .......

	// agr ek aur char add kia to size 12 aayega bc 
	// jo sabse bda data tyep hai uska jo memory leni ki unit hai like 4 for int 
	// agr size usse divisible ho rha hai to thik nhi to usse just next jo hai jo 
	// divisible hoga wo size aayega like see : 
	// a + b + c = 9 now 9%4!=0 so 12 is the ans here 
	// order matter karta hai a + c + b = 8

	// inside the memory :-
	// 0 1 2 3 4 5 6 7 8 9 10 11 12
	// a _ _ _ b b b b c _ __ __ __

	char a;
	int b;
	char c;

	// be default we got memory from stack : static memory (mainly limited small)
	// can ask from heap for (limited large) : dynamic
	// so we can also make class  with dynamic memory

	// just like pointer : int *p = new int (yaha se heap me jata hai);
	// class :-> Student *S = new Student;
	// access : (*S).name or S->name
	


};

int main(){
	Student s1;

	cout<<sizeof(s1)<<endl; // 40

	TestChar c;

	cout<<sizeof(c)<<endl;
	// here : student is the class and s1 is the object
	// Object : anything that exists in real world

	// Class: Student
	// A class is a blueprint for creating objects. 
	// It defines attributes (data members) and behaviors (member functions)
	// Example: A real-world student has a name and age, and can perform 
	// actions like introducing themselves.


	cout<<s1.age<<endl;

	s1.setAge(0);
	s1.setName("Shikshak");
	// Student s1;
	cout<<s1.age<<endl;
	s1.getName();


	// Dynamic allocation : 
	Student *S2 = new Student;
	(*S2).setName("Rahul");
	S2->getName();

}