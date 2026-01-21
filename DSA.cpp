// Topic:- DSA (Data Structure & Algorithms)


// Data Structure:- Data Structure is a way of organizing and sorting data in computer's memory so that it
// --------------   can be used efficiently. It is a set of algorithms that we can use in any programming 
//                  language to structure data.

                                   
// Types of Data Structure:- 
// -----------------------

// 1. Primitive Data Structure:- Int, Float, Char, Double and Pointer.
//    ------------------------

// 2. Non-Primitive Data Structure:- Linear and Non-Linear Data Structure.
//    -------------------------


// Classification of Data Structure:-
// -------------------------------

// 1. Linear Data Structure:- Linear Data Structure is a way of organizing and sorting data in sequence, where
// ---------------------  	  each element is connected to the one before and after it. 
//                            For Ex:-

// Arrays:- Array is a collection of items of the same data types stored in continuous memory location.
// ------

// Stack:- Stack follows the Last-In-First-Out(LIFO) principle, means last element added to the stack and 
// -----   first one is to be removed.

// Queue:- Queue follows the First-In-First-Out(FIFO) principle, means First element added to the queue and 
// -----   first is to be removed.

// Linkedlist:- Its a chain of nodes where each node contains data and a link to the next node in the list.
// ----------


// 2. Non-Linear Data Structure:- A Non-Linear Data Structure is a way of organizing data where elements are 
// ---------------------------    not arranged in a straight line (sequence).
//								 For Ex:- 

// Trees:- Data is arranged in a hierarchical (top to bottom) structure. Each elements (nodes) can have child  
// ------  nodes.

// Graphs:- Data is arranged in the form of nodes (vertices) and connections (edges). Elements can be
// ------   connected in many possible ways.

// =========================================================================================================

// 										Data Structure
// 											  |
//								----------------------------
//							   |						   |
//				Primitive Data Structure		Non-Primitive Data Structure
//														   |
//											--------------------------------
//										   | 							   |
//							    Linear Data Structure			 Non-Linear Data Structure
//									   	  |								  |
// 								--------------------- 		    ---------------------
//							   |					|		   |					|
//							Static				Dynamic		 Trees				Graphs
//							  |					   |
//						   Arrays			  Linkedlist
//												  |
//											    Queue
//												 |
//										       Stack												 

// =========================================================================================================

// Typedef:- It is used to define the standerd data type with another name that is we can give another name
// -------   int, float, char etc.

// For Example:-

/*
# include <iostream>
using namespace std;

main()
{
	typedef int integer;
	
	integer A=10;
	cout<<"Value of A is: "<<A;
}
*/

// Note:- We can also define the structure name.

// Foe Example:-

// Giving another name for the structure person as 'Per' :-

/*
# include <iostream>
# include <string>
using namespace std;

typedef struct person 
{
	int ID, Age;
	char Name[40];
}per;
main()
{
	per P1;
	
	P1.ID = 101;
	P1.Age = 25;
	strcpy (P1.Name, "Anderson Wolt");	
	
	cout<<"ID: "<<P1.ID<<"\t"<<"Age: "<<P1.Age<<"\t"<<"Name: "<<P1.Name;
}
*/

// =========================================================================================================

// Reversing Memory using New Operator:-
// -----------------------------------

// Syntax:-

// pointer = new datatype [size];

// For Ex:-

// pointer = new int [4];

// =========================================================================================================

// Q:-1. Reverse the memory and store the data into it and display it.

/*
# include <iostream>
using namespace std;

main()
{
	int *pointer1, *pointer2, n, size, data;
	
	cout<<"Enter Number of Location to Reverse the Memory: ";
	cin>>size;
	
	pointer1 = new int [size];
	
	// Input Data:-
	
	for(int i=0 ; i<size ; i++)
	{
		cout<<"Enter Data for Location: ";
		cin>>pointer1[i];
	}
	
	cout<<"\nElements Stored are: ";
	for(int i=0 ; i<size ; i++)
	{
		cout<<pointer1[i]<<" ";
	}
	
	cout<<"\nReversed Elements: ";
	pointer2 = pointer1 + size - 1;
	for(int i=size-1 ; i>=0 ; i--)
	{
		cout<<*pointer2<<" ";
		pointer2--;
	}
}
*/

// =========================================================================================================

// New Operator, Dynamic (run time) memeory allocation:- 
// ---------------------------------------------------

// Self Referential Structure:- It points out its own memeory. It is used to implement the dynamic data 
// -------------------------    structure and for this it has a data clock to hold a value and next block
//                              pointing its own memory.

// Q:-1. Using a structure create two nodes and store data into it and connect node one to node two by 
//       assigning its address.

/*
# include <iostream>
using namespace std;

struct Student
{
	int RNO;
	char Section;
	struct Student *link;
};
main()
{
	struct Student S1;
	
	S1.link=NULL;
	S1.RNO=101;
	S1.Section='B';
	
	struct Student S2;
	
	S2.link=NULL;
	S2.RNO=102;
	S2.Section='C';
	
	// Linking S1 to S2:-
	
	S1.link=&S2;
	
	// Linking S2 to S1:-
	
	S2.link=&S1;
	
	cout<<"Accessing 2nd Student Data:-\n";
	
	cout<<"\nRoll No: "<<S1.link->RNO<<endl;
	cout<<"Section: "<<S1.link->Section<<endl; 
	
	cout<<"\nAccessing 1st Student Data:-"<<endl;
	
	cout<<"\nRoll No: "<<S2.link->RNO<<endl;
	cout<<"Section: "<<S2.link->Section<<endl;
}
*/

