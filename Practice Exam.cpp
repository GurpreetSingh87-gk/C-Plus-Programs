// Practice Exam:- 
// -------------

// Inheritance:-
/*
# include <iostream>
using namespace std;

class Person
{
	public:
		string Name;
		void showName()
		{
			cout<<"Name: "<<Name<<endl;
		}
};
class Student : public Person
{
	public:
		int Roll;
		void showRoll()
		{
			cout<<"Roll No: "<<Roll;
		}
};
main()
{
	Student S1;
	
	S1.Name = "Andrew Willson";
	S1.Roll = 101;
	
	S1.showName();
	S1.showRoll();
	
}
*/

// ================================================================================================

// Operator Overloading:-
// --------------------
/*
# include <iostream>
# include <cstring>
using namespace std;

class Student
{
	int Marks;
	char Name[20];
	public:
		void getData(const char n[], int m)
		{
			Marks=m;
			strcpy(Name, n);
		}
		void showData()
		{
			cout<<"Name: "<<Name<<" Marks: "<<Marks<<endl;
		}
	int operator >(Student x)
	{
		int maximum;
		
		if(Marks > x.Marks)
			return Marks;
		else
			return x.Marks;	
	}
};
int main()
{
	int Maximum_Marks;
	Student S1, S2;
	
	S1.getData("Andrew", 70);
	S1.showData();
	
	S2.getData("Philip", 90);
	S2.showData();
	
	Maximum_Marks = S1 > S2;
	
	cout<<"\nMaximum Marks: "<<Maximum_Marks;
}
*/

// =================================================================================================

// Control Statement:-
// -----------------

// Tyeps of Control Statement:-

// 1. Conditional Statement
// 2. Loooping Statement


// 1. Conditional Statement:- It is used to make decisions based on conditions.

// If Statement:- It executes if condition is True.
/*
# include <iostream>
using namespace std;

main()
{
	int A = 10;
	
	if(A > 5)
	{
		cout<<"A is greater";
	}
	
}
*/

// If else Statement:- It executes one block if condition is true otherwise another block. 
/*
# include <iostream>
using namespace std;

main()
{
	int A = 30, B = 20;
	
	if(A > B)
	{
		cout<<"A is greater";
	}
	else
	{
		cout<<"B is greater";
	}
}
*/

// else if ladder:- It is used for multiple conditions.

/*
# include <iostream>
using namespace std;

main()
{
	int Marks = 45;
	
	if(Marks >= 90)
	{
		cout<<"A+";
	}
	else if(Marks >= 60)
	{
		cout<<"B+";
	}
	else if(Marks >= 45)
	{
		cout<<"C+";
	}
	else
	{
		cout<<"D+";
	}
	
}
*/

// Nested if else:- It is used for multiple nesting
// --------------

/*
# include <iostream>
using namespace std;

main()
{
	int A = 3;
	
	if(A > 2)
	{
		if(A % 2 == 0)
		{
			cout<<"A Positive";
		}
		else
		{
			cout<<"A Negative";
		}
	}
}
*/

// Switch Case:- Used for Multiple choise

/*
# include <iostream>
using namespace std;

main()
{
	int Marks = 50;
	
	switch(Marks >= 96)
	{
		case 1:
			cout<<"A Grade";
		
		break;
		
		case 2:
			cout<<"B Grade";
		
		break;
		
		case 3:
			cout<<"C Grade";
			
		break;
		
		default:
			cout<<"D Grade";			
	}
}
*/

// looping Statement:- It is used to repeate a block of code until condition becomes false.

// for Loop:-

// Syntax:-

// for(initialization ; condition ; increment)
/*
# include <iostream>
using namespace std;

// Q:- 1 to 10 numbers.

main()
{
	int n = 10;
	
	for(int i=0 ; i<=10 ; i++)
	{
		cout<<i<<" | ";
	}
	cout<<"End";
}
*/

// while loop:- it is used when number of iteration(repeatation) is known.

// Syntax:-

// initialization of object;
// while(condition)
// {
//		body;
//		increment i++;
// }

/*
# include <iostream>
using namespace std;

main()
{
	int i = 1;
	
	while(i  <= 10)
	{
		cout<<i<<" | ";
		i++;
	}
*/

// do while loop:- It executes at least once and condition checked later.

// Syntx:-

// do
// {
//		statement;
// } while(condtion);

/*
# include <iostream>
using namespace std;

main()
{
	int i = 1;
	
	do
	{
		cout<<i<<" | ";
		i++;
	}while(i <= 10);
}
*/

// =================================================================================================

// Constructor:-

// Types of Constructor:-

// 1. Default Constructor:- A constructor with no parameters.

