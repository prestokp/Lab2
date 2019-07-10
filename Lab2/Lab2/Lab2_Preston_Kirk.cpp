// Name
// COSC 1436 Lab 2

#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <cmath>	// needed for math functions like sqrt()
using namespace std;

// Constants for Part D
const int AT_BAT = 421;
const int HITS = 123;

int main()
{
	// Part A *********************************
	// Part A code will read in the quantity of a particular item and its price.
	// It will then print out the total price.
	// The input will come from the keyboard and the output will go to
	// the screen.
	cout << "Part A\n";	// DO NOT CHANGE THIS LINE OF CODE
	
	int	quantity;		// contains the amount of items purchased 
	float itemPrice;	// contains the price of each item
	float totalBill;	// contains the total bill.

	cout << setprecision(2) << fixed << showpoint;	// formatted output 
	cout << "Please input the number of items bought: ";

	// Fill in the input statement to bring in the quantity.
	cin >> quantity;

	// Fill in the prompt to ask for the price.
	cout << "Please input the unit price: ";

	// Fill in the input statement to bring in the price of each item.
	cin >> itemPrice;

	// Fill in the assignment statement to determine the total bill.
	totalBill = quantity * itemPrice;

	// Fill in the output statement to print total bill, with a label to the screen.
	cout << "\nThe total price is: " << totalBill;
	
	
	// Part B *********************************
	// Part B will bring in two prices and two quantities of items
	// from the keyboard and print those numbers in a formatted chart.
	cout << "\n\nPart B\n";	// DO NOT CHANGE THIS LINE OF CODE
	
	float price1, price2;		// The price of 2 items
	int	quantity1, quantity2;	// The quantity of 2 items

	cout << setprecision(2) << fixed << showpoint;
	cout << "Please input the price and quantity of the first item: ";

	// Fill in the input statement that reads in price1 and quantity1 from the keyboard.
	cin >> price1 >> quantity1;

	// Fill in the prompt for the second price and quantity.
	cout << "Please input the price and quantity of the second item: ";

	// Fill in the input statement that reads in price2 and quantity2 from the keyboard.
	cin >> price2 >> quantity2;

	cout << endl << setw(15) << "PRICE" << setw(12) << "QUANTITY" << endl;

	// Fill in the output statement that prints the first price and quantity. Be sure to use setw() statements.
	cout << setw(15) << right << price1 << setw(12) << right << quantity1 << endl;
	

	// Fill in the output statement that prints the second price and quantity.
	cout << setw(15) << right << price2 << setw(12) << right << quantity2 << endl;
	
	
	// Part C *********************************
	// Part C will input the value of two sides of a right triangle and then
	// determine the size of the hypotenuse.
	cout << "\n\nPart C\n";	// DO NOT CHANGE THIS LINE OF CODE
	
	float a, b;	// the smaller two sides of the triangle 
	float hyp;	// the hypotenuse calculated by the program

	cout << "Please input the value of the two sides: ";
	cin >> a >> b;

	// Fill in the assignment statement that determines the hypotenuse
	hyp = sqrt(pow(a, 2) + pow(b, 2));

	// Fill in a statement that will output decimal numbers to 5 decimal places
	cout << "The sides of the right triangle are " << a << " and " << b << endl;

	cout << "The hypotenuse is " << setprecision(5) << hyp << endl;
	
	
	// Part D *********************************
	// Part D will determine the batting average of a player.
	// The number of hits and at bats are set internally in the program.
	cout << "\n\nPart D\n";	// DO NOT CHANGE THIS LINE OF CODE
	
	float batAvg;

	batAvg = static_cast<float>(HITS) / AT_BAT;				// an assignment statement 
	cout << "The batting average is " << batAvg << endl;	// output the result
	
	// DO NOT CODE BELOW THIS LINE
	cout << endl;
	system("PAUSE");
	return 0;
}

// No questions for Part A
// No questions for Part B
// No questions for Part C

// Questions for Part D
// Question 1
// The batting average is 0. (Integer division)
// Question 2
// The batting average is 0.29216. (It required a casting of the variable in
// the numerator of the batting average expression.)