// =========================================================================================================

// Linked List:- 
// -----------   

// 1. Linked list can be defined as collection of objects called "nodes" that are randomly stored in the
//    memory.

// 2. A node contains two fields data and link. Data stored at particular address and link is the pointer
//    which contains the address of the next node in the memory.

// 3. The last node of the list contains pointer to the null.

// 4. Linked list stores the data in sequential storage link arrays but the memory locations are not
//    contiguous (connected). Linked list can store data of different datatypes.

// Types of Linked list:- 
// -------------------

// 1. Singly linked list
// 2. Circular linked list
// 3. Doubly linked list


// Linked list Operations:-
// ---------------------

// Insertion:- Inserting at the beginning, Inserting at the lat, Inserting at the specific position.
// ---------

// Deletion:- Deleting from beginning, Deleting from the end, Deleting from a specific position.
// --------

// Traversal:- Accessing each node starting from head to tail.
// --------

// Seraching:- Searching element from linked list.
// --------

// Sorting:- Arranging nodes in ascending to descending order.
// -------

// =========================================================================================================

// 1. Singly Linked List:- A singular linked list is a linear data structure where each elements or nodes 
//    ------------------  contains data and a pointer to the next node in the sequence. The First node is 
//                        called Head and the Last node points to NULL indicating the end of the list. 
//						  Traversal (access) can be done only in one direction, from Head to Tail.


// 			         data|next          data|next          data|next         data|next
// 	   Head  -->     20 | 200	 -->	35 | 300   -->	   45 | 400   -->	 56 | NULL   <-- Tail
//	(Address)	       100				  200			    300				   400 

// =========================================================================================================

// 1. Traversal:-
//    ---------

// Creation of linked list:-

/*
# include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};
main()
{
	// Creating Nodes:-
	
	Node* First = new Node();
	Node* Second = new Node();
	Node* Third = new Node();
	
	// Assigning Data:-
	
	First->data = 10;
	Second->data = 20;
	Third->data = 30;
	
	// Connecting Nodes:-
	
	First->next = Second;
	Second->next = Third;
	Third->next = NULL;
	
	// Display:-

	Node* Temp=First;
	while(Temp!=NULL)
	{
		cout<<Temp->data<<" ";
		Temp = Temp->next;	
	}
}
*/

// =========================================================================================================

// Insertion:-
// --------

// 1. Inserting at the beginning :- 
//    -------------------------
/*
# include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};
Node* Head = NULL;

void insertAtBeginning()
{
	// Creating Nodes:-
	
 	Node* First = new Node();
	Node* Second = new Node();
	Node* Third = new Node();
	
	// Assigning Data:-
	
	First->data = 10;
	Second->data = 20;
	Third->data = 30;
	
	// Connecting Nodes:-
	
	First->next = Second;
	Second->next = Third;
	Third->next = NULL;
	
	// Inserting new Node at beginning:-
	
	Node* Head = new Node();
	Head->data = 5;
	Head->next = First;	
	
	cout<<"Linked List: ";
	
	Node* Temp=Head;
	while(Temp!=NULL)
	{
		cout<<Temp->data<<" ";
		Temp = Temp->next;	
	}
	cout<<"NULL\n";
}
main()
{
	Node* Head = NULL;
	
	insertAtBeginning();
}
*/

// 2. Inserting at the last:-
//    --------------------
/*
# include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};
Node* Head = NULL;

void insertAtEnd()
{
	// Creating Nodes:-
	
	Node* Head = new Node();
	Node* First = new Node();
	Node* Second = new Node();
	Node* Third = new Node();
	
	// Assigning Data:-
	
	Head->data = 5;
	First->data = 10;
	Second->data = 20;
	Third->data = 30;
		
	// Connecting Nodes:-
	
	Head->next = First;
	First->next = Second;
	Second->next = Third;
	Third->next = NULL;
		
	// Inserting new Node at the end:-
	
	Node* newNode = new Node();
	newNode->data = 40;
	newNode->next = NULL;
	
	Node* Temp = Head;
	while(Temp->next!=NULL)
	{
		Temp = Temp->next;
	}
	
	Temp->next = newNode;
	
	// Display:-
	
	Temp=Head;
	cout<<"Linked List: ";
	while(Temp!=NULL)
	{
		cout<<Temp->data<<" ";
		Temp = Temp->next;
	}
}
main()
{
	Node* Head = NULL;
	
	insertAtEnd();
}
*/

// 3. Inserting at the specific position:-
//    ----------------------------------