/*
# include <iostream>
using namespace std;

class Student
{
	public:
		Student()
		{
			cout<<"Default Constructor Called";
		}
};
main()
{
	Student();
}
*/

// 2. Parameterized Constructor:- A constructor with parameters.

/*
# include <iostream>
using namespace std;

class Student
{
	int Roll;
	public:
		Student(int r)
		{
			cout<<r;
		}
};
main()
{
	Student(10);
}
*/

// Copy Constructor:- It creates a copy of original object.


/*
class Test
{
	int x;
	public:
		Test(int a)
		{
			x = a;
		}
		Test(Test &t)
		{
			x = t.x;
		}
};
*/

// =================================================================================================

// Singly Linked List:-
// ------------------

// Operations on Singly Linked List:-
// --------------------------------

// 1. Traversal
// 2. Insertion
// 3. Deletion
// 4. Search

// ======================================================================================

// 1. Traversal:-
//    ---------

/*
# include <iostream>
using namespace std;

struct Node
{
	int Data;
	Node* Next;
};

Node* Head = NULL;

void CreateNode()
{
	// Creating Temporary:-
	
	Node* Temp = NULL;
	
	// Creating 5 Nodes and Assigning Data:-
	
	for(int i=1 ; i<=5 ; i++)
	{
		Node* CurrentNode = new Node();
		
		cout<<"Enter Data for Node "<<i<<" : ";
		cin>>CurrentNode->Data;
		
		CurrentNode->Next = NULL;
		
		if(Head == NULL)
		{
			Head = CurrentNode;
			Temp = CurrentNode;
		}
		else
		{
			Temp->Next = CurrentNode;
			Temp = CurrentNode;
		}
	}
	
}
void Traverse()
{
	// Traversing Nodes:-
	
	cout<<"\nLinked List Elements: ";
	
	Node* Temp = Head;
	while(Temp != NULL)
	{
		cout<<Temp->Data<<" | ";
		Temp = Temp->Next;
	}
	cout<<"NULL\n";

}
main()
{
	CreateNode();
	Traverse();
}
*/


// 2. Insertion:-
//    ---------	

// A. Insert At Beginning:-
//    --------------------

/*
# include <iostream>
using namespace std;

struct Node
{
	int Data;
	Node* Next;
};
Node* Head = NULL;

void CreateNode()
{
	// Creating Temporary:-
	
	Node* Temp = NULL;
		
	// Creating Nodes using for Loop:-
	
	for(int i=1 ; i<=5 ; i++)
	{
		Node* CurrentNode = new Node();
	
		cout<<"Enter Data for Node "<<i<<": ";
		cin>>CurrentNode->Data;
	
		CurrentNode->Next = NULL;
	
		if(Head == NULL)
		{
			Head = CurrentNode;
			Temp = Head;
		}
		else
		{
			Temp->Next = CurrentNode;
			Temp = CurrentNode;
		}
	}
}
void insertAtBeginning(int value)
{
	// Creating NewNode At the Beginning:-
	
	Node* NewNode = new Node();
	NewNode->Data = value;
	NewNode->Next = Head;
	Head = NewNode;
	cout<<"\nNode Inserted Successfully!\n";
}
void Display()
{
	// Display Program:-
	
	cout<<"\nYour Linked List: ";
	Node* Temp = Head;
	while(Temp != NULL)
	{
		cout<<Temp->Data<<" | ";
		Temp = Temp->Next;
	}
	cout<<"NULL\n";
}
main()
{
	int value;
	
	CreateNode();
	
	cout<<"\nEnter Value to Insert New Node: ";
	cin>>value;
	insertAtBeginning(value);
	
	Display();
}
*/

// B. Insert At End:-
//    -------------

/*
# include <iostream>
using namespace std;

struct Node
{
	int Data;
	Node* Next;	
};
Node* Head = NULL;

void CreateNode()
{
	// Creating Temporary:-
	
	Node* Temp = NULL;
	
	// Creating Nodes:-
	
	for(int i=1 ; i<=5 ; i++)
	{
		Node* CurrentNode = new Node();
		
		cout<<"Enter Data for Node "<<i<<": ";
		cin>>CurrentNode->Data;
		
		CurrentNode->Next = NULL;
		
		if(Head == NULL)
		{
			Head = CurrentNode;
			Temp = Head;
		}
		else
		{
			Temp->Next = CurrentNode;
			Temp = CurrentNode;
		}
	}
}

void insertAtEnd(int value)
{
	// Creating NewNode at the End:-
	
	Node* NewNode = new Node();
	NewNode->Data = value;
	NewNode->Next = NULL;
	
	Node* Temp = Head;
	while(Temp->Next != NULL)
	{
		Temp = Temp->Next;
	}
	Temp->Next = NewNode;
	cout<<"\nNode Inserted Successfully!\n";
}

void Display()
{
	// Display Program:-
	
	cout<<"\nYour Linked List: ";
	Node* Temp = Head;
	while(Temp != NULL)
	{
		cout<<Temp->Data<<" | ";
		Temp = Temp->Next;
	}
	cout<<"NULL\n";
}
main()
{
	int value;
	
	CreateNode();
	
	cout<<"\nEnter Value to Insert New Node: ";
	cin>>value;
	insertAtEnd(value);
	
	Display();
}
*/

