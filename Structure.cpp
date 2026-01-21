// Topic:- Structures
// ------


// Structures:- Structure is a user define datatype which contains different types of data. Structure is a 
// ----------   container which can hold different types of variables.

// Syntax:-

// struct Structure_Name
// {
//	 	Structure members;
//      int variable;
//      float variable;
// };

// ============================================================================================================
 
// Q:1. Define a structure Student with elements RNO and Name.
/*
# include <iostream>
using namespace std;

struct Student
{
	int RNO;
	char Name[20];
};

main()
{
	struct Student S1, S2, S3; // Structure Variable
	
	S1.RNO=102;
	strcpy(S1.Name,"Andrew Phillips");
	cout<<S1.RNO<<"\t"<<S1.Name;
	
	cout<<endl;
	
	S2.RNO=103;
	strcpy(S2.Name,"George Willson");
	cout<<S2.RNO<<"\t"<<S2.Name;
	
	cout<<endl;
	
	S3.RNO=104;
	strcpy(S3.Name,"Ethan Winters");
	cout<<S3.RNO<<"\t"<<S3.Name;
}
*/

// Note:- Single Structure Variable contains all structure data. It contains seperate copy of each data
//        members.

// Q:-2. Input information of Two Student and display it.
/*
# include <iostream>
using namespace std;

struct Student
{
	int RNO;
	char Name[20];
};

main()
{
	struct Student S1, S2;
	
	cout<<"Enter Roll No & Name of 1st Student:";
	cin>>S1.RNO>>S1.Name;
	
	cout<<"\nEnter Roll No & Name of 2nd Stduent:";
	cin>>S2.RNO>>S2.Name;
	
	cout<<"\nHere is the Student Data:-"<<endl;
	
	cout<<endl;
	
	cout<<S1.RNO<<"\t"<<S1.Name;
	cout<<endl;
	cout<<S2.RNO<<"\t"<<S2.Name;
}
*/

// ============================================================================================================

// Array of Structure Variable:- If we want to store data of multiple students using structure then we have
// ----------------------------  to create an array of structure variable.

// Synatx:-

// struct Structure_Name variable[dimension];

// For Example:- struct Student S1 [3]= [Abbie, Joe, Phil]
//										S1[0], S1[1], S1[2]

// Note:- S1[0] will contain information of 1st student and S1[1] will contain information of 2nd student
//        and so on....

// ============================================================================================================

// Q:-1. Write a program to display information of 3 students.
/*
# include <iostream>
using namespace std;

struct Student
{
	int RNO;
	char Name[20];
};

main()
{
	struct Student S1[3];
	
	for (int i=0;i<3;i++)
	{	
		cout<<"Enter Information of 3 Students:";
		cin>>S1[i].RNO>>S1[i].Name;
	}
	
	cout<<"\nRoll No & Name:"<<endl;

	for(int i=0;i<3;i++)
	{
		cout<<S1[i].RNO<<S1[i].Name;
	}
}
*/

// =========================================================================================================

// Structure Variable with User Define Function:- We can pass structure variable as an argument to the user
// --------------------------------------------   define function. It can be collected in the same datatype
//                                                variable.

// Q:-1. Define a function and pass structure variable to it and display structure members.

/*
# include <iostream>
using namespace std;

struct Student
{
	int RNO;
	char Name[20];
};
void display(struct Student A)
{
	cout<<"Roll No: "<<A.RNO<<"\t Name: "<<A.Name;
}
main()
{
	struct Student S1; 
	
	cout<<"Enter Roll No and Name: ";
	cin>>S1.RNO>>S1.Name;
	display(S1);
}
*/

// =========================================================================================================

// Structure Pointer:- Structure pointer is a variable which can hold address of structure variable. We can access
// -----------------   structure members using structure pointer with the help of arrow operator (->) it means
//					   (next operator).

