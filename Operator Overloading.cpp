// Topic:- Operator Overloading
// -----

// Polymorphism:- Ploymorphism in object oriented programming can be implemented in object overloading. 
// ------------  If we want to add, subtract, and multiple two objects then we should
//               create an operator function. This is the method of class.

// Syntax:-

// return_type operator symbol (+, -, *) (parameter)
// {
//      body of the function;
// }

// =================================================================================================================

// Q:-1. Define a class with integer members and create two objects. Now add two objects 
//       data members using obj1 & obj2.
/*
# include <iostream>
using namespace std;

class Myclass
{
	int A;
	public:
		void getData(int B)
		{	
			A=B;
		}
		void operator +(Myclass M1)
		{
			cout<<"Addition: "<<A + M1.A;
		}
};
main()
{
	Myclass obj1, obj2;
	
	obj1.getData(10);
	obj2.getData(20);
	
	obj1 + obj2; 
}    
*/
// =================================================================================================================

// Operator Overloading:- Using operator overloading we can also change the meaning of any operator. It means within
// --------------------   operator function we can change instructions.

// Q:-1. Define a class student input name and marks of two students return maximum marks using operator overloading.
/*
# include <iostream>
# include <cstring>

using namespace std;

class Student
{
	int Marks;
	char Name[20];
public:
	void getData(const char n[], int M)
	{
		Marks = M;
		strcpy(Name, n);
	}
	
	void showData()
	{
		cout<<"Name: "<<Name<<"Marks: "<<Marks<<endl;
	}
	
	int operator >(Student x)
	{	
		if (Marks > x.Marks)
			return Marks;
		else
			return x.Marks;				
	}
};

int main()
{
	Student S1, S2;
	
	int Maximum_Marks;
		
	S1.getData("Roger", 56);
	S1.showData();
	
	S2.getData("Dunny", 45);
	S2.showData();
	
	Maximum_Marks = S1 > S2;
	
	cout<<"\nMaximum Marks: "<<Maximum_Marks;
}
*/

// =================================================================================================================

// Function Overloading:- It can be implemented using the virtual function in base class (overridden) by a 
// --------------------   drived class it means the base class function will never called with derived class
//                        object.

// =================================================================================================================

// for example:-

/*
# include <iostream>
using namespace std;

class Base // Function Overridding
{
	protected:
	public:
	virtual void show()
	{
		cout<<"Base Class Function Called!";
	}			
};
class Child:public Base
{
	char Name[20];
	int disc;
	public:
		void show()
		{
			cout<<"Child Class Function Called!";
		}
};
main()
{
	Child C1;
	C1.show();
}
*/

// =================================================================================================================

// Object Pointer:- It is a pointer which can hold address of object of the same class.
// --------------

// Syntax:- 

// class_Name *object_Name;

// =================================================================================================================

// Q:-1. Define a class person input information of person using one object and display it using the object 
//       pointer.
/*
# include <iostream>
using namespace std;

class Person
{
	int ID, Age;
	public:
		void getData()
		{
			cout<<"Enter ID and Age: ";
			cin>>ID>>Age;
		}
		void showData()
		{
			cout<<"ID: "<<ID<<"\tAge: "<<Age;
		}
};
main()
{
	Person P1;
	Person *ptr; // Declaring object pointer
	
	P1.getData();
	ptr = &P1; // Store address of P1 into ptr
	ptr -> showData(); // Access class data using object pointer
}
*/

// =================================================================================================================

// Pointer with derived class:- We can have the base class pointer which can hold addresses of its child class
// --------------------------   The base class method will override the child class method.

// For Example:-
/*
# include <iostream>
using namespace std;

class Base
{
	protected:
	public:
		void Fun2()
		{
			cout<<"Base class function called!";
		}			
};
class Child:public Base
{
	char Name[20];
	int dise;
	public:
		void Fun2()
		{
			cout<<"Child class function is called!";
		}
};
main()
{
	Child C1;
	Base *ptr; // Parent/Base class pointer	
	
	ptr = &C1;
	ptr -> Fun2();
}   
*/

// =================================================================================================================

// Virtual Function:- It is the function which is defined in parent class and is redefined (overridden) by
// ----------------   a child class when you refer a child class object using a pointer or a reference to 
//                    the base class/parent class then you can call a virtual function for that object and
//                    can execute the child class version of the method.

// =================================================================================================================

// For Example:-

/*
# include <iostream>
using namespace std;

class Base // Function Overridding
{
	protected:
	public:
	virtual void Function1()
	{
		cout<<"Base Class Function Called!";	
	}	
};
class Child:public Base
{
	char Name[20];
	int disc;
	public:
		void Function2()
		{
			cout<<"Child Class Function Called!";
		}
};
main()
{
	Child C1;
	Base *ptr; // Base class pointer
	
	ptr = &C1;
	ptr -> Function1();
}
*/

// Note:-

// Polymorphism in oops is of 3 types in case of Function Overloading, Operator Overloading and Constructor
// Overloading.

// 1. Compile Time Polymorphism:- It is also called early binding. It is used to implemented using function
//    -------------------------   overloading or operator overloading

// 2. Run Time Polymorphism:- Which is also called late binding. It is used to implemented using virtual
//    ----------------------  function which is also called as function overridding.

// 3. Virtual Base Class:- while inheriting multiple classes and if it is multipath inheritance then it may
//    -------------------  happen that the super base class may be inheritate on multiple level which may
//                         create ambiguity and it can be avoided by making it virtual base class.

// =================================================================================================================