// C. Insert At Specific Position:-
//    ---------------------------

/*
# include <iostream>
using namespace std;

struct Node
{
	int Data;
	Node* Next;
};

Node* Head = NULL;

void CreateNode()
{
	// Creating Temporary Node:-
	
	Node* Temp = NULL;
	
	for(int i=1 ; i<=5 ; i++)
	{
		Node* CurrentNode = new Node();
		
		cout<<"Enter Data for Node "<<i<<": ";
		cin>>CurrentNode->Data;
		
		CurrentNode->Next = NULL;
		
		if(Head == NULL)
		{
			Head = CurrentNode;
			Temp = CurrentNode;
		}
		else
		{
			Temp->Next = CurrentNode;
			Temp = CurrentNode;
		}	
	}
}
void insertAtPosition(int pos, int value)
{
	// Creating NewNode At the Specific Position:-
	
	Node* NewNode = new Node();
	NewNode->Data = value;
	
	Node* Temp = Head;
	for(int i=1 ; i<pos-1 ; i++)
	{
		Temp = Temp->Next;
	}
	NewNode->Next = Temp->Next;
	Temp->Next = NewNode;
	cout<<"\nNode Inserted Successfully!\n";
}

void Display()
{
	// Display Program:-
	
	cout<<"\nYour Linked List: ";
	Node* Temp = Head;
	while(Temp != NULL)
	{
		cout<<Temp->Data<<" | ";
		Temp = Temp->Next;
	}
	cout<<"NULL\n";
}
main()
{
	int value, pos;
	
	CreateNode();
	
	cout<<"\nEnter Position to Insert New Node: ";
	cin>>pos;
	
	cout<<"Enter Value to Insert New Node: ";
	cin>>value;
	insertAtPosition(pos, value);
	
	Display();
}
*/

// 3. Deletion:-
//   ---------

// A. Delete From Beginning:-
//    ---------------------

/*
# include <iostream>
using namespace std;

struct Node
{
	int Data;
	Node* Next;
};
Node* Head = NULL;

void CreateNode()
{
	// Creating Temporary and CurrentNode:-
	
	Node* Temp = NULL;
	
	for(int i=1 ; i<=5 ; i++)
	{
		Node* CurrentNode = new Node();
		cout<<"Enter Data for Node "<<i<<": ";
		cin>>CurrentNode->Data;
		
		CurrentNode->Next = NULL;
	
	if(Head == NULL)
	{
		Head = CurrentNode;
		Temp = CurrentNode;
	}
	else
	{
		Temp->Next = CurrentNode;
		Temp = CurrentNode;
	}
	}
}
void deleteFromBeginning()
{
	// If List is Empty:-
	
	if(Head == NULL)
	{
		cout<<"\nLinked List is Empty";
		return;
	}
	
	// Deleting Node From Beginning:-
	
	Node* Temp = Head;
	Head = Head->Next;
	delete Temp;
	cout<<"\nNode Deleted Successfully!\n";
}
void Display()
{
	cout<<"\nYour Linked List: ";
	Node* Temp = Head;
	while(Temp != NULL)
	{
		cout<<Temp->Data<<" | ";
		Temp = Temp->Next;
	}
	cout<<"NULL\n";
}
main()
{
	int value;
	CreateNode();
	
	deleteFromBeginning();
	
	Display();
}
*/

// B. Delete From End:-
//    ---------------

