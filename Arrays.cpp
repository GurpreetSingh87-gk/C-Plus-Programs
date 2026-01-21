// Topic:- Arrays
// ------


// Array:- Array is a collection of similar types of data. It can be integer, float or char. It is a single 
// ------  variable which has dimensions which indicates the size of an array. Every array element are stored
//    	   in conzicutive memory location. Array elements can be identify by their position within array which
//         start from 0 and goes up to n-1.

// Syntax:-

// Data type variable_name[dimension];

// for ex:-  int A [10];
//			 float B [5]
// 			 char Student[20];


// Types of Arrays:-
// ---------------

// 1. Single-Dimensional Array
// 2. Multi-Dimensional Array


// ===========================================================================================================
/*

// For Example:-

# include <iostream>
using namespace std;

main()
{
	int x[]={10,20,30,40,50};
	int y=60;
	
	cout<<x[0]<<" "<<x[1]<<" "<<x[2]<<" "<<x[3]<<" "<<x[4];
}
*/

// ===========================================================================================================

// 1. Single-Dimensional Array:-
//    ------------------------


// Syntax of Single-Dimensional:-

// data_type variable_name [dimension] = {element1, element2....};

/*
# include <iostream>
using namespace std;

main()
{
	int Student[5] = {10, 20, 30, 40, 50};
	
	cout<<"Index: "<<Student[3];
}
*/

// 2. Multi-Dimensional Array:-
//    -----------------------


// Syntax of Multi-Dimensional:-

// data_type variable_name [rows][columns] = {element1, element2.....};

/*
# include <iostream>
using namespace std;

main()
{
	int Student[3][5] = {
	{10, 20, 30, 40, 50},
	{60, 70, 80, 90, 100},
	{101, 102, 103, 104, 105}};
	
	cout<<"Index: "<<Student[2][3];
}
*/

// ===========================================================================================================

// Various Operations on Arrays:-
// ----------------------------

// 1. Traversing
// 2. Inserting
// 3. Deleting
// 4. Searching


// 1. Traversing:-
//    ----------

/*
# include <iostream>
using namespace std;

main()
{
	int Marks [10] = {55, 45, 32, 85, 90, 20, 14, 67, 76, 51};
	
	cout<<"Traversing Marks: ";
	for(int i=0 ; i<10 ; i++)
	{
		cout<<Marks[i]<<" | ";
	}	
}
*/

// 2. Inserting:- 
//    ---------

/*
# include <iostream>
using namespace std;

main()
{ 
	int Array [10];
	int i, n, pos, value;
	
	cout<<"Enter Number of Elements: ";
	cin>>n;
	
	for(int i=0 ; i<n ; i++)
	{
		cout<<"\nEnter Your Elements "<<i+1<<": ";
		cin>>Array[i];
	}
	
	cout<<"\nEnter Position to Insert: ";
	cin>>pos;
	
	cout<<"Enter Value: ";
	cin>>value;
	
	// Shift elements to right:-
	
	for(int i=n ; i>pos ; i--)
	{
		Array[i] = Array[i-1];
	}

	// Insert Value:-
	
	Array[pos] = value;
	n++;
	
	cout<<"\nArray After Insertion: ";
	for(int i=0 ; i<n ; i++)
	{
		cout<<Array[i]<<" ";
	}
}
*/

// 3. Deleting:-
//    --------

/*
# include <iostream>
using namespace std;

main()
{
	int Array[10];
	int n, pos;
	
	cout<<"Enter Number of Elements: ";
	cin>>n;
	
	cout<<"\nEnter Your Elements: ";
	for(int i=0 ; i<n ; i++)
	{
		cin>>Array[i];
	}
	
	cout<<"\nEnter Position to Delete: ";
	cin>>pos;
	
	// Shift elements to left:-
	
	for(int i=pos ; i<n-1 ; i++)
	{
		Array[i] = Array[i+1];
	}
	n--; // reduce size of array
	
	cout<<"\nArray After Deletion: ";
	for(int i=0 ; i<n ; i++)
	{
		cout<<Array[i]<<" ";
	}
}
*/

// 4. Searching:-
//   ----------

/*
# include <iostream>
using namespace std;

main()
{
	int Array[10];
	int n, Found = 0, key;
	
	cout<<"Enter Number of Elements: ";
	cin>>n;
	
	cout<<"\nEnter Your Elements: ";
	for(int i=0 ; i<n ; i++)
	{
		cin>>Array[i];
	}

	cout<<"\nEnter Element to Search: ";
	cin>>key;
	
	for(int i=0 ; i<n ; i++)
	{
		if(Array[i] == key)
		{
			cout<<"\nElement Found at Position: "<<i;
			Found = 1;
			break;
		}
	}
	
	if(Found == 0)
	{
		cout<<"\nElement Not Found!!";
	}
}
*/

// ===========================================================================================================
/*

// Questions:-
// ---------


// Q:-1. Display array elements using for loop.

# include <iostream>
using namespace std;

main()
{
	int x[]={1,2,3,4,5};
	for (int i=0 ; i<5 ; i++)
	{
		cout<<x[i]<<" ";
	}
}
*/

// ===========================================================================================================

// Q:-2. Input array elements and display them.
/*
# include <iostream>

using namespace std;

main()
{
	int x[10];
	
	cout<<"Input 5 Elements: ";
	
	for(int i=10 ; i>1 ; i++)
	{
		cin>>x[i];
	}
	cout<<"\nArray Elements are:-\n";
	
	for(int i=1 ; i<10 ; i++)
	{
		cout<<x[i]<<" ";
	}
}
*/