/*
# include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};
Node* Head = NULL;

void insertAtPosition()
{
	// Creating Nodes:-
	
	Node* Head = new Node();
	Node* First = new Node();
	Node* Second = new Node();
	Node* Third = new Node();
	
	// Assigning Data:-
	
	Head->data = 5;
	First->data = 10;
	Second->data = 20;
	Third->data = 30;
	
	// Connecting Nodes:-
	
	Head->next = First;
	First->next = Second;
	Second->next = Third;
	Third->next = NULL;
	
	// Inserting new Node at specific position:-
	
	Node* newNode = new Node();
	newNode->data = 15;
	
	// Linking newNode to other Nodes:-
	
	cout<<"Linked List: ";	
	
	newNode->next = First->next;
	First->next = newNode;
	
	Node* Temp = Head;

	int pos;
	for(int i=1 ; i<pos-1 ; i++)
	{
		Temp = Temp->next;
	}
	
	// Display:- 
	
	while(Temp!=NULL)
	{
		cout<<Temp->data<<" ";
		Temp = Temp->next;
	}
	
}
main()
{
	Node* Head = NULL;
	
	insertAtPosition();
}
*/

// =========================================================================================================

// Deletion:-
// -------

// 1. Deleting from beginning:-

/*
# include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};
Node* Head = NULL;

void deleteFromBeginning()
{
	// Creating Nodes:-
	
	Node* Head = new Node(); 
	Node* First = new Node();
	Node* Second = new Node();
	Node* Third = new Node();
	
	// Assigning Data:-
	
	Head->data = 5; 
	First->data = 10;
	Second->data = 20;
	Third->data = 30;
	
	// Connecting Nodes:-
	
	Head->next = First; 
	First->next = Second;
	Second->next = Third;
	Third->next = NULL;
	
	// Deleting Node:-
	
	Node* Temp=Head;
	Head = Head->next;
	delete Temp;
	
	// Display:-
	
	cout<<"Linked List: ";
	Temp=Head;
	while(Temp!=NULL)
	{
		cout<<Temp->data<<" ";
		Temp = Temp->next;	
	}
}
main()
{
	Node* Head = NULL;
	
	deleteFromBeginning();
}
*/

// 2. Deleting from the end:-
/*
# include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};
Node* Head = NULL;

void deleteFromEnd()
{
	// Creating Nodes:-
	
	Node* Head = new Node();
	Node* First = new Node();
	Node* Second = new Node();
	Node* Third = new Node();
	
	// Assigning Data:-
	
	Head->data = 5;
	First->data = 10;
	Second->data = 20;
	Third->data = 30;
	
	// Connecting Nodes:-
	
	Head->next = First;
	First->next = Second;
	Second->next = Third;
	Third->next = NULL;
	
	cout<<"Linked List: ";
	
	Node* Temp=Head;
	while(Temp->next!=NULL)
	{	              
		cout<<Temp->data<<" ";
		Temp = Temp->next;
	}
	
	// Deleting from the end:-
	
	delete Temp->next;
	Temp->next = NULL;
}
main()
{
	Node* Head = NULL;
	
	deleteFromEnd();
}
*/

// 3. Deleting from a specific position:-

/*
# include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;	
};
Node* Head = NULL;

void deleteFromPosition()
{
	// Creating Nodes:-
	
	Node* Head = new Node();
	Node* First = new Node();
	Node* Second = new Node();
	Node* Third = new Node();
	Node* Fourth = new Node();
	
	// Assigning Data:-
	
	Head->data = 5;
	First->data = 10;
	Second->data = 15;
	Third->data = 20;
	Fourth->data = 30;
	
	// Connecting Nodes:-
	
	Head->next = First;
	First->next = Second;
	Second->next = Third;
	Third->next = Fourth;
	Fourth->next = NULL;
	
	// Deleting from a specific position:-

	cout<<"Linked List: ";
	
	Node* Temp = Head;
    Second = First->next;
    First->next = Second->next;
	delete Second;  // Node 15 is deleted 
	
	int pos;
	for(int i=1 ; i<pos-1 ; i++)
	{
		Temp = Temp->next;	
	}	
	
	Temp = Head;
	while(Temp!=NULL)
	{
		cout<<Temp->data<<" ";
		Temp = Temp->next;
	}	
}
main()
{
	Node* Head = NULL;
	
	deleteFromPosition();
}
*/

// =========================================================================================================	
	  
