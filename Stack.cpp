// Topic:- Stack
// -----

// Stack:- Stack follows the Last-In-First-Out(LIFO) principle, means last element added to the stack and 
// -----   first one is to be removed.

// Stack Operations:-
// ----------------

// 1. push() - Insert element

// 2. pop() - Remove top element

// 3. peek() / top() - View top element

// 4. isEmpty() - It checks if the stack is empty and (return true or false)

// 5. isFull() - It checks if the stack has reached its maximum capacity (only applicable
//				 to fixed-size implementation like array).

// =======================================================================================

// Stack using Array:-
// ----------------

// Syntax:- 
// -------

// int Stack[size];
// int top = -1;      // it indicates that stack is empty.

/*
# include <iostream>
using namespace std;

# define size 5

int Stack[size];
int Top = -1;

void push(int value)
{
	if(Top == size -1)
	{
		cout<<"Stack is Overflow!";
	}
	else
	{
		++Top;
		Stack[Top] = value;
		cout<<endl;
		cout<<value<<" Pushed into Stcak"<<endl;
	}
}
void pop()
{
	if(Top == -1)
	{
		cout<<"Stack Underflow!";
	}
	else
	{
		cout<<endl;
		cout<<Stack[Top]<<" Popped from Stack!"<<endl;
		Top--;
	}
}
void peek()
{
	if(Top == -1)
	{
		cout<<"Stack is Empty! Nothing to peek"<<endl;
	}
	else
	{
		cout<<"\nTop Element is: "<<Stack[Top]<<endl;
	}	
}
void Display()
{
	if(Top == -1)
	{
		cout<<"\nStack is Empty!"<<endl;
	}
	else
	{
		cout<<"\nYour Stack Elements: ";
		for(int i=Top; i>=0 ; i--)
		{
			cout<<Stack[i]<<" | ";
		}
		cout<<endl;
	}
}
main()
{
	int n, value;
	
	cout<<"How Many Elements Do You Want To Push: ";
	cin>>n;
	
	for(int i=0 ; i<n ; i++)
	{
		cout<<"\nEnter Value "<<i+1<<": ";
		cin>>value;
		push(value);
	}
	
	cout<<"\nHow Many Elements You Want To Pop?: ";
	cin>>n;
	pop();
	
	cout<<endl;
	
	cout<<"\nDo You Want To Peek?(Yes/No): ";
	cin>>n;
	peek();
	
	
	Display();
}
*/

// =======================================================================================

// Stack Using Linked List:-
// -----------------------

/*
# include <iostream>
using namespace std;

struct Node
{
	int Data;
	Node* Next;
};

Node* Top = NULL;

void push(int value)
{
	// Creating newNode:-
	
	Node* newNode = new Node();
	
	// If Stack is Full:-
	
	if(newNode == NULL)
	{
		cout<<"\nStack is Overflow!";
	}
	else
	{
		newNode->Data = value;
		newNode->Next = Top;
		Top = newNode;
		
		cout<<endl;
		cout<<value<<" Pushed into Stack"<<endl;
	}
}
void pop()
{
	// If Stack is Empty:-
	
	if(Top == NULL)
	{
		cout<<"\nStack is Underflow!";
	}
	else
	{
		cout<<endl;
		
		Node* Temp = Top; 
		cout<<Temp->Data<<" Popped from Stack"<<endl;
		Top = Top->Next;
		delete Temp;
		
	}
}
void peek()
{
	// If Stack is Empty:-
	
	if(Top == NULL)
	{
		cout<<"Stack is Empty! Nothing to Peek";
	}
	else
	{
		cout<<"\nTop Element is: "<<Top->Data<<endl;
	}
}
void Display()
{
	// If Stack is Empty:-
	
	if(Top == NULL)
	{
		cout<<"\nStack is Empty!";
	}
	else
	{
		cout<<"\nYour Stack Element: ";
		Node* Temp = Top;
		while(Temp != NULL)
		{
			cout<<Temp->Data<<" | ";
			Temp = Temp->Next;
		}
		cout<<endl;
	}
}
main()
{
	int n, value;
	
	cout<<"Enter How Many Elements You Want To Push: ";
	cin>>n;
	
	for(int i=0 ; i<n ; i++)
	{
		cout<<"\nEnter Value "<<i+1<<": ";
		cin>>value;
		push(value);
	}
	
	cout<<"\nEnter How Many Elements You Want To Pop: ";
	cin>>n;
	for(int i=0 ; i<n ; i++)
	{
		pop();
	}
	
	cout<<"\nDo You Want To Peek?(Yes/No): ";
	cin>>n;
	peek();
	
	Display();
}
*/