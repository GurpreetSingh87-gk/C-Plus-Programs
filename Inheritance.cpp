// Topic:- Inheritance
// -----


// Inheritance:- Accessing properties from our ancestors. Every class has data secure inside it but sometimes 
// -----------   object of one class needs to access data of another. Child class object can access properties of 
//               Parent class. It is parent- child relationship for this we have to create parent class and its 
//               child class. Inheritance is a " is - a " relationship for ex:- A car is a vehicle.

// Synatx of Parent Class:-

//  class Parent_classname
// { 
//		accsess modifier;
//		Parent class method;
// }

// Syntax of Child Class:-

//  class Child_classname
// {
//		access_modifier Parent_classname;
// }

// =================================================================================================================
/*
// Q:-1. Define a child class whose object can access method and data members of its parent class.

# include <iostream>
using namespace std;

class ParentClass // Parent class
{
	protected:
		int x;
	public:
		void getData()
		{
			cout<<"Enter value of x: ";
			cin>>x;
		}	
};
class ChildClass:public ParentClass // Child class
{
	public:
		void showData()
		{
			cout<<"Value of x is: "<<x;
		}
};

main()
{
	ChildClass C1;
	C1.getData();
	C1.showData();
}	
*/

// =================================================================================================================

// Protected Access Specifier (Modifier):- Protected data members are define inside parent class in inheritance.
// -------------------------------------   These members can be accessible only its child class & not in other 
//                                       classes that is its security lies in between public & private data members

// Types of Inheritance:-
// --------------------

// 1. Single Level Inheritance:- It has a single parent class which can be accessible by its single child class.
//    ------------------------

//      Single Level         
//           |                   
//         Parent		
//           |    			
//         Child        		  

// 2. Multilevel Inheritance:- It is a Grand Parent, Parent and Child relationship. These level can be increase.
//    ----------------------

//    Multi Level
//		  |
// 	 Grand Parent
//     	  |
//      Parent 
//        |
//	    Child


// 3. Multiple Inheritance:- It has multiple base classes & single child class which can access properties of 
//    --------------------   Multiple parents.

//   Parent 1 		Parent 2
//      |               |
//      |_______________|
//				|
//            Child

// 4. Hierarchical Inheritance:- In this type of multiple child classes can access properties of a single parent
//    ------------------------   class.

//               Parent
//                 |
//      ___________|__________
//	   |           |         |
//    Child 1    Child 2    Child 3

// =================================================================================================================

// 1. Single Level Inheritance with Parent  
//    class members as public data members:- Public data members of parent class can access directly with the object of 
//    ------------------------------------  child class. It will not require any method of parent class to access it.
/*
# include <iostream>
using namespace std;

class BaseClass
{
	public:
		int ID;
		char Name[20];		
};
class ChildClass:public BaseClass
{
	public:
		void showData()
		{
			cout<<"Student ID: "<<ID<<"\t Name: "<<Name;
		}
};
main()
{
	ChildClass C1;
	
	C1.ID = 10;
	strcpy(C1.Name, "Andrew");
	C1.showData();
}
*/

// =================================================================================================================

// Single Level Inheritance with private data members of parent class:- If child class method want to access private
// ------------------------------------------------------------------   data members of parent class then the method
// will be called from child class which will return the required value to the child class.
/*
# include <iostream>
using namespace std;

class BaseClass
{
	private:
		int x;
		char Name[20];
	public:
		void getData()
		{
			cout<<"Enter value of x: ";
			cin>>x;
			
			cout<<"Enter the Name: ";
			cin>>Name;
		}
		void showData()
		{
			cout<<"\nParent class members are:\n";
			cout<<"x: "<<x<<"\t Name: "<<Name;
		}
};
class ChildClass:public BaseClass
{
	public:
};

main()
{
	ChildClass C1;
	
	C1.getData();
	C1.showData();
}
*/

// =================================================================================================================

// 2. Multilevel Inheritance:- 
//   ----------------------

/*
# include <iostream>
using namespace std;

class Grandparent
{
	protected:
		char Name[20];
	public:
		void getName()
		{
			cout<<"Enter Name: ";
			cin>>Name;
		}	
}; 
class Parent:public Grandparent
{
	protected:
		int Salary;
	public:
		void getSalary()
		{
			cout<<"Enter Salary: ";
			cin>>Salary;
		}		
};
class Child:public Parent
{
	public:
		void showData()
		{
			cout<<"\nSalary: "<<Salary<<"\tName: "<<Name<<endl;
		}	
}; 
main()
{
	Child C1;
	
	C1.getName();
	C1.getSalary();
	C1.showData();

}
*/

// =================================================================================================================

// 3. Multiple Inheritance:- In this we can have multiple parent classes and single child clas. The child class which
//   ------------------   can access data members of both parent class these data members should be define in
//                        protected.
/*
# include <iostream>
using namespace std;

class Student // Parent Class
{
	protected:
		int RNO;
		char Name[20];
	public:
		void getData()
		{
			cout<<"Enter Roll No & Name: ";
			cin>>RNO>>Name;
		}	
};
class Marks
{
	protected:
		int S1, S2, S3;
	public:
		void getMarks()
		{
			cout<<"Enter Marks of 3 Subjects: ";
			cin>>S1>>S2>>S3;
		}
};
class Result:public Student, public Marks
{
	public:
		void getResult()
		{	
			int Total_Marks;
			float Average_Marks;
			
			Total_Marks = S1 + S2 + S3;
			Average_Marks = Total_Marks /3.0;	
			
			cout<<"\nRoll No: "<<RNO<<"\tName: "<<Name<<"\tTotal Marks: "<<Total_Marks<<"\tAverage Marks: "<<Average_Marks;
			
		}
			
};
main()
{
	Result R1;
	
	R1.getData();
	R1.getMarks();
	R1.getResult();	
}
*/

// =================================================================================================================

// 4. Hierarchical Inheritance:- It has single parent class and multiple child classes. Object of multiple child 
//   -------------------------   classes can be created to access respective parent class.
/*
# include <iostream>
using namespace std;

class Parentclass
{
	protected:
		int ID;
	public:
		void getID()
		{
			cin>>ID;	
		}	
};
class Childclass1
{
	protected:
		char Name[20];
	public:
		void getName()
		{
			cin>>Name;	
		}	
};
class Childclass3
{
	protected:
		char Email[25];
	public:
		void getEmail()
		{
			cin>>Email;
		}	
};
class Childclass2:public Parentclass, public Childclass1, public Childclass3
{
	private:
		int Salary;
	public:
		void getSalary()
		{
			cin>>Salary;	
		}	
		void showData()
		{
			cout<<"\nID: "<<ID<<"\t Name: "<<Name<<"\t Salary: "<<Salary<<"\t Email: "<<Email;
		}
};		
main()
{
	Childclass2 C1;
	
	cout<<"Enter ID: ";
	C1.getID();
	
	cout<<"Enter Name: ";
	C1.getName();
	
	cout<<"Enter Salary: ";
	C1.getSalary();
	
	cout<<"Enter Email: ";
	C1.getEmail();
	
	C1.showData();
}
*/

// =================================================================================================================