// Linked List Menu Driven Program:-
// -------------------------------
/*
# include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node* Head = NULL;

// Insert at beginning:-

void insertAtBeginning(int value)
{
	Node* newNode = new Node();
	newNode->data = value;
	newNode->next = Head;
	Head = newNode;
	cout<<"\nInserted at beginning.\n";
}

// Insert at end:-

void insertAtEnd(int value)
{
	Node* newNode = new Node();
	newNode->data = value;
	newNode->next = NULL;
	
	if(Head==NULL)
	{
		Head = newNode;
		cout<<"\nInserted at end.\n";
	}
	
	Node* Temp = Head;
	while(Temp->next!=NULL)
	{
		Temp = Temp->next;
	}
	Temp->next = newNode;
	cout<<"\nInserted at end.\n";
}

// Insert at specific position:-

void insertAtPosition(int value, int pos)
{
	Node* newNode = new Node();
	newNode->data = value;
	
	Node* Temp = Head;
	
	newNode->next = Temp->next;
	Temp->next = newNode;
	
	for(int i=1 ; i<pos-1 ; i++)
	{
		Temp = Temp->next;
	}
}

// Delete from beginning:-

void deleteFromBeginning()
{	
	if(Head == NULL)
	{
		cout<<"\nList is Empty!\n";
	}
	
	Node* Temp = Head;
	Head = Head->next;
	delete Temp;
	cout<<"\nDeleted from beginning.\n";
}	

// Delete from the end:-

void deleteFromEnd()
{
	if(Head == NULL)
	{
		cout<<"\nList is Empty!\n";
	}
	
	if(Head->next == NULL)
	{
		delete Head;
		Head = NULL;
		cout<<"\nDeleted last Node!\n";
	}
	
	Node* Temp = Head;
	while(Temp->next!=NULL)
	{
		cout<<Temp->data<<" ";
		Temp = Temp->next;
	}
	delete Temp->next;
	Temp->next = NULL;
	cout<<"\nDeleted last Node!\n";
}

// Delete from the specific position:-

void deleteFromPosition(int pos)
{
	if(Head == NULL)
	{
		cout<<"\nList is Empty!\n";
	}
	
	if(pos == 1)
	{
		deleteFromBeginning();
	}
	
	Node* Temp = Head;
	
	for(int i=1 ; i<pos-1 ; i++)
	{
		Temp = Temp->next;
	}
	
	Node* delNode = Temp->next;
	Temp->next = delNode;
	delete delNode;
	cout<<"\nDeleted Node from Position.\n";

}

// Display:-

void display()
{
	if(Head==NULL)
	{
		cout<<"List is Empty!\n";
	}
	
	Node* Temp = Head;
	cout<<"\nYour Linked List: ";
	while(Temp->next!=NULL)
	{
		cout<<Temp->data<<" ";
		Temp = Temp->next;
	}
	cout<<"NULL\n";
}

// --- Menu Driven Program ---

main()
{	
	Node* Head = NULL;
	int choice, value, pos;
	
	while(true)
	{
		cout<<"\n-------- Menu --------\n";
		
		cout<<"1. Insertion.\n";
		cout<<"2. Deletion.\n";
		cout<<"3. Display.\n";
		cout<<"4. Exit.\n";
		
		cout<<"\nEnter Your Choice: ";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
					cout<<"\n----- Insertion Menu -----\n";
					
					cout<<"1. Insert at beginning.\n";
					cout<<"2. Insert at the end.\n";
					cout<<"3. Insert at the specific sosition.\n";
					
					cout<<"\nEnter choice: ";
					cin>>choice;
				
					if(choice == 1)
					{
						cout<<"Enter Value: ";
						cin>>value;
						insertAtBeginning(value);
					}
					else if(choice == 2)
					{
						cout<<"Enter Value: ";
						cin>>value;
						insertAtEnd(value);
					}
					else if(choice == 3)
					{
						cout<<"Enter Position: ";
						cin>>pos;
						cout<<"Enter Value: ";
						cin>>value;
						insertAtPosition(value, pos)	;
					}	
					
					else
					{
						cout<<"Invalid Choice!!\n";
					}
					
					break;	
				
				case 2:
					cout<<"\n----- Deletion Menu -----\n";
						
					cout<<"1. Delete from beginning.\n";
					cout<<"2. Delete from the end.\n";
					cout<<"3. Delete from the specific position.\n";
						
					cout<<"\nEnter Choice: ";
					cin>>choice;
						
					if(choice == 1)	
						deleteFromBeginning();
					else if(choice == 2)
						deleteFromEnd();
					else if(choice == 3)
					{
						cout<<"Enter Position: ";
						cin>>pos;
						deleteFromPosition(pos);
					}	
						
					else 
						cout<<"\nInvalid Choice!!\n";
						
					break;	
						
					case 3:
						display();
							
					break;
						
					case 4:
						cout<<"Exiting Program -->\n";
							
					default:
						cout<<"Invalid Choice!!!\n";		
		}	
	}	
}
*/

// =========================================================================================================	