// Q:-1. Write a program to display roll no and name of student using sturcture pointer.
/*
# include <iostream>
using namespace std;

struct Student
{
	int RNO;
	char Name[20];
};
main()
{
	struct Student S1;
	struct Student *P;

	cout<<"Enter Info of 3 Students: ";
	cin>>S1.RNO>>S1.Name;
	
	P=&S1;
	cout<<"Roll No: "<<P->RNO<<"\tName: "<<P->Name;	
}

*/

// =========================================================================================================

// Passing Structure Address to User Define Function:- We can pass address of structure variable to the user define
// -------------------------------------------------  function where it can be collected in structure pointer and we
//													  can access elements using arrow operator (next operator "->")
/*
# include <iostream>
using namespace std;

struct Student
{
	int RNO;
	char Name[20];
};
void display(struct Student *pointer)
{
	cout<<"Roll No: "<<pointer->RNO<<"\tName: "<<pointer->Name;
}
main()
{
	struct Student S1;
	struct Student *pointer;
	
	cout<<"Enter Roll No and Name: ";
	cin>>S1.RNO>>S1.Name;
	display(&S1);
}
*/

// ================================================================================================================

// OOPS (Object Oriented Programming System):- 
// -----------------------------------------

// Structure of Class:- 
// ------------------

//  Class Class_Name
//  {
// 		Access Specifier:
//				Data Members;
//		Access Specifier:
//				Methods/Member of Function;
//  };

// Features of Structure of Class:-
// ------------------------------

// Class:- Class is a user-define datatype. It is collection of similar objects. We can define a class to 
//         program to any real world entity like Person, Student. Their common properties like Person Class
//         can have Age, Name and Salary. Similarly, Student Class can have Roll No, Name and Marks etc.
//         Any non-living entity like vehicle can also describe as a program class.

// Data Members:- These are different types of variable like Age, Name and Salary.

// Methods:- These are user define functions which indicates what action to be performed Foe Example:-
//           For Animal Class, methods can be like Eating and Sleeping. For Person Class, methods can be like
//           input data, calculate salary etc.

// =================================================================================================================

// Q:-1. Define a class Employee with data members Age and Name. Input the data and display it for one employee
/*
# include <iostream>
using namespace std;

class Employee
{
	public:	
		int Age;
		char Name[20];
};

main()
{
	Employee E1;
	
	cout<<"Enter the Name and Age:";
	cin>>E1.Name>>E1.Age;
	
	cout<<endl;
	
	cout<<E1.Name<<"\t"<<E1.Age;
}
*/
// Note:- Public keyword is the access specifier which indicates age and name can be accessible with the help
//        of object outside the class.

// ================================================================================================================

// Access Specifier - visibility Specifier:-
// ---------------------------------------

// Syntax to create object:-

// Class_Name variable;

// Note:- The data members can access onject data members.

// For Example:- E1.Name, E1.Age

// Things to Note:-
// --------------

// 1. Each object contains seperate copy of the data members.

// 2. When object is created then only memory will be instantiated for the class data members. that's why
//    object is also called as instance of a class.

// 3. object is a class variable.

// =================================================================================================================

// Q:-1. Create a class Student with data members Roll No, Name, Subject.
/*
# include <iostream>
using namespace std;

class Student
{
	public:
		int Roll_No;
		int Marks;
		char Name[20];
};

main()
{
	Student S1;

	cout<<"Enter Roll No & Name:";
	cin>>S1.Roll_No>>S1.Name>>S1.Marks;
	
	cout<<"\nRoll No\t Name\t Marks"<<endl;

	cout<<S1.Roll_No<<"\t"<<S1.Name<<"\t"<<S1.Marks;
}
*/

