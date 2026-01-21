// Topic:- Loop Control Structure
// ------

//  Loop Control Structure:- In programming if we want to repeat a statement or a number of statements then
//  -----------------------  it can be implimented using:-

//  1. While Loop
//  2. For Loop
//  3. Do while Loop

// Syntax of While Loop:-

//  initialize the loop counter (Start)
//  while (condition) (Stop)
//  {
//		Body of the loop;
//      increment/decrement the loop counter; (Step)
//  }

// Note:- Here loop counter is any integer or character variable which is used to count number of times we
//        want to repeat the loop.

// ================================================================================================================

// While Loop:-
// ----------

// Questions:-
// ---------

// Q:-1. Write a program to print a message 5 times.
/*
# include <iostream>
using namespace std;

main()
{
	int i;
	i = 1; 
	while (i<=5)
	{
		cout<<"Hello Bro!"<<endl;	
		i++;
	}
}
*/
// =================================================================================================================

// Q:-2. Write a program to display a series of numbers.
/*
# include <iostream>
using namespace std;

main()
{
	int i;
	i=1; // Start Value
	while (i<=10) // Stop Value
	{
		cout<<i<<endl;
		i++; // Step value
	}
}
*/

// =================================================================================================================

// Q:-3. Write a program to display this series of numbers.

// 1). Even Numbers: 2, 4, 8, 10, 12
// 2). Odd Numbers: 2, 5, 8, 11, 14, 17
// 3). Gap Number: 5, 10, 15, 20, 25
// 4). Reverse Numbers: 10, 9, 8....0
// 5). Ramdom Numbers: 12, 10, 8...0

// 1). Even Numbers:-
/*
# include <iostream>
using namespace std;

main()
{
	int i,n;
	i=2;
	while (i<=20)
	{
		cout<<i<<endl;
		i=i+2;	
	}
}
*/

// 2). Odd Numbers:-
/*
# include <iostream>
using namespace std;

main()
{
	int i,n;
	i=3;
	while (i<=30)
	{
		cout<<i<<endl;
		i=i+3;	
	}
}
*/

// 3). Gap Numbers:-
/*
# include <iostream>
using namespace std;

main()
{
	int i,n;
	i=5;
	while (i<=30)
	{
		cout<<i<<endl;
		i=i+5;	
	}
}
*/

// 4). Reverse Numbers:-
/*
# include <iostream>
using namespace std;

main()
{
	int i;
	i=10;
	while (i>=1)
	{
		cout<<i<<endl;
		i--;
	}
}
*/

// 5). Random Numbers:-
/*
# include <iostream>
using namespace std;

main()
{
	int i;
	i=12;
	while(i>=2)
	{
		cout<<i<<endl;
		i=i-2;
	}
}
*/

// =================================================================================================================

// Q:-4. Display the Sum of first 5 numbers.
/*
# include <iostream>
using namespace std;

main()
{
	int i, sum;
	i=1;
	sum=0;
	while (i<=5)
	{	
		cout<<i<<endl;
		sum=sum+i;
		i++;
	}
	cout<<"\nSum of First 5 Numbers:"<<sum;
}
*/

// =================================================================================================================

// Q:-5. Display the Sum of Even Numbers between 1 to 10.
/*
# include <iostream>
using namespace std;

main()
{
	int i, sum;
	i=2;
	sum=0;
	while(i<=10)
	{
		cout<<i<<endl;
		sum+=i;
		i=i+2;
	}
	cout<<"Sum of Even Numbers: "<<sum;
}
*/

// =================================================================================================================

// Q:-6. Display the Sum of Odd numbers between 1 to 10.
/*
# include <iostream>
using namespace std;

main()
{
	int i, sum;
	i=1;
	sum=0;
	while(i<=10)
	{
		cout<<i<<endl;
		sum+=i;
		i=i+2;
	}
	cout<<"Sum of Odd Number: "<<sum;
}
*/

// =================================================================================================================