/*
# include <iostream>
using namespace std;

struct Node
{
	int Data;
	Node* Next;
};
Node* Head = NULL;

void CreateNode()
{
	// Creating Temporary Node:-
	
	Node* Temp = NULL;
	
	for(int i=1 ; i<=5 ; i++)
	{
		Node* CurrentNode = new Node();
		
		cout<<"Enter Data for Node "<<i<<": ";
		cin>>CurrentNode->Data;
		
		CurrentNode->Next = NULL;
		
		if(Head == NULL)
		{
			Head = CurrentNode;
			Temp = CurrentNode;
		}
		else
		{
			Temp->Next = CurrentNode;
			Temp = CurrentNode;
		}	
	}
}
void deleteFromEnd()
{
	// If List is Empty:-
	
	if(Head == NULL)
	{
		cout<<"\nLinked List is Empty!";
		return;
	}
	
	Node* Temp = Head;
	while(Temp->Next->Next != NULL)
	{
		Temp = Temp->Next;
	}
	delete Temp->Next;
	Temp->Next = NULL;
	cout<<"\nNode is Deleted Successfully!\n";
}
void Display()
{
	cout<<"\nYour Linked List: ";
	Node* Temp = Head;
	while(Temp != NULL)
	{
		cout<<Temp->Data<<" | ";
		Temp = Temp->Next;
	}
	cout<<"NULL\n";
}
main()
{
	CreateNode();
	
	deleteFromEnd();
	
	Display();
}
*/

// C. Deleting From Specific Position:-
//    -------------------------------

/*
# include <iostream>
using namespace std;

struct Node
{
	int Data;
	Node* Next;
};

Node* Head = NULL;

void CreateNode()
{
	// Creating Temporary Node:-
	
	Node* Temp = NULL;
	
	for(int i=1 ; i<=5 ; i++)
	{
		Node* CurrentNode = new Node();
		cout<<"Enter Data for Node "<<i<<": ";
		cin>>CurrentNode->Data;
		CurrentNode->Next = NULL;
		
		if(Head == NULL)
		{
			Head = CurrentNode;
			Temp = CurrentNode;
		}
		else
		{
			Temp->Next = CurrentNode;
			Temp = CurrentNode;
		}
	}	
}
void deleteFromPosition(int pos)
{
	// If List is Empty:-
	
	if(Head == NULL)
	{
		cout<<"\nList is Empty!";
		return;
	}
	
	Node* Temp = Head;
	for(int i=1 ; i<pos-1 ; i++)
	{
		if(Temp->Next == NULL)
		{
			cout<<"\nInvalid Position!";
			return;
		}
	}
	Temp = Temp->Next;
	
	Node* deleteNode = Temp->Next;
	Temp->Next = deleteNode->Next;
	delete deleteNode;
	cout<<"\nNode Deleted Successfully!\n";
}
void Display()
{
	cout<<"\nYour Linked List: ";
	Node* Temp = Head;
	while(Temp != NULL)
	{
		cout<<Temp->Data<<" | ";
		Temp = Temp->Next;
	}
	cout<<"NULL\n";
}

main()
{
	int pos;
	CreateNode();
	
	cout<<"\nEnter Position to Delete Node: ";
	cin>>pos;
	deleteFromPosition(pos);
	
	Display();
}
*/

// ======================================================================================

// Tree:-
// ----

// Operations on Binary Search Tree:-
// --------------------------------

// 1. Traversal
// 2. Inorder, Postorder, Preorder.

// ======================================================================================

// 1. Traversal:-

/*
# include <iostream>
using namespace std;

struct Node
{
	int Data;
	Node* Left;
	Node* Right;	
};

Node* Root = NULL;

Node* CreateNode(int value)
{
	Node* Temp = new Node();
	Temp->Data = value;	                    
	Temp->Left = NULL;
	Temp->Right = NULL;
	return Temp;
}
void Inorder(Node* Root)
{
	// If Tree is Empty:-
	
	if(Root == NULL)
	{
		return;
	}
	
	Inorder(Root->Left);     // Left
	cout<<Root->Data<<" | ";   // Root 
	Inorder(Root->Right);    // Right
}
void Postorder(Node* Root)
{
	// If Tree is Empty:-
	
	if(Root == NULL)
	{
		return;
	}
	
	Postorder(Root->Left);    // Left
	Postorder(Root->Right);   // Right
	cout<<Root->Data<<" | ";  // Root	
}
void Preorder(Node* Root)
{
	// If Tree is Empty:-
	
	if(Root == NULL)
	{
		return;
	}
	
	cout<<Root->Data<<" | ";  // Root
	Preorder(Root->Left);     // Left
	Preorder(Root->Right);    // Right
}
main()
{
	// Creating Root Node:-
	
	Root = CreateNode(100);
	
	// Creating Child Nodes:-
	
	// Left Nodes:-
	
	Root->Left = CreateNode(90);
	Root->Left->Left = CreateNode(80);
	Root->Left->Right = CreateNode(95);
	
	// Right Nodes:-
	
	Root->Right = CreateNode(110);
	Root->Right->Right = CreateNode(120);
	Root->Right->Left = CreateNode(105);
	
	cout<<"Inorder: ";
	Inorder(Root);
	
	cout<<"\nPostorder: ";
	Postorder(Root);
	
	cout<<"\nPreorder: ";
	Preorder(Root);
	
}
*/
