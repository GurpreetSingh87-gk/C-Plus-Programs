// Topic:- If Else
// -----


//  If Else:-
//  ========

// Decision Control Structures:- If we want to take a decision depending on conditions 
// ----------------------------  we can use decision control structure which is implimented by using if, 
//                               if else, nested if else, else if ladder (ladder else if).

// Syntax:-

//    if (condition)
//  {
//		  True block statement;
//  }
//    else
//  {
//		  False block statement;
//  }

// ========================================================================================================

// Q:-1. Write a program to input age of the person and check a person is eligible for
//     voting or not.
/*
# include <iostream>
using namespace std;

main()
{
	int Age;
	cout<<"Enter the Age:";
	cin>>Age;
	
	if (Age>18)
	{
		cout<<"Person can vote";
	}
	else
	{
		cout<<"Person can't vote";
	}
}
*/

// Q:-2. Input 2 numbers and find max number between them.
/*
# include <iostream>
using namespace std;

main()
{
	int First_Number, Second_Number;
	cout<<"Enter First Number:";
	cin>>First_Number;
	
	cout<<"Enter Second Number:";
	cin>>Second_Number;
	
	if (First_Number>Second_Number)
	{
		cout<<"\nFirst Number is Maximum";
	}
	else
	{
		cout<<"\nSecond Number is Maximum";
	}
}
*/
/*
// Q:-3. Input any number and check if it is positive or negative.

#include <iostream>
using namespace std;

main()
{
	int Number;
	cout<<"Enter Any Number:";
	cin>>Number;
	
	if (Number>0)
	{
		cout<<"\nThe Number is Positive!";
	}
	else
	{
		cout<<"\nThe Number is Negative!";
	}
}
*/

// Q:-4. Input marks of 3 subjects and calculate total and average marks and display the result pass if 
//       average is more than 40 otherwise the result fail.
/*
# include <iostream>
using namespace std;

main()
{
	int Python, Java, Web_Designing, Total_Marks;
	float Average_Marks;
	
	cout<<"Enter the Marks of Python:";
	cin>>Python;
	
	cout<<"Enter the Marks of Java:";
	cin>>Java;
	
	cout<<"Enter the Marks of Web Designing:";
	cin>>Web_Designing;
	
	Total_Marks = Python + Java + Web_Designing;
	Average_Marks = Total_Marks/3.0;
	
	cout<<"\nTotal Marks:"<<Total_Marks<<endl;
	cout<<"Average Marks:"<<Average_Marks<<endl;
	
	if (Average_Marks>40)
	{
		cout<<"Result:Pass";	
	} 
	else
	{
		cout<<"Result:Fail";
	}
}
*/

// Q:-5. Input cost price and selling price of an item and display whether we got profit or loss also display
//       how much profit or loss we got.
/*
# include <iostream>
using namespace std;

main()
{
	int Cost_Price, Selling_Price, amount;
	
	cout<<"\nEnter Cost Price:";
	cin>>Cost_Price;

	cout<<"\nEnter Selling Price:";
	cin>>Selling_Price;
	
	if (Selling_Price > Cost_Price)
	{
		amount = Selling_Price - Cost_Price;
		cout<<"\nYou Made a Profit of:"<<amount<<endl;
	}
	else if (Cost_Price > Selling_Price)
	{
		amount = Cost_Price - Selling_Price;
		cout<<"\nYou Got a Loss of:"<<amount<<endl;
	}
	else
	{
		cout<<"\nNo Profit and No Loss"<<endl;
	}
}
*/

// ========================================================================================================

//  Nested if else:-
//  ---------------

// Syntax:-

//  if (conditon 1)
//  {
//		if (condition 2)
//		{
//			statement 1;
//  	}
//		else
//		{
// 			statement 2;
//		}
//  }

//  Ladder if else:-
//  -------------

// Syntax:-