// Q:-7. Display the sum of Even and Odd numbers.
/*
# include <iostream>
using namespace std;

main()
{
	int i, n, Evensum=0, Oddsum=0;
	
	cout<<"Enter Numbers: ";
	cin>>n;
	
	i = 2;
	cout<<"\nEven Numbers: ";
	
	while(i<=n)
	{
		if (i % 2 == 0)
		{
			cout<<i<<" ";
			Evensum +=i;
		}
		i++;	
	}
	i = 1;
	cout<<"\nOdd Numbers: ";
	
	while(i<=n)
	{
		if (i % 2 !=  0)
		{
			cout<<i<<" ";
			Oddsum +=i;
		}
		i++;
	}
	cout<<endl;
	cout<<"\nSum of Even Numbers: "<<Evensum<<endl;
	cout<<"Sum of Odd Numbers: "<<Oddsum;
}
*/

// =================================================================================================================

// Q:-8. Display the count of Even and Odd numbers between 1 to 10.
/*
# include <iostream>
using namespace std;

main()
{
	int i, n, Even_count, Odd_count;
	Even_count=0;
	Odd_count=0;
	
	cout<<"Enter Numbers: ";
	cin>>n;
	
	i=2;
	
	cout<<"\nEven Numbers: ";
	
	while(i<=10)
	{
		if(i % 2 == 0)
		{
			cout<<i<<" ";
			Even_count++;	
		}
	i++;	
	}
	i=1;
	cout<<"\nOdd Numbers: ";
	
	while(i<=10)
	{
		if(i % 2 != 0)
		{
			cout<<i<<" ";
			Odd_count++;
		}
	i++;	
	}
	cout<<endl;
	
	cout<<"\nCount of Even Numbers: "<<Even_count;
	cout<<"\nCount od Odd Numbers: "<<Odd_count;	
}
*/

// =================================================================================================================

// Q:-9. Display the Factorial of n numbers.
/*
# include <iostream>
using namespace std;

main()
{
	int i=1, n, Fact=1;
	
	cout<<"Enter Numbers: ";
	cin>>n;

	while(i <= n)
	{
		Fact=Fact*i;
		i++;
	}
	cout<<"\nFactorial of n numbers are: "<<Fact;			
}
*/

// =================================================================================================================

// Q:-10. Display the sum of factorial.
/*
# include <iostream>
using namespace std;

main()
{
	int i=1, n, Fact=1, Factsum;
	Factsum=0;
	
	cout<<"Enter Numbers: ";
	cin>>n;
	
	cout<<"\nNumber of Factorials: ";
	while(i<=n)
	{	
		cout<<i<<" ";
		Fact=Fact*i;
		Factsum=Factsum+Fact;
		i++;
	}		
	
	cout<<"\nFactorial: "<<Fact;
	cout<<"\nSum of Factorial: "<<Factsum;
}
*/

// =================================================================================================================

// Q:-11. Display the sum of digits.
/*
# include <iostream>
using namespace std;

main()
{
	int n, rem, sum;
	sum=0;
	
	cout<<"Enter Numbers: ";
	cin>>n;
	
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	cout<<"Sum of digits: "<<sum;
}
*/

// =================================================================================================================

// Q:-12. Check wheather the number is Armstrong or not?
/*
# include <iostream>
using namespace std;

main()
{
	int n, rem, sum=0;
	
	cout<<"Enter Any Number: ";
	cin>>n;
	
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
	}
	cout<<"Armstrong: "rem;
}
*/

// =================================================================================================================

// Q:-13. Display the reverse of the given number.
/*
# include <iostream>
using namespace std;

main()
{
	int n, reverse=0, remainder;
	
	cout<<"Enter Numbers: ";
	cin>>n;
	
	while(n != 0)
	{
		remainder = n % 10;
		reverse = reverse *10 + remainder;
		n = n / 10;
	
	}
	cout<<"\nReverse: "<<reverse;
}
*/

// =================================================================================================================

// For Loop:-
// --------

// Syntax:- 

// for ( initialization ; condition ; increment/decrement)
// {
//      body of the foop;
// }

// =================================================================================================================

