// Topic:- Queue 
// -----

// Queue Data Structure:- It is an abstract datatype or linear data structure in which the first element is
// --------------------   inserted from one end called 'Rear' (also called Tail) and the removal of existing 
//                        element take place from the other end called 'Front' (also called Head). This makes
//                        Queue as FIFO (First-In-First-Out) data structure. Queue can be implemented either
//                        using array or linked list.

// Enqueue:- The process to Add an element into the Queue is called Enqueue.
// -------

// Dequeue:- The process of removal of an element from Queue is called Dequeue.
// -------

// Basic Features of Queue:-
// -----------------------

// 1. It is ordered list of elements.

// 2. Insertion into the queue will be take place at 'Rear end'.

// 3. Deletion from the queue will be take place from the 'Front end'.

// 4. peek() is the condition which return the value of first element without dequeuing it.

//						Queue				
//   Front -->     |   |   |   |   |
//   Rear  -->       

//  Rear(Tail) - It is used to insert element into queue.
//  Front(Head) - It is used to remove element from queue.

// =========================================================================================================

// Queue Using Array:-
// -----------------

/*
# include <iostream>
using namespace std;

# define size 5

int Queue[size];
int Front = -1;
int Rear = -1;

void Enqueue(int value)
{
	// If Queue is Empty:-
	
	if(Rear == size -1)
	{
		cout<<"Queue is Overflow!";
	}
	else
	{
		if(Front == -1)
		{
			Front = 0;
		}
		
		cout<<endl;
		
		Rear++;
		Queue[Rear] = value;
		cout<<value<<" Insert into Queue";
	}
	cout<<endl;
}
void Dequeue()
{
	// if Queue is Empty:-
	
	if(Front == -1)
	{
		cout<<"\nQueue is Underflow!";
	}
	else
	{
		cout<<endl;
		
		cout<<Queue[Front]<<" Deleted from Queue"<<endl;
		Front++;
	}
}
void Display()
{
	// If Queue is Empty:-
	
	if(Front == -1)
	{
		cout<<"\nQueue is Empty!";
	}
	else
	{
		cout<<"\nYour Queue Elements: ";
		for(int i=Front ; i<=Rear ; i++)
		{
			cout<<Queue[i]<<" | ";
		}
		cout<<endl;
	}
}
main()
{
	int n, value;
	
	cout<<"Enter How Many Elements You Want To Enqueue: ";
	cin>>n;
	for(int i=0 ; i<n ; i++)
	{
		cout<<"\nEnter Value "<<i+1<<": ";
		cin>>value;
		Enqueue(value);
	}
	
	cout<<"\nEnter How Many Elements You Want To Dequeue: ";
	cin>>n;
	for(int i=0 ; i<n ; i++)
	{
		Dequeue();
	}
	
	Display();
}
*/

// =========================================================================================================

// Queue Using Linked List:-
// -----------------------

/*
# include <iostream>
using namespace std;

struct Node
{
	int Data;
	Node* Next;
};

Node* Front = NULL;
Node* Rear = NULL;

void Enqueue(int value)
{
	// Creating newNode:-
	
	Node* newNode = new Node();
	
	// If Queue is Full:-
	
	if(newNode == NULL)
	{
		cout<<"\nQueue is Overflow!";
	}
	else
	{
		newNode->Data = value;
		newNode->Next = NULL;
		
		// If Queue is Empty create newNode:-
		
		if(Front == NULL)
		{
			Front = Rear = newNode;
		}
		else
		{
			Rear->Next = newNode;
			Rear = newNode;
		}
		cout<<endl;
		cout<<value<<" Inserted into Queue";
	}
	cout<<endl;
}
void Dequeue()
{
	// If Queue is Empty:-
	
	if(Front == NULL)
	{
		cout<<"\nQueue is Underflow!";
	}
	else
	{
		cout<<endl;
		
		Node* Temp = Front;
		cout<<Temp->Data<<" Deleted from Queue";
		Front = Front->Next;
		delete Temp;
	}
	cout<<endl;
}
void Display()
{
	// If Queue id Empty:-
	
	if(Front == NULL)
	{
		cout<<"\nQueue id Empty!";
	}
	else
	{
		cout<<"\nYour Queue Elements: ";
		Node* Temp = Front;
		while(Temp != NULL)
		{
			cout<<Temp->Data<<" | ";
			Temp = Temp->Next;
		}
		cout<<"NULL\n";
		cout<<endl;
	}
}
main()
{
	int n, value;
	
	cout<<"Enter How Many Elements You Want To Enqueue: ";
	cin>>n;
	for(int i=0 ; i<n ; i++)
	{
		cout<<"\nEnter Value: "<<i+1<<": ";
		cin>>value;
		Enqueue(value);
	}
	
	cout<<"\nEnter How Many Elements You Want To Dequeue: ";
	cin>>n;
	for(int i=0 ; i<n ; i++)
	{
		Dequeue();
	}
	
	Display();
}
*/