// Q:-2. Input the instruction of marks of 3 subjects and calculate total marks & average marks and display it.
/*
# include <iostream>
using namespace std;

class Student
{
	public:
		int Sub1, Sub2, Sub3;
		int Total_Marks;
		float Average_Marks;
		
	void input()
	{
		cout<<"Enter the Marks of 3 Subjects:";
		cin>>Sub1>>Sub2>>Sub3;
	}
	
	void calculate()
	{
		Total_Marks = Sub1 + Sub2 + Sub3;
		Average_Marks = Total_Marks / 3.0;
	}
	
	void display()
	{
	
		cout<<"\nMarks of 3 Subjects:" <<Sub1<<","<<Sub2<<","<<Sub3<<endl;
		cout<<"\nTotal Marks:"<<Total_Marks<<endl;
		cout<<"Average Marks:"<<Average_Marks;
	}
};

main()
{
	Student S1;
	
	S1.input();
	S1.calculate();
	S1.display();
}
*/

// Q:3. Define a class area with data members radius and calculate the area of a circle by taking radius as an input
//      and display it.
/*
# include <iostream>
using namespace std;

class Area
{
	public:
		int Radius;
		float Area_of_Circle; 
	
	void input()
	{
		cout<<"Enter Value of Radius:";
		cin>>Radius;
	}
	
	void calculate()
	{
		Area_of_Circle = 3.14 * Radius * Radius;
	}
	
	void display()
	{
		cout<<"\nArea of Circle:"<<Area_of_Circle<<endl;
	}
};

main()
{
	Area A1;
	
	A1.input();
	A1.calculate();
	A1.display();
}
*/

// Q:-4. Define a class student with private data members ID & Name. Input the data for 2 students and display it.
/*
# include <iostream>
using namespace std;

class Student
{
	private:
		int ID;
		char Name[20];
	
	public:
		void getData()
		{
			cin>>ID>>Name;
		}
		void ShowData()
		{
			cout<<"\nStudent ID:"<<ID<<"\t Name:"<<Name<<endl;
		}		
};

main()
{
	Student S1,S2;
	
	cout<<"Enter ID & Name of 1st Student:";
	S1.getData();
	S1.ShowData();
	
	cout<<endl;
	
	cout<<"\nEnter ID & Name of 2nd Student:";
	S2.getData();
	S2.ShowData();
}
*/

// =================================================================================================================

// Array of Objects:- It is the array of object of the same class.
// ----------------

// Syntax:- 

// Class_Name variable[dimension]

// For Example:- Student S1[3]

// Note:- It will reversed the memory for three objects information. Zero S1[0] position will contain first position
//        and 1st S1[1] position contain will contain 2nd position and so on...

// =================================================================================================================

// Q:-1. Input information of 3 students which are private members and display it using array of objects.
/*
# include <iostream>
using namespace std;

class Student
{
	private:
		int ID;
		char Name[20];
	
	public:
		void getData()
		{
			cin>>ID>>Name;	
		}	 
		void showData()
		{
			cout<<"\nId:"<<ID<<"\t Name:"<<Name<<endl;
		}		
};

main()
{
	Student S1 [3]; // array of objects 
	
	for (int i=0; i<3; i++)
	{
		cout<<"Enter ID & Name:";
		S1[i].getData();
	}
	cout<<"\nID\t Name"<<endl;
	
	for (int i=0; i<3; i++)
	{
		S1[i].showData();
	}
}
*/
/*
// Q:-2. Write a program to Add 2 data members Subject1 and Subject2. Input information of 3 students and 
//       calculate average & total marks of every student and display it.

# include <iostream>
using namespace std;

class Student
{
		
	private:
		int Subject1, Subject2,Total_Marks;
		float Average_Marks;
		char Name[20];
	
	public:
		void getData()
		{	
			cout<<"Enter the Name & Subject1 and Subject2 Marks:";
			cin>>Name>>Subject1>>Subject2;	
		}
		void getResult()
		{
			Total_Marks = Subject1 + Subject2;
			Average_Marks = Total_Marks /2.0;
		}
		void showData(int i)	
		{
			cout<<"\nStudent "<< i+1 <<" Result"<<endl;
			
			cout<<"\nName:"<<Name<<endl;
			cout<<"Subject 1:"<<Subject1<<endl;
			cout<<"Subject 2:"<<Subject2<<endl;
			cout<<"Total Marks:"<<Total_Marks<<endl;
			cout<<"Average Marks:"<<Average_Marks<<endl;
		}		
};

main()
{
	Student S [3];
	
	for(int i=0; i<3; i++)
	{
		cout<<"Enter Data for Students:"<<i+1<<endl;
		S[i].getData();
		S[i].getResult();
	}
	
	cout<<"\n=========== Student Result ==========="<<endl;
	
	for(int i=0; i<3; i++)
	{
		S[i].showData(i);
	}

}
*/
// Class with Parameterized Method:- We can pass arguments to the class methods to initialize data members of
// -------------------------------   class which will be input for class data members.