//  if (condition 1)
//  {
// 		statement 1;
//  }
//  else if (condition 2)
//  {
//  	statement 2;
//  }
//  else if (condition 3)
//  {
//  	statement 3;
//  }
//  else
//  {
//		statement 4;
//  }

// ---------------------------------	

//  Logical Operators:-
//  ------------------

//  and - &&
//  or  - ||
//  not - !

// ========================================================================================================

// Q:-1. Input age and the gender of a person and check if person can married or not.
/*
# include <iostream>
using namespace std;

main()
{
	int Age;
	string Gender;
	
	cout<<"Enter the Age:";
	cin>>Age;
	
	cout<<"Enter the Gender {Male/Female}:";
	cin>>Gender;
	
	if (Gender == "Male")
	{
		if (Age>18)
			cout<<"\nThe Person can get Married!";
		else 
			cout<<"\nThe Person can't get Married!";	
	}
	else
	{
		if (Age>21)
			cout<<"\nThe Person can get Married!";
		else
			cout<<"\nThe Person can't get Married!";
	}
}
*/

// Q:-2. Find the Maximum number between 3 numbers.
/*
# include <iostream>
using namespace std;

main()
{
	int First_Number, Second_Number, Third_Number;
	
	cout<<"Enter First Number:";
	cin>>First_Number;
	
	cout<<"Enter Second Number:";
	cin>>Second_Number;
	
	cout<<"Enter Third Number:";
	cin>>Third_Number;
	
	if (First_Number>Second_Number)
	{
		if (First_Number>Third_Number)
			cout<<"\nFirst Number is Maximum!";
		else
			cout<<"\nThird Number is Maximum!";
	}
	else
	{
		if (Second_Number>Third_Number)
			cout<<"\nSecond Number is Maximum!";
		else
			cout<<"\nThird Number is Maximum!";	
	}
}
*/

// Q:-3. Input any alphabet and check it is in upper case or lower case.
/*
# include <iostream>
# include <string>
using namespace std;

main()
{
	char Ch;
	
	cout<<"Enter Any Alphabet:";
	cin>>Ch;
	
	if (Ch>='A' && Ch<='Z')
	{
		Ch = Ch + 32;
		cout<<"\nThe Character is Upper Case"<<endl;
	}
	else if (Ch>='a' && Ch<='z')
	{
		Ch = Ch - 32;
		cout<<"\nThe Character is Lower Case";
	}
}
*/

// Q:-4. Find the maximum numbers between 3 numbers using operator && and else if ladder.
/*
# include <iostream>
using namespace std;

main()
{
	int First_Number, Second_Number, Third_Number;
	
	cout<<"Enter First Number:";
	cin>>First_Number;
	
	cout<<"Enter Second Number:";
	cin>>Second_Number;
	
	cout<<"Enter Third Number:";
	cin>>Third_Number;
	
	if (First_Number>Second_Number && First_Number>Third_Number)
	{
		cout<<"\nFirst Number is Maximum!";
	}
	else if (Second_Number>First_Number && Second_Number>Third_Number)
	{
		cout<<"\nSecond Number is Maximum!";
	}
	else
	{
		cout<<"\nThird Number is Maximum!";
	}
}
*/

// Q:-5. Input any character and check it is digit, alphabet or symbol.
/*
# include <iostream>
using namespace std;

main()
{
	char Ch;
	
	cout<<"Enter Any Character:";
	cin>>Ch;
	
	if (Ch>='0' && Ch<='9')
	{
		cout<<"\nIt's Digit!";
	}
	else if(Ch>='A' && Ch<='Z' || Ch>='a' && Ch<='z')
	{
		cout<<"\nIt's Alphabet!";
	}
	else
	{
		cout<<"\nIt's Symbol!";
	}
}
*/