// Insertion Menu Driven Program:-
/*
# include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node* Head = NULL;

void insertAtBeginning(int value)
{
	Node* newNode = new Node();
	newNode->data = value;
	newNode->next = Head;
	Head = newNode;	
	cout<<"\nNode is Inserted At Beginning!\n";	
}

void insertAtEnd(int value)
{
	Node* newNode = new Node();
	newNode->data = value;
	newNode->next = NULL;
	
	if(Head==NULL)
	{
		Head = newNode;
		cout<<"\nNode is Inserted At End!\n";
		return;
	}
	
	Node* Temp = Head;
	while(Temp->next!=NULL)
	{
		Temp = Temp->next;
	}
	Temp->next = newNode;
}

void insertAtPosition(int value, int pos)
{
	Node* newNode = new Node();
	newNode->data = value;
	
	Node* Temp = Head;
	newNode->next = Temp->next;
	Temp->next = newNode;
	
	for(int i=1 ; i<pos-1 ; i++)
	{
		Temp = Temp->next;
	}
	cout<<"\nNode Inserted At Position!";
}

void deleteFromBeginning()
{	
	if(Head==NULL)
	{
		cout<<"\nList is Empty";
	}
	
	if(Head->next == NULL)
	{
		delete Head;
		Head = NULL;
		cout<<"\nDeleted last Node!\n";
	}

	Node* Temp = Head;
	Head = Temp->next;
	delete Temp; 
	cout<<"\nNode is Deleted From beginning!";
	
}
void deleteFromEnd()
{
	if(Head == NULL)
	{
		cout<<"\nList is Empty!";
	}
	
	Node* Temp = Head;
	while(Temp->next!=NULL)
	{	
		cout<<Temp->data;
		Temp = Temp->next;
	}
	
	delete Temp->next;
	Temp->next = NULL;
	cout<<"\nNode is Deleted From End!";
}

void display()
{
	if(Head == NULL)
	{
		cout<<"\nList is Empty!";
	}
	
	Node* Temp = Head;
	cout<<"\nYour Linked List: ";
	while(Temp!=NULL)
	{
		cout<<Temp->data<<" ";
		Temp = Temp->next;
	}
	cout<<"NULL\n";
}

main()
{
	Node* Head = NULL;
	int choice, value, pos;
	
	while(true)
	{	
		cout<<endl;
		cout<<"\n----- Insertion Menu Driven Program -----\n";
		
		cout<<"1. Insertion.\n";
		cout<<"2. Deletion.\n";
		cout<<"3. Display.\n";
		cout<<"4. Exit Program.\n";
		
		cout<<"\nEnter your choice: ";
		cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"\n--- Insertion Choice ---\n";
			
			cout<<"1. Insert At Beginning.\n";
			cout<<"2. Insert At End.\n";
			cout<<"3. Insert At Position.\n";
			
			cout<<"\nEnter your choice: ";
			cin>>choice;
			
			if(choice == 1)
			{
				cout<<"Enter Value: ";
				cin>>value;
				insertAtBeginning(value);
			}
			else if(choice == 2)
			{
				cout<<"Enter Value: ";
				cin>>value;
				insertAtEnd(value);
			}
			else if(choice == 3)
			{
				cout<<"Enter Postion: ";
				cin>>pos;
				
				cout<<"Enter Value: ";
				cin>>value;
				insertAtPosition(value, pos);
			}
			else 
        	{
	        	cout<<"\nInvalid Choice!!\n";
        	}
	
		break;
		
		case 2:
			cout<<"\n--- Deletion Choice ---\n";
			
				cout<<"1. Delete From Beginning.\n";
				cout<<"2. Delete From End.\n";
				
				cout<<"\nEnter Your Choice: ";
				cin>>choice;
			
				if(choice == 1)
				{
					cout<<"Enter Value: ";
					cin>>value;
					deleteFromBeginning();
				}
				else if(choice == 2)
				{
					cout<<"Enter Value: ";
					cin>>value;
					deleteFromEnd();
				}
				else
				{
					cout<<"\nInvalid Choice!";
				}
		break;
				
		case 3:
			display();
		
		break;
		
		case 4:
			cout<<"\nExit Program -->";
			
		default:
			cout<<"Invalid Choice!!!\n";		
	}
	}
}
*/

// =========================================================================================================	

// 2. Circular Linked List:- It is a linked list in which the first and last nodes are connected with each 
//    --------------------  other to form a circle. The address of last node consist of the address of the
//                          first node it means the next part of the node contains head. for ex:-


//   		     	 data|next        data|next         data|next	      data|next 
//     Head   -->    80 | 200   -->   54 | 300   -->    45 | 400   -->    70 | 100  <--  Tail  -->
//   (Address)         100              200			     300				400

//                                    Tail is connected to Head

// Circular Linked list Operations:-
// -------------------------------

// 1. Insertion:- Insert at beginning, insert at end, insert at position.

// 2. Deletion:- Delete from beginning, delete from end, delete from specific position.

// =======================================================================================================

// Creation of Circular Linked list:-
// --------------------------------

/*
# include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};
void getCreate()
{
	// Creating Nodes:-
	
	Node* Head = new Node();
	Node* First = new Node();
	Node* Second = new Node();
	Node* Third = new Node();
	
	// Assigning Data:-
	
	Head->data = 5;
	First->data = 10;
	Second->data = 20;
	Third->data = 30;
	
	// Connecting Nodes:-
	
	Head->next = First;
	First->next = Second;
	Second->next = Third;
	Third->next = Head;

	// Display:-
	
	Node* Temp = Head;
	cout<<"Circular Linked List: ";
	do
	{
		cout<<Temp->data<<" ";
	    Temp = Temp->next;
	}
	while(Temp!=Head);
	
	return;
}
main()
{
	getCreate();
}
*/

// =========================================================================================================

// 1. Insertion:- 
//    ---------

// Insert At Beginning:-