// Q:-3. Define the student class and input information of 2 students using parameterized methods.
/*
# include <iostream>
using namespace std;

class Student
{
	private:
		int ID;
		char Name[20];
	public:
		void getData(int i, char n[])
		{
			ID=i;
			strcpy(Name,n);
		}	
		void showData()
		{
			cout<<"Student ID:"<<ID<<"\t Name:"<<Name<<endl;
		}
};

main()
{
	Student S1, S2, S3;
	
	S1.getData(1, "Anderson");
	S1.showData();
	
	S2.getData(2, "Peter");
	S2.showData();
	
	S3.getData(3, "Winters");
	S3.showData();
}
*/

// =================================================================================================================

// Object as an argument to the method or member function:- As we can pass any type of data to the methods of
// -------------------------------------------------------  the class, we can also pass objects of the class
// to the method. This object can be collected in another object of the class the method.

// Q:-1. Define a class student with private data members. Input information of 2 student in S1 and S2. 
//       Define a method which accepts object of the class and display the data of that object.
/*
# include <iostream>
using namespace std;

class Student
{
	private:
		int ID;
		char Name[20];
	public:
		void getData(int i, char n[])
		{
			ID=i;
			strcpy(Name,n);	
		}	
		void showData(Student x)
		{
			cout<<"Student ID:"<<x.ID<<"\t Name:"<<x.Name;
		}
};

main()
{
	Student S1, S2;
	
	S1.getData(1, "Ethan Joy"); // calling method with argument
	
	S2.getData(2, "Gabriel Dun");
	S1.showData(S2);
	
}
*/

// Q:-2. Define a class Box with data members height and width. Input information of one box and pass it to
//       the function and calculate their addition of height or width of the object using object as an 
//       argument.
/*
# include <iostream>
using namespace std;

class Box
{
	private:
		int Height, Width;

	public:
		void getData()
		{
			cout<<"Enter Height:";
			cin>>Height;
			
			cout<<"Enter Width:";
			cin>>Width;
		}	
		void showData()
		{
			cout<<"\nYou have entered Height is:"<<Height<<endl;
			cout<<"You have entered Width is:"<<Width<<endl;
		}
		void Addition(Box B)
		{
			int Total = B.Height + B.Width;
			cout<<"\nAddition of Height and Width is:"<<Total<<endl;
		}
	
};
main()
{
	Box B1;

	B1.getData();
	B1.showData();
	B1.Addition(B1);
		
	
}
*/

// Q:-3. In the above program input information of 2 boxes then define a method which will calculate total height
//       and total width of the boxes using object as an argument.
/*
# include <iostream>
using namespace std;

class Box
{
	private:
		int Height, Width;
	public:
		void getData()
		{
			cout<<"\nEnter Height of Box:";
			cin>>Height;
			
			cout<<"Enter Width of Box:";
			cin>>Width;
			
		}	
		void showData()
		{
			cout<<" Height: "<<Height<<", Width: "<<Width<<endl;

		}
		void Addition(Box B)
		{
			int Total_Height, Total_Width;
			
			Total_Height = Height + B.Height;
			Total_Width = Width + B.Width;
			
			cout<<"\nTotal Height is:"<<Total_Height<<endl;
			cout<<"Total Width is:"<<Total_Width<<endl;
		}
		
};

main()
{
	Box B1, B2, B3;
	
	cout<<"--> Enter details of Box 1:"<<endl;
	B1.getData();
	
	cout<<"\n--> Enter details of Box 2:"<<endl;
	B2.getData();
	
	cout<<"\nBox 1:";
	B1.showData();
	
	cout<<"\nBox 2:";
	B2.showData();
	
	cout<<"\n---- Addtition ----"<<endl;
	B1.Addition(B2);
}
*/

