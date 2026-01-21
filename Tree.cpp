// Topic :- Tree Data Structure
// -----

// Tree :- Tree data structure is a Non-Linear, hierarchical data structure where nodes are connected to edges.
// -----   It is used to represent data with parent-child relationship, similar to a real-world tree, but 
//         typically depicted upside down with the Root at the top.


// Things to Remember:-
// ------------------

// Node:- Elements of the tree containing data and pointers or reference to other nodes.
// ----

// Root:- The topmost node of the tree, which has no parent.
// ----

// Parent Node:- A node that has one or two child nodes.
// ----------

// Child Node:- A node that is directly connected to a parent node below it.
// ---------

// Leaf Node:- A node that has no children.
// ---------

// Subtree:- nodes that are descendants (branches) of whole tree.
// -------

// Heigth of a Node:- Distance from Root Node to Leaf Node (Longest Route).
// ----------------

// Width of a Node:- Distance To travel from Topmost Root node to next Root node.
// ---------------

// Maximum Children Node can be 2 only.

// Minimum Children Node can be 0 or 1 only.


// Types of Tree Data Structure:-
// ----------------------------

// 1. General Tree:- In this, a node can have either 0 or maximum n number of nodes.
//    ------------

// 2. Binary Tree:- In binary tree, each node can have utmost (heigest) 2 child nodes that is the node has 
//    -----------   0, 1 or 2 nodes.

// 3. Binary Search Tree:- It is a Non-linear Data Structure in which one node is connected to n number of
//    ------------------   nodes. A node is represented in 3 fields:- 1. Data part 2. Left Child and 
//                         3. Right Child. 

//  So two node contains two pointer: Left & Right Child pointer. Every Node in Left subtree must contain a 
//  value 'Less than' the value of Root Node and the value of the each node in Right subtree must be
//  'Greater than' the value of the Root node.


// Tree Traversal:- It means, traversing (visiting) each node of the tree. There are 3 ways to traverse a tree
// --------------   as follows:-

// 1. Inorder Traversal:- It means visit Left node then visit Root node and then Right node.
//    ----------------   Rule:- [ Left. Root. Right ]

// 2. Postorder Traversal:- It means visit Left node then Right node and then Root node.
//    --------------------   Rule:- [ Left. Right. Root ]
  
// 3. Preorder Traversal:- It means visit Root node then Left node and then Right node.
//    ------------------   Rule:- [ Root. Left. Right ]

// ==========================================================================================================

// Creation of Tree:-

/*
# include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* Left;
	Node* Right;	
};
Node* CreateNode(int value)
{
	Node* Temp = new Node();
	Temp->data= value;
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
	cout<<Root->data<<" ";   // Root
	Inorder(Root->Right);    // right
		
}
void Postorder(Node* Root)
{
	// If Tree is Empty:-
	
	if(Root == NULL)
	{
		return;	
	}
	
	Postorder(Root->Left);   // Left
	Postorder(Root->Right);  // Right
	cout<<Root->data<<" ";   // Root
	
}
void Preorder(Node* Root)
{
	if(Root == NULL)
	{
		return;
	}
	
	cout<<Root->data<<" ";  // Root
	Preorder(Root->Left);   // Left
	Preorder(Root->Right);  // Right
}
main()
{
	// Creating Root Node:-
	
	Node* Root = CreateNode(100);
	
	// Creating Child Nodes:-
	
	// Left Side:- 
	
	Root->Left  = CreateNode(99);
	Root->Left->Left = CreateNode(85);
	Root->Left->Right = CreateNode(105);
	
	// Right Side:-
	
	Root->Right = CreateNode(110);
	Root->Right->Right = CreateNode(125);
	Root->Right->Left = CreateNode(108);

	// Display:-
	
	cout<<"InOrder Tree: ";	  // 85, 99, 105, 100, 108, 110, 125
	Inorder(Root); 
	
	cout<<"\nPostOrder Tree: ";	 // 85, 105, 99, 108, 125, 110, 100
	Postorder(Root);
	
	cout<<"\nPreOrder Tree: ";  // 100, 99, 85, 105, 110, 108, 125
	Preorder(Root);
}
*/

// Tree Menu Driven Program:-

/*
# include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* Left;
	Node* Right;			
};
Node* Root = NULL;

Node* CreateNode(int value)
{
	Node* Temp = new Node();
	Temp->data = value;
	Temp->Left = NULL;
	Temp->Right = NULL;
	return Temp;
}
void InOrder(Node* Root)
{
	if(Root == NULL)
	{
		return;
	}
	
	InOrder(Root->Left);
	cout<<Root->data<<" ";
	InOrder(Root->Right);	
}
Node* insertNode(Node* Root, int value)
{
	if(Root == NULL)
		return CreateNode(value);
	
	if(value < Root->data)
		Root->Left = insertNode(Root->Left, value);
	else
		Root->Right = insertNode(Root->Right, value);
	
	return Root;
}
main()
{	
	int i, n, x, value;
	
	cout<<"Enter Number of Nodes You want to Add: ";
	cin>>n;
	
	if(Root == )
	for(int i=0 ; i<n ; i++)
	{
		cout<<"\nEnter Node Data: ";
		cin>>x;
		Root = insertNode(Root, x);
	}
	cout<<"\nInOrder Traversal: ";
	InOrder(Root);
}
*/
	