/*
# include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};
void insertAtBeginning()
{
	// Creating Nodes:-
	
	Node* Head = new Node();
	Node* First = new Node();
	Node* Second = new Node();
	Node* Third = new Node();
	
	// Assigning Data:-
	
	Head->data = 5;
	First->data = 10;
	Second->data = 20;
	Third->data = 30;
	
	// Connecting Nodes:-
	
	Head->next = First;
	First->next = Second;
	Second->next = Third;
	Third->next = Head;
	
	// Inserting New Node at beginning:-
	
	Node* newNode = new Node();
	newNode->data = 2;
	
	// Connecting newNode to Head:-
	
	newNode->next = Head;
	
	// Connecting newNode to last (Third) node:-
	
	Third->next = newNode;
	
	// Update Head:-
	
	Head = newNode;
	
	// Display:-
	
	Node* Temp = Head;
	cout<<"Circular Linked List: ";
	do
	{
		cout<<Temp->data<<" ";
		Temp = Temp->next;
	}
	while(Temp!=Head);
	
}
main()
{
	insertAtBeginning();
}
*/

// Insert At End:-

/*
# include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

void insertAtEnd()
{
	// Creating Nodes:-
	
	Node* Head = new Node();
	Node* First = new Node();
	Node* Second = new Node();
	Node* Third = new Node();
	
	// Assigning Data:-
	
	Head->data = 5;
	First->data = 10;
	Second->data = 20;
	Third->data = 30;
	
	// Connecting Nodes:-
	
	Head->next = First;
	First->next = Second;
	Second->next = Third;
	Third->next = Head;
	
	// Inserting New Node at End:-
	
	Node* newNode = new Node();
	newNode->data = 40;
	
	// Connecting newNode to last (Third) node:-
	
	Third->next = newNode;
	
	// Connecting newNode to Head:-
	
	newNode->next = Head;
	
	// Display:-
	
	Node* Temp = Head;
	cout<<"Circular Linked List: ";
	do
	{
		cout<<Temp->data<<" ";
		Temp = Temp->next;
	}
	while(Temp!=Head);
}
main()
{
	insertAtEnd();
}
*/

// Insert at specific position:-

/*
# include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};
void insertAtPosition()
{
	// Creating Nodes:-
	
	Node* Head = new Node();
	Node* First = new Node();
	Node* Second = new Node();
	Node* Third = new Node();
	
	// Assigning Data:-
	
	Head->data = 5;
	First->data = 10;
	Second->data = 20;
	Third->data = 30;
	
	// Connecting Nodes:-
	
	Head->next = First;
	First->next = Second;
	Second->next = Third;
	Third->next = Head;
	
	// Inserting New Node at specific position:-
	
	Node* newNode = new Node();
	newNode->data = 15;
	
	// Connecting newNode to previous (First) node:-
	
	First->next = newNode;
	
	// Connecting newNode to next (Second) node:-
	
	newNode->next = Second;
	
	// Display:-
	
	Node* Temp = Head;
	cout<<" Circular Linked List: ";
	do
	{
		cout<<Temp->data<<" ";
		Temp = Temp->next;
	}
	while(Temp!=Head);	
}
main()
{
	insertAtPosition();
}
*/

// =========================================================================================================

// Deletion:-
// --------

// Delete From Beginning:-

/*
# include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};
void deleteFromBeginning()
{
	// Creating Nodes:-
	
	Node* Head = new Node();
	Node* First = new Node();
	Node* Second = new Node();
	Node* Third = new Node();
	
	// Assigining Data:-
	
	Head->data = 5;
	First->data = 10;
	Second->data = 20;
	Third->data = 30;
	
	// Connecting Nodes:-
	
	Head->next = First;
	First->next = Second;
	Second->next = Third;
	Third->next = Head;
	
	// Deleting From Beginning:-
	 
	Node* deleteNode = Head;
	Head = Head->next;
	delete deleteNode;
	
	// Connecting First node to Second node:-
	
	First->next = Second;
	
	// Connecting last node to First node:-
	
	Third->next = First;
	
	// Display:-
	
	Node* Temp = Head;
	cout<<"Circular Linked List: ";
	do
	{
		cout<<Temp->data<<" ";
		Temp = Temp->next;
	}
	while(Temp!=Head);
}
main()
{
	deleteFromBeginning();
}
*/

// Delete From End:-

/*
# include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};
void deleteFromEnd()
{
	// Creating Nodes:-
	
	Node* Head = new Node();
	Node* First = new Node();
	Node* Second = new Node();
	Node* Third = new Node();
	
	// Assigning Data:-
	
	Head->data = 5;
	First->data = 10;
	Second->data = 20;
	Third->data = 30;
	
	// Connecting Nodes:-
	
	Head->next = First;
	First->next = Second;
	Second->next = Third;
	Third->next = Head;
	
	// Deleting From End:-
	
	Node* deleteNode = Third;
	Third = Third->next;
	delete deleteNode;
	
	// Connecting Last node to First node (Head):-
	
	Second->next = Head;
	
	// Display:-
	
	Node* Temp = Head;
	cout<<" Circular Linked List: ";
	do
	{
		cout<<Temp->data<<" ";
		Temp = Temp->next;
	}
	while(Temp!=Head);	
}
main()
{
	deleteFromEnd();
}
*/

// Deleting From specific position:-