// Q:-1. Write a program to print 1 to 10 numbers using for loop.
/*
# include <iostream>
using namespace std;

main()
{
	int  i;
	
	for (i=1 ; i<=10 ; i++) // Start ; Stop ; Step
	{
		cout<<i<<endl;
	}
}
*/

// =================================================================================================================

// Q:-2. Display even and odd numbers between 1 to 10.
/*
# include <iostream>
using namespace std;

main()
{
	int i, Even_sum=0, Odd_sum=0;
	
	cout<<"Even Numbers: ";
	
	for(i=1 ; i<=10 ; i++)
	{	
		if (i % 2 == 0)
		{
			cout<<i<<" ";
			Even_sum=Even_sum+i;		
		}
	}
	cout<<"\nOdd Numbers: ";
	
	for (i=1 ; i<10 ; i++)
	{	
		if (i % 2 != 0)
		{
			cout<<i<<" ";
			Odd_sum=Odd_sum+i;
		}
	}
	cout<<"\nSum of Even Numbers: "<<Even_sum;
	cout<<"\nSum of Odd Numbers: "<<Odd_sum;

}
*/

// =================================================================================================================

// Do while loop:-
// -------------

// Syntax:- 

// initialization loop counter;
// do
// {
//		body of the loop;
// 		increment/decrement the counter;
// }
// while(condition);

// =================================================================================================================

// Q:-1. Write a program to print 1 to 10 numbers using do while loop.
/*
# include <iostream>
using namespace std;

main()
{
	int i=1;
	cout<<"Numbers: ";
	do
	{	
		cout<<i<<" ";
		i++;	
	}	
	while(i<=10);
}
*/

// =================================================================================================================

// Q:-2. Display even and odd numbers.
/*
# include <iostream>
using namespace std;

main()
{
	int i=2, Even;
	cout<<"Even Numbers: ";
	do
	{
		cout<<i<<" ";
		Even=Even+i;
		i=i+2;	
	}
	while(i<=10); 
}
*/

// =================================================================================================================

// Switch Case Program:-
// -------------------

// Q:-3. Write a Menu Driven program for Addition, Subtraction, and Multiplication of two numbers using 
//       switch case and do while loop.
/*
# include <iostream>
using namespace std;

main()
{
	int i=1, A, B;
	char ch, option;
	
	cout<<"Input 2 Numbers: ";
	cin>>A>>B;
	
	cout<<"\n1. Addition(+) \n2. Subtraction(-) \n3. Multiplication(*) \n4. Divison(/)"<<endl;
	do 
	{
		cout<<"\n-->Select Any Options from Above:-";
		cin>>option;
		
		switch(option)
		{
			case '+':
				cout<<"\nAddition: "<<A+B;
				
				break;
				
			case '-':
				cout<<"\nSubtraction: "<<A-B;
		
				break;
				
			case '*':
				cout<<"\nMultiplication: "<<A*B;
			
				break;
			
			case '/':
				cout<<"\nDivison: "<<A/B;	
				 
				 break;
				 
			default:
				cout<<"\nInvalid Case!";		
		}
		cout<<endl;
		cout<<"\nDo you want to continue?(Y/N):-";
		cin>>ch;
	}
	while(ch=='Y');
	cout<<"\nThank You!!";
}
*/

// =========================================================================================================

// Nested Loop:- The loop within another loop is called Nested loop. If one process which is repeating is to
// -----------   be executed multiple times then we use nested loop. Generally we prefer for loop for nesting.

// Syntax:-

// For (initialization ; condition1 ; increment/decrement)
// {
//		for (initialization ; conditon2 ; increment/decrement)
// 		{
//			body of the loop;
//      }
// }


// =========================================================================================================

// Q:-1. Display the factorial of 1 to 5 numbers using nested for loop.
/*
# include <iostream>
using namespace std;

main()
{
	int i=1, Fact=1, j;
	
	for(i=1 ; i<=5 ; i++)
	{
		Fact=1;
		for (j=1 ; j<=i ; j++)
		{	
			Fact=Fact*j;
		}
	cout<<"\nFactorial: "<<Fact;	
	}
}
*/

// =========================================================================================================