// =================================================================================================================

// Defining Class Method Outside the Class with the use of :: (Scope resolution operator):- The operator indicates 
//  -------------------------------------------------------------------------- the scope of method to the compilar.

// Syntax:- Return_type class_name ::  Function_name(parameter if any)
// {
//		body of the method;
// }

// Along with this method should be declare inside the class.

// Prototype of method inside class:-

// Return_name function_name(parameters if any)

// For Example:-
/*
# include <iostream>
using namespace std;

class Student
{
	private:
		int ID;
		char Name[20];
	public:
		void getData()
		{
			cin>>ID>>Name;
		}
		void showData(); // Prototype		
};

void Student :: showData()
{
	cout<<"\nStudent ID: "<<ID<<"\t Name: "<<Name<<endl;
}  

main()
{
	Student S1, S2; // Object of class
	
	cout<<"Enter ID & Name:";
	
	S1.getData();
	S1.showData();
	
	cout<<"\nEnter ID & Name:";
	
	S2.getData();
	S2.showData();
}
*/

// =================================================================================================================

// Q:-1. Define a class student with id, 3 subjects marks and average. Input info of 2 students using parameterize
//      method and calculate average marks for every student and display the result.
/*
# include <iostream>
using namespace std;

class Student
{
	private:
		int ID, English, Math, Science;
		char Name[20];
	public:
		void getData(int i, char n[], int S1, int S2, int S3)
		{
			ID = i;
			strcpy(Name,n);
			English = S1;
			Math = S2;
			Science = S3;
		}
		void showResult()
		{
			int Total_Marks;
			float Average_Marks;
			
			Total_Marks = English + Math + Science;
			Average_Marks = Total_Marks / 3.0;
		}
		void showData()
		{
			int Total_Marks;
			float Average_Marks;
			cout<<"\nStudent ID:- "<<ID<<"\t Name:- "<<Name<<"\t Total Marks:- "<<Total_Marks<<"\tAverage Marks:- "<<Average_Marks;
		}	
};

main()
{
	Student S1, S2;
	
	cout<<"------ Student Report Card ------"<<endl;    
	                                   
	S1.getData(101, "Andrew", 70, 40, 20);
	S1.showResult();
	S1.showData();
	
	S2.getData(102,"Philip", 20, 40, 50);
	S2.showResult();
	S2.showData();

}
*/

// =================================================================================================================

// Friend Function:- It is the function which is non-member function of a class which can access data members of the
// ---------------   class. We have to declare it as a friend function inside the class.

// Syntax:- 

// Return_type friend function_name(reference of object)

// Note:- There is no need of object to call the friend function. But it will take object as a reference and
//        access the data.

// =================================================================================================================
/*
// Q:-1. Define a class with two data members and add them in non-members function.

# include <iostream>
using namespace std;

class myclass
{
	private:
		int A, B;
	public:
		void getNumber()
		{
			cin>>A>>B;
		}
		friend void Add(myclass&);
					
};

void Add(myclass &object)
{
	cout<<"Addition:- "<<object.A + object.B;
}
main()
{
	myclass S1;
	
	cout<<"Enter Value of A and B:";
	S1.getNumber();
	Add(S1);
}
*/

// =================================================================================================================

// Reference Variable:- In c++ we can give alternative name to the previously declare variable which is called 
// ------------------   reference variable. It means we can give two names to a single memory name. Reference 
//                      variable can be created at the time of declaration only.

// Syntax:-

// Data_type & reference_name = previously declare variable;

// =================================================================================================================

// Q:-1. Declare a variable and assign with its memory reference name as x.
/*
# include <iostream>
using namespace std;

main()
{
	int a = 10;
	int &x =a; // Declaration of reference variable
	x++;
	
	cout<<"Value of x:"<<x<<"\t a:"<<a<<endl;
	a-=10;
	cout<<"Value of x:"<<x<<"\t a:"<<a;
}
*/

// Q:-2. Define two class and add them into a non-member function.
/*
# include <iostream>
using namespace std;

class PQR; // Pre-declaration of the class

class ABC
{
	private:
		int First_Number;
	public:
		void getFirst_Number()
		{
			cin>>First_Number;	
		}
		friend void Add(ABC&, PQR&); // Friend function declaration
};
class PQR
{
	private:
		int Second_Number;
	public:
		void getSecond_Number()
		{
			cin>>Second_Number;	
		}
		friend void Add(ABC&, PQR&);	
};
void Add(ABC &r1, PQR &r2)
{
	cout<<"\nAddition:"<<r1.First_Number + r2.Second_Number;
}
main()
{
	ABC a1;
	PQR p1;
	
	cout<<"Enter Value of First Number:";
	a1.getFirst_Number();
	
	cout<<"Enter value of Second Number:";
	p1.getSecond_Number();
	
	Add(a1,p1);
}
*/

// =================================================================================================================

// Constructors:- Constructor is to initialize data members of the class. Constructor always shares the same Name 
// ------------  as the Class Name. Constructor has no return type like void. Constructor calls automatically by the
//               compiler whenever an object of the class is initialize.

// Types of Constructors:- 

// 1. Default Constructor:- This constructor takes no argument. It initialize data member with default value 0.

// 2. Parameterized Constructor:- If we want to create a constructor to intialize objects with different values then
//                                use parameterized constructor. Values for this constructor(argument) can be same 
//                                when we create an object.

// 3. Copy Constructor:- This constructor is used to copy data or onr object to another object. For Example:-
//                       Student S2 = S1; At this statement of execution will be pass as a copy constructor.

// Syntax:-

// class Student
// {
//  	public:
// 				Student() // Default Constructor
//				Student (int i, char n[]) // Parameterized Constructor
//              Student(Student &S1)
//						id = S1.id
// }

// =================================================================================================================

// Default Constructor:-
// -------------------

// Q:-1. Define a class with default constructor.
/*
# include <iostream>
using namespace std;

class Student
{
	int ID;
	char Name[20];
	public:
		Student()
		{
			ID = 101;
			strcpy(Name, "Andrew");
		}
		void showData()
		{
			cout<<" Student ID: "<<ID<<"\t Name: "<<Name;
		}
};

main()
{
	Student S1;
	
	S1.showData();
	S1.showData();
}
*/

// Parameterized Constructor:-
// -------------------------

// Q:-2. Define a class student with parameterized constructor which will accepet student data initialize the 
//       member of class.
/*
# include <iostream>
using namespace std;

class Student
{
	int ID;
	char Name[20];
	public:
		Student(int i, char n[])
		{
			ID = i;
			strcpy(Name, n);
		}
		void showData()
		{
			cout<<"\t Student ID: "<<ID<<"\t Name: "<<Name;
		}
};

main()
{
	Student S1(101, "Philipus");
	Student S2(102, "Andrew");
	
	S1.showData(); // Parameterized constructor is called
	S2.showData();
}
*/

// Copy Constructor:-
// ----------------

// Q:-3. Define a class student create one object give it value then copy this object into another object.
/*
# include <iostream>
using namespace std;

class Student
{
	int ID;
	char Name[20];
	public:
		Student(int i, char n[])
		{
			ID = i;
			strcpy(Name, n);
		}
		Student(Student &S1)
		{
			ID = S1.ID;
			strcpy(Name, S1.Name);
		}
		void showData()
		{
			cout<<"\tStudent ID: "<<ID<<"\tName: "<<Name;
		}
};

main()
{
	Student S1(101, "Andrew Hudson");
	Student S2 = S1;
	
	S1.showData();
	S2.showData();
}
*/