/*
# include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};
void deleteFromPosition()
{
	// Creating Nodes:-
	
	Node* Head = new Node();
	Node* First = new Node();
	Node* Second = new Node();
	Node* Third = new Node();
	Node* Fourth = new Node();
	
	// Assigning Data:-
	
	Head->data = 5;
	First->data = 10;
	Second->data = 20;
	Third->data = 30;
	Fourth->data = 40;
	
	// Connecting Nodes:-
	
	Head->next = First;
	First->next = Second;
	Second->next = Third;
	Third->next = Fourth;
	Fourth->next = Head;
	
	// Deleting From Specific Position:-
	 
	Node* deleteNode = Second;
	Second = Second->next;
	delete deleteNode;
	
	// Connecting previous to next node:-
	
	First->next = Third;
	
	// Display:-
	
	Node* Temp = Head;
	cout<<"Circular Linked List: ";
	do
	{
		cout<<Temp->data<<" ";
		Temp = Temp->next;
	}
	while(Temp!=Head);
}
main()
{
	deleteFromPosition();
}
*/

// =========================================================================================================

// Circular Linked List Menu Driven Program:-
/*
# include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};
Node* Head = nullptr;

void insertAtBeginning(int value)
{
	// Creating newNode and Assigning Value:-
	
	Node* newNode = new Node();
	newNode->data = value;
	
	// If List is Empty:-
	
	if(Head == nullptr)	
	{
		Head = newNode;
		newNode->next = Head;
		cout<<"\nNode Inserted At Beginning!";
		return;
	}
	
	// To Find the Last Node:-
	
	Node* Temp = Head;
	while(Temp->next!=Head)
	{
		Temp = Temp->next;
	}
	
	// Connecting newNode to Head:-
	
	newNode->next = Head;
	
	// Connecting Last node to newNode:-
	
	Temp->next = newNode;
	
	// Update Head:-
	
	Head = newNode;
	
	cout<<"\nNode Inserted At Beginning!";
}

void insertAtEnd(int value)
{	
	// 	Creating newNode and Assigning Value:-
	
	Node* newNode= new Node();
	newNode->data = value;
	
	// If List is Empty:-
	
	if(Head == nullptr)
	{
		Head = newNode;
		newNode->next = Head;
		cout<<"\nNode Inserted At End!";
		return;
	}
	
	// To Find Last Node:-
	
	Node* Temp = Head;
	while(Temp->next!=Head)
	{
		Temp = Temp->next;
	}
	
	// Connecting Last Node to newNode:-
	
	Temp->next = newNode;
	
	// Connecting newNode to Head:-
	
	newNode->next = Head;

	cout<<"\nNode Inserted At End!";
}
void insertAtPosition(int value, int pos)
{
	// Creating Node and Assigning Data:-
	
	Node* newNode = new Node();
	newNode->data = value;
	
	// If List is Empty:-
	
	if(Head == nullptr)
	{
		Head = newNode;
		newNode->next = Head;
		cout<<"Node Inserted At Specific Position!";
		return;
	}
	
	// To Find Last Node:-
	
	Node* Temp = Head;
	while(Temp->next!=Head)
	{
		Temp = Temp->next;
	}
	
	// To insert newNode at position:-
	
	for(int i=1 ; i<pos ; i++)
	{
		Temp = Temp->next;
	}
	
	// Connecting newNode to next node:-
	
	newNode->next = Temp->next;
	
	// Connecting prvious node to newNode:-
	
	Temp->next = newNode;
	
	cout<<"\nNode Inserted At Specific Position!";
}
void deleteFromBeginning()
{
	// If List is Empty print Empty List:-
	
	if(Head == nullptr)
	{
		cout<<"\nList is Empty!";
		return;
	}
	
	// To Find Last Node:-
	
	Node* Temp = Head;
	while(Temp->next!=Head)
	{
		Temp = Temp->next;
	}
	
	// To Deleting Node From Beginning:-
		
	Node* deleteNode = Head;
	
	// Connecting last node to Head's next node:-
	
	Temp->next = Head->next; 
	Head = Head->next;
	delete deleteNode;
	
	cout<<"\nNode Deleted From Beginning!";
	
}
void deleteFromEnd()
{
	// If List is Empty Print Empty List:-
	
	if(Head == nullptr)
	{
		cout<<"\nList is Empty!";
		return;
	}
	
	// To Find Last Node:-
	
	Node* Temp = Head;
	Node* Prev = NULL;
	while(Temp->next!=Head)
	{
		Prev = Temp;
		Temp = Temp->next;
	}
	
	// Deleting node From End:-

	Prev->next = Head;
	delete Temp;

	cout<<"\nNode Deleted From End!";
}
void deleteFromPosition(int pos)
{
	if(pos == 1)
	{
		deleteFromBeginning();
		return;
	}
	
	// If List is Empty Print Empty List:-
	
	if(Head == nullptr)
	{
		cout<<"\nList is Empty!";
		return;
	}
	
	// To Find Last Node:-
	
	Node* Temp = Head;
	Node* Prev = NULL;
	
	// To Delete from position:-
	
	for(int i=1 ; i<pos ; i++)
	{
		Prev = Temp;
		Temp = Temp->next;
	}
	
	// Deleting node:-
	
	Prev->next = Temp->next;
	delete Temp;
	
	cout<<"\nNode Deleted From Specific Position!";
}
void display()
{
	// If List is Empty:-
	
	if(Head == nullptr)
	{
		cout<<"\nLinked is Empty!";
		return;
	}
	
	// Display the Program:-
	
	Node* Temp = Head;
	cout<<"\nYour Circular Linked List: ";
	do
	{
		cout<<Temp->data<<" ";
		Temp = Temp->next;
	}
	while(Temp!=Head);
}
main()
{
	int choice, value, pos;
	
	while(true)
	{
		cout<<endl;
		cout<<"\n-------- Circular Linked List Menu Driven Progam --------\n";
		
		cout<<"1. Insertion.\n";
		cout<<"2. Deletion.\n";
		cout<<"3. Display.\n";
		cout<<"4. Exit Program.\n";
		
		cout<<"\nEnter Your Choice: ";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				cout<<"\n----- Insertion Choices -----\n";
				
				cout<<"1. Insert At Beginning.\n";
				cout<<"2. Insert At End.\n";
				cout<<"3. Insert At Specific Position.\n";
				
				cout<<"\nEnter Choice: ";
				cin>>choice;
				
				if(choice == 1)
				{
					cout<<"Enter Value: ";
					cin>>value;
					insertAtBeginning(value);	
				}
				else if(choice == 2)
				{
					cout<<"Enter Value: ";
					cin>>value;
					insertAtEnd(value);
				}
				else if(choice == 3)
				{
					cout<<"Enter Position: ";
					cin>>pos;
					cout<<"Enter Value: ";
					cin>>value;
					insertAtPosition(value, pos);
				}
				else
				{
					cout<<"\nInvalid Choice!";
				}
			
				break;	
				
			case 2:
				cout<<"\n----- Deletion Choices -----\n";
				
				cout<<"1. Delete From Beginning.\n";
				cout<<"2. Delete From End.\n";
				cout<<"3. Delete From Specific Position.\n";
					
				cout<<"\nEnter Your Choice: ";
				cin>>choice;
				
				if(choice == 1)
				{
					deleteFromBeginning();
				}
				else if(choice == 2)
				{
					deleteFromEnd();
				}
				else if(choice == 3)
				{
					cout<<"Enter Position: ";
					cin>>pos;
					deleteFromPosition(pos);
				}
				break;
					
			case 3:
				display();
			
				break;
			
			case 4:
				cout<<"Exit Program -->";
				
				break;
				
			default:
                cout << "\nInvalid choice!";
		}
	}
}
*/