// =========================================================================================================

// Queue Using Linked list:-

// Creation of Queue:-
// -----------------

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
	// Creating an Empty Queue:-
	
	Node* Front = NULL;
	Node* Rear = NULL;
	
	// Creating 1st Element:-
	
	Node* First = new Node();
	First->data = 10;    
	First->next = NULL;
	Front = Rear = First; // Both are same because queue is empty
	
	// Creating 2nd Element:-
	
	Node* Second = new Node();
	Second->data = 20;
	Second->next = NULL;
	Rear->next = Second;  // connecting rear to next node (second) 
	Rear = Second;        // updating rear
	 
	// Creating 3rd Element:-
	
	Node* Third = new Node();
	Third->data = 30;
	Third->next = NULL;
	Rear->next = Third;
	Rear = Third;
	
	// Creating 4th Element:-
	
	Node* Fourth = new Node();
	Fourth->data = 40;
	Fourth->next = NULL;
	Rear->next = Fourth;
	Rear = Fourth;
	
	// Display:-
	
	Node* Temp = Front;
	cout<<"Queue: ";
	while(Temp!=NULL)
	{
		cout<<Temp->data<<" ";
		Temp = Temp->next;
	}
	
	// Deleting Element from first:-
	
	Node* deleteNode = Front;
	Front = Front->next;
	delete deleteNode;
	
	// Display after delete:-
	
	Temp = Front;
	cout<<"\nAfter Dequeuing: ";
	while(Temp!=NULL)
	{
		cout<<Temp->data<<" ";
		Temp = Temp->next;
	}
}
*/

// =========================================================================================================

// Queue Menu Driven Program:-

/*
# include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};
Node* Front = NULL;
Node* Rear = NULL;

void Enqueue(int value)
{
	// Creating Node:-
	
	Node* newNode = new Node();
	newNode->data = value;
	newNode->next = NULL;

	
	if(Front == NULL)
	{	
		Front = Rear = newNode;
	}
	else
	{
		Rear->next = newNode;
		Rear = newNode;
	}
	
	cout<<"\nNode Inserted Successfully!";
	
}
void Dequeue()
{
	Node* delNode = Front;
	Front = Front->next;
	delete delNode;
	
	cout<<"\nNode Deleted Successfully!";
}
void display()
{
	// If List is Empty:-
	
	if(Front == NULL)
	{
		cout<<"\nList is Empty!";
		return;
	}
	
	// Display Program:-
	
	Node* Temp = Front;
	cout<<"\nYour Queue is: ";
	while(Temp!=NULL)
	{
		cout<<Temp->data<<" ";
		Temp = Temp->next;
	}
}
main()
{
	int value, choice;
	
	while(true)
	{
		cout<<endl;
		cout<<"\n-------- Queue Menu Driven Program --------\n";
		
		cout<<"1. Enqueue (Insert)\n";
		cout<<"2. Dequeue (Delete)\n";
		cout<<"3. Display\n";
		
		cout<<"\nEnter Your Choice: ";
		cin>>choice;
		
		switch(choice)
		{		
			case 1:
				
				if(choice == 1)
				{
					cout<<"Enter Value: ";
					cin>>value;
					Enqueue(value);
				}
				else 
				{
					cout<<"\nInvalid Choice!";
				}
			
			break;
			
			case 2:
				
				if(choice == 2)
				{
					Dequeue();
				}
				
			break;
			
			case 3:
				display();
			
			break;
			
			default:
				cout<<"\nInvalid Choice!!";		
		}
	}
}
*/

