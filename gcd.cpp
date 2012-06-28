/* This program computes the Greatest Common Divisor of two numbers, a and b, using a modulus function*/

#include <iostream>
using namespace std; 

// GCD Function 

int GCD(int a, int b) //integer values a and b 
{
	while(1)
	{
		a=(a%b); // first a mod b, if a equals zero then b
		if(a==0)
			return b;

		b=(b%a); // second b mod a, if b equals zero then a
		if(b==0)
			return a; 
	}
	
}


// Main Function

int main()
{
	// User input variables
	int y,x; 

	// Program Purpose
	cout <<"This program calculates the Greatest Common Divisor of two integers x and y.\n";
	cout <<"This program takes advantage of the Euclidean Algorithm \nto find a situation where the remainder is zero. \n\n";
	cout <<"First a (x) is modulated by b (y) until a is equal to zero, then returns the value of b. \n";
	cout <<"Second b is modulated by a until b is equal to zero and the value of a is returned. \n\n";
	cout <<"This works because the last non-zero remainder of the Euclidean Algorithm is the GCD. \n\n";

	// User input prompt
	cout <<"Please enter a value for x: \n";
	cin >> x; 
	cout << endl; 
	cout <<"Please enter a value for y: \n";
	cin >> y;
	cout << endl << endl; 

	// Display result 
	cout <<"The Greatest Common Divisor of " << x << " and " << y << " is " << GCD(x,y) << endl << endl; 

	return 0; 

}

	