// ========================================================================================================

// Doubly Linked List:- A doubly linked list is a data structure where each node contains data and two 
// ------------------   pointers: one pointing to the next node and one pointing to the previous node.
//						Doubly linked list allows two way traversal in both forward and backward.


//   		     	Prev|data|next      Prev|data|next        Prev|data|next	   Prev|data|next 
//   Head   -->   Null | 80 | 200 -->  100 | 54 | 300  -->   200 | 45 | 400  -->  300 | 70 | Null  <-- Tail
//  (Address)           100              	200			     	  300				   400


// Prev(Previous):- Address of the previous node.
// Data:- Actual data.
// Next:- Address of the next node.

// 1. Insertion:- Insert at beginning, insert at end, insert at position.

// 2. Deletion:- Delete from beginning, delete from end, delete from specific position.

// ========================================================================================================

// Creation of Doubly Linked List:-
// -----------------------------

/*
# include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
	Node* prev;
};
void getCreate()
{
	// Creating Nodes:-
	
	Node* Head = new Node();
	Node* First = new Node();
	Node* Second = new Node();
	Node* Third = new Node();
	
	// Assigning Data:-
	
	Head->data = 5;
	First->data = 10;
	Second->data = 20;
	Third->data = 30;
	
	// Connecting Nodes:-
	
	Head->next = First;
	First->next = Second;
	Second->next = Third;
	Third->next = NULL;
	
	// Display:-
	
	Node* Temp = Head;
	cout<<"Doubly Linked List: ";
	while(Temp!=NULL)
	{ 
		cout<<Temp->data<<" ";
		Temp = Temp->next;
	}
}
main()
{
	getCreate();
}
*/

// ========================================================================================================

// 1. Insertion:-

// Insert At Beginning:-

# include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
	Node* prev;
};
void insertAtBeginning()
{
	// Creating Nodes:-
	
	Node* Head = new Node();
	Node* First = new Node();
	Node* Second = new Node();
	Node* Third = new Node();
	
	// Assigning Data:-
	
	Head->data = 10;
	First->data = 20;
	Second->data = 30;
	Third->data = 40;
	
	// Connecting Nodes:-
	
	Head->next = First;
	First->next = Second;
	Second->next = Third;
	Third->next = NULL;
	
	// Connecting Previous Nodes:-
	
	First->prev = Head;
	Second->prev = First;
	Third->prev = Second;
	
	Node* Temp = Head;
	cout<<"Doubly Linked List: ";
	while(Temp!=NULL)
	{
		cout<<Temp->data<<" ";
		Temp = Temp->next;
	}
}
main()
{
	insertAtBeginning();
}