// Q:-6. Input the month in numbers and display its names.
/*
# include <iostream>
using namespace std;

main()
{
	int Month;
	
	cout<<"Enter Month Number:";
	cin>>Month;
	
	if(Month==1)
	{
		cout<<"\nMonth Name: January";
	}
	else if (Month==2)
	{
		cout<<"\nMonth Name: February";
	}
		else if (Month==3)
	{
		cout<<"\nMonth Name: March";
	}
		else if (Month==4)
	{
		cout<<"\nMonth Name: Aprail";
	}
		else if (Month==5)
	{
		cout<<"\nMonth Name: May";
	}
		else if (Month==6)
	{
		cout<<"\nMonth Name: June";
	}
		else if (Month==7)
	{
		cout<<"\nMonth Name: July";
	}
		else if (Month==8)
	{
		cout<<"\nMonth Name: August";
	}
		else if (Month==9)
	{
		cout<<"\nMonth Name: September";
	}
		else if (Month==10)
	{
		cout<<"\nMonth Name: October";
	}
		else if (Month==11)
	{
		cout<<"\nMonth Name: November";
	}
		else if (Month==12)
	{
		cout<<"\nMonth Name: December";
	}
	else
	{
		cout<<"\nInvalid Month Number!!";
	}
}
*/

// Q:-7. Find the maximum number between 2 numbers using switch case.
/*
# include <iostream>
using namespace std;

main()
{
	int First_Number, Second_Number, z;
	
	cout<<"Enter First Number:";
	cin>>First_Number;
	
	cout<<"Enter Second Number:";
	cin>>Second_Number;
	
	z= First_Number>Second_Number;
	
	switch(z)
	{
		case 1:cout<<"\nFirst Number is Maximum!";
		
		break;
		
		case 0:cout<<"\nSecond Number is Maximum!";
	
		break;
		
		default:cout<<"\nBoth Numbers are Equal!";
	}
}
*/

// Q:-8. Input 2 numbers and create Menu Driven program for options like add, sub and mul.
/*
# include <iostream>
using namespace std;

main()
{
	int A, B, ch;
	
	cout<<"Enter 1st Number:";
	cin>>A;
	
	cout<<"Enter 2nd Number:";
	cin>>B;
	
	cout<<"\n===== Menu Driven Program =====";
	
	cout<<"\n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Exit"<<endl;
	
	cout<<"\n Select Any Options:-";
	cin>>ch;
	
	switch(ch)
	{
		case 1:cout<<"\nAddition:"<<A+B;
		
		break;
		
		case 2:cout<<"\nSubtraction:"<<A-B;
		
		break;
		
		case 3:cout<<"\nMultiplication:"<<A*B;
		
		break;
		
		case 4:cout<<"\nExit Program...";
		
		break;
		
		default:cout<<"\nInvalid Choice!";
	}
}
*/

// ==========================================================================================================

//  Turnary Operator:- This operator is use for condition checking that is it can be use in the replacement 
//  ----------------   of if else. Turnary means 3.

// Note:- Turnary Operator indicated by:- { ?: } 

// Syntax:- 

// Condition ? True statement : False satement;

// =========================================================================================================

// Q:-1. Find the maximum number between 2 numbers using turnary operator.
/*
# include <iostream>
using namespace std;

main()
{
	int x, y;
	
	cout<<"Enter 1st Number:";
	cin>>x;
	
	cout<<"Enter 2nd Number:";
	cin>>y;
	
	x > y ? cout<<"\nX is Maximum" : cout<<"\nY is Maximum";
}
*/

// Q:-2. Input any number and check it is positive or negative.
/*
# include <iostream>
using namespace std;

main()
{
	int Number;
	
	cout<<"Enter Number:";
	cin>>Number;
	
	Number>0?cout<<"\nIt's Positive" : cout<<"\nIt's Negative";	
}
*/

// Q:-3. Input any number and whether it is Even or Odd number.
/*
# include <iostream>
using namespace std;

main()
{
	int Number;
	
	cout<<"Enter Number:";
	cin>>Number;
	
	Number%2==0?cout<<"\nIt's Even Number" : cout<<"\nIt's Odd Number";
 } 
*/

// ========================================================================================================= 