// =================================================================================================================

// Constructor Overloading:- If we have more then one constructor in the class then it is called constructor 
// -----------------------   overloading. Sometimes it is the need if we have to assign different values for
//                           object so accordingly we can define constructors matching with an object.

// Q:-1. Define a class employee and use default and parameterized function to initialize objects.
/*
# include <iostream>
using namespace std;

class Employee
{
	char Name[20];
	int Bonus;
	public:
		Employee()
		{
			strcpy(Name, "Andrew");
			Bonus = 2000;	
		}
		Employee(char n[], int B)
		{
			strcpy(Name, n);
			Bonus = B;
		}
		void showData()
		{
			cout<<"\tName: "<<Name<<"\tBonus: "<<Bonus;
		}
};

main()
{
	Employee E1;
	
	E1.showData();
	
	Employee E3("Philip",3000);
	E3.showData();
	
	Employee E4("Kailler",4000);
	E4.showData();
}
*/

// =================================================================================================================

// Destructor:- Destructor is use to deallocate the memory for objects that are created in the program it can be
// ----------   define as:- Tild (~)

// Synatx:- 

// ~ class_Name()
// {
//		body
// }

// =================================================================================================================

// Q:-1. Define a class with destructor.
/*
# include <iostream>
using namespace std;

class Myclass
{
	public:
		Myclass()
		{
			cout<<"Constructor is Called.";
		}
		~Myclass() // Destructor 
		{
			
		}
};

main()
{
	Myclass M1, M2;
}
*/

// =================================================================================================================

//                  ============== Complete Student Details Program ==============
/*
# include <iostream>
# include <limits>
using namespace std;

class Student
{
	private:
		int ID;
		char Name[20];
		int Age;
		char Gender[20];
		char Course[20];
		float Python, Java, PHP, PowerBI, SQL;
		float Total_Marks, Average_Marks;
	
	public:
		void getData()
		{
			cout<<"Enter Student ID: ";
			cin>>ID;
			
			cout<<"Enter Name: ";
			cin>>Name;
			
			cout<<"Enter Age: ";
			cin>>Age;
			
			cout<<"Enter Gender (Male/Female): ";
			cin>>Gender;
			
			cout<<"Enter Course: ";
			cin>>Course;
			
			cout<<"\nEnter Marks of 5 Subjects: ... "<<endl;
			
			cout<<"\nEnter Marks of Python: ";
			cin>>Python;
			
			cout<<"Enter Marks of Java: ";
			cin>>Java;
			
			cout<<"Enter Marks of PHP: ";
			cin>>PHP;
			
			cout<<"Enter of Marks of PowerBI: ";
			cin>>PowerBI;
			
			cout<<"Enter Marks of SQL: ";
			cin>>SQL;
		}
		void Calculate()
		{
			Total_Marks = Python + Java + PHP + PowerBI + SQL;
			Average_Marks = Total_Marks / 3; 	
		}	
		void showData()
		{
			cout<<"\n------- Student Details -------"<<endl;
			
			cout<<"\nStudent ID: "<<ID<<endl;
		
			cout<<"Name: "<<Name<<endl;
			
			cout<<"Age: "<<Age<<endl;
			
			cout<<"Gender: "<<Gender<<endl;
		
			cout<<"Course: "<<Course<<endl;
			
			cout<<"Python: "<<Python<<endl;
			
			cout<<"Java: "<<Java<<endl;

			cout<<"PHP: "<<PHP<<endl;
			
			cout<<"PowerBI: "<<PowerBI<<endl;
			
			cout<<"SQL: "<<SQL<<endl;
			
			cout<<"Total Marks: "<<Total_Marks<<endl;
			
			cout<<"Average Marks: "<<Average_Marks<<endl;
			
			if (Average_Marks >= 33)

				cout<<"Result: Pass";
			else
				cout<<"Result: Fail";
		}
};

main()
{
	Student S;
	
	S.getData();
	S.Calculate();
	S.showData();
}
*/
