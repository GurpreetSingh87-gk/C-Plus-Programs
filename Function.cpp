// Topic:- Function
// -----

// What is Function:- A function is a block of code that performs a specific task and is 
// ----------------   executed when it is called.

// Syntax:- 

// function_name(parameter)
// {
// 		Body of the function;
// }

// ========================================================================================

// Parts of a Function:-
// -------------------

// 1. Function Declaration
// 2. Function Definition
// 3. Function Call


// 1. Function Declaration:- It tells the compiler about the function name, return type and
//    --------------------   parameters.

/*
# include <iostream>
using namespace std;

Addition(int A, int B) // Function Declaration
{
	return A + B;	   // Function Definition
}
main()
{
	
	cout<<"Addition: "<<Addition(5,10); // Function call
}
*/

// 2. Function Definition:- It means the whole function the contains the actual code of the 
//    -------------------   function.

/*
Addition(int A, int B) // Function Declaration
{
	return A + B;	   // Function Definition
}
*/

// 3. Function Definition:- It means to execute the function by calling.
//    -------------------

/*
main()
{
	
	cout<<"Addition: "<<Addition(5,10); // Function call
}
*/

// =======================================================================================

// Types of Functions:-
// ------------------

// 1. Pre-defined function:- Function that are built-in functions in c++ language.
//    --------------------   cout, cin, strcpy().

// 2. User defined function:- Functions that are defiend by user.
//    ---------------------

// Types of User Defined Functions:-
// -------------------------------

// 1. No argument, No return value:-

/*
# include <iostream>
using namespace std;

void display() // no argument
{
	cout<<"Welcome";
}
*/

// 2. Arguments, No return value:-

/*
void display(int x) // argument
{
	cout<<x;
}
*/

// 3. No arguments, return value:-

/*
void display()
{
	return 10; // return value
}
*/

// 4. Arguments and return value:-

/*
void display(int A, int B) // argument
{
	return A * B;  // return value
}
*/

// 5. Call by value:- In this a copy of actual value is passed but changes do no effect
//    --------------  original value.

# include <iostream>
using namespace std;
/*
void change(int x)
{
	x = 50;  // copy of original value
}
main()
{
	int a = 10;
	change(a);
	cout<<a;
}
*/

// 6. Call by reference:- In this, reference of variable is passed but change affect 
//    -----------------   original value.

/*
void change(int &x)
{
	x = 50;  
}
main()
{
	int a = 10;
	change(a);
	cout<<a;	
}
*/

// 7. Default Argument:- In this, no value is passed to call function it take default value
//   -----------------

/*
void show(int x=5)
{
	cout<<x;  
}
main()
{
	show();	
}
*/

// Function Overloading:- Multiple functions with same name but different parameters.

/*
int Addition(int A, int B)
{
	return A+B;
}
float Addition(float A, float B)
{
	return A+B;
}
*/

// 9. Recursive Function:- When a function calls itself.

/*
int factorial(int n)
{
	if(n == 0)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}
*/
