// Topic:- Pointers
// -----

// What is Pointers:- A pointer is a variable that stores the memeory address of another variable. Address is 
// ----------------   a location number which will be created when we declare any variable.

// Syntax:-

// Data type *(star)variable_name;

// For Ex:-

// int *p; 

// Note:- P is the pointer in which we can store address of integer variable. 

// Note:- & means location number or Address.

// int x = 10
// int *ptr;
// ptr = &x;

// =========================================================================================================

// Pointers:-
// --------

/*
# include <iostream>
using namespace std;

main()
{
	int a, *ptr;
	
	a = 10;
	ptr = &a;
	
	cout<<"Value of a: "<<a<<endl; // 10
	
	cout<<"Value at ptr: "<<ptr<<endl; // 100

	cout<<"Address of &a: "<<&a<<endl; // 100
	
	cout<<"Address of &ptr: "<<&ptr; // For Instance:- 300
}
*/

// =========================================================================================================

// Pointer to Pointer:- A pointer that stores the address of another pointer.
// -----------------

/*
# include <iostream>
using namespace std;

main()
{
	int a, *ptr, **ptr2;
	
	a = 10;
	
	ptr = &a;
	ptr2 = &ptr;
	
	cout<<"Address of &ptr: "<<&ptr<<endl; // 100
	cout<<"Address of ptr2: "<<ptr2<<endl; // 100
	cout<<"Address of &pt2: "<<&ptr2; // 1000
}
*/

// =========================================================================================================

// Dereference Operator *:- It is symbolize by (*). Derefernce means value that stored over address. So it
// ----------------------   it gives the value which is stored over address. 

/*
# include <iostream> 
using namespace std;

main()
{
	int a, *ptr, **ptr2;
	
	a = 10;
	ptr = &a; 
	
	cout<<"Value of a stored at address of ptr: "<<*(&a)<<endl;	// & Address of a
	cout<<"Value stored at the Address of ptr: "<<*(ptr)<<endl; // Value Stored in ptr
	
	// Derefernce Pointer to Pointer:-
	
	ptr2 = &ptr;
	
	cout<<"Dereferncing ptr2: "<<*(ptr2)<<endl;
	
	// Double Derefernce pointer to pointer:-
	
	cout<<"Double Derefernce ptr2: "<<**(ptr2);
} 

*/
// Note:- &a means Address of a. 
//        * (ptr) means value that stored over address of ptr.

// =========================================================================================================

// Pointer with User Define Function:- It is call by reference number or function if we call any function by
// ---------------------------------   passing address of variable then it is called by reference.

// For Example:-

/*
# include <iostream>
using namespace std;

void Fun1(int *ptr)
{
	*ptr = *ptr + 1;
}
main()
{
	int x;
	
	x = 10;
	Fun1(&x);
	
	cout<<"Value of x: "<<x;
}
*/

// =========================================================================================================

// Q:-1. Define a function which will swap 2 variable using function call by reference method.

/*
# include <iostream>
using namespace std;

Swap(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
main()
{
	int x, y;
	
	x = 10;
	y = 20;
	
	Swap(&x, &y);
	cout<<"After Swapping x: "<<x<<"\ty: "<<y;
}
*/

// =========================================================================================================

// Q:-2. Write a program to addition of two numbers using pointers.

/*
# include <iostream>
using namespace std;

main()
{
	int First_Number, Second_Number, z, *pointer1, *pointer2;
	
	First_Number = 10;
	Second_Number = 20;
	
	pointer1 = &First_Number;
	pointer2 = &Second_Number;
	
	z = *pointer1 + *pointer2;
	
	cout<<"Addition of Two Numbers: "<<z;	
}                                
*/

// =========================================================================================================

// Array with Pointers:- Arrays are defined as collection of similar datatypes. Array is the simplest data
// -------------------  structure where each element can be randomly accessed by using its index number.

// Syntax:- 

// int variable_name[10];
// char variable_name[10];
// float variable-name[5.4]

// =========================================================================================================

// Q:-1. Display 3 elements using pointers (without define function).

/*
# include <iostream>
using namespace std;

main()
{
	int arr[]={10, 20, 30};
	
	cout<<"Address of arr[0]: "<<&arr<<endl; 
	cout<<"Address stored at arr: "<<arr;
}
*/

// =========================================================================================================

// Q:-2. Define a function pass 4 element's address and dislpay array elements using pointers.

/*
# include <iostream>
using namespace std;

void getData(int *pointer)
{
	for(int i=1 ; i<=3 ; i++)
	{
		cout<<"Array Elements: "<<*pointer<<endl;
		pointer++;
	}
}
main()
{

	int arr[]={10,20,30};
	getData(arr);
	
	cout<<"Address of Elements: "<<&arr<<endl;
}
*/

// =========================================================================================================

// Q:-3. Define a function which will return a string from the function. When we return a string then its 
//       address will return the return type of these function should be char*.
/*
# include <iostream>
using namespace std;

char* display()
{
	char *str;
	cout<<"Enter City Name: ";
	cin.getline(str, 20);
	return str;
}
main()
{	
	char str[20];
	cout<<"City Name: "<<display();
}
*/

// =========================================================================================================

// Q:-4. Display the value of variable using pointer to pointer notation.

/*
# include <iostream>
using namespace std;

main()
{
	int x, *ptr1, **ptr2;
	
	x = 10;
	ptr1 = &x;
	ptr2 = &ptr1;
	
	cout<<"Value of x stored at ptr1: "<<*ptr1<<endl;
	cout<<"Value of x stored at ptr2: "<<**ptr2;
}
*/


