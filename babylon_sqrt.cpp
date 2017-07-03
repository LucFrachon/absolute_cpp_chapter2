#include <iostream>
#include <string>
using namespace std;

int main()
{
	double square, guess, previous;
	const double precision = 0.0001;
	
	do
	{
		cout << "Enter the number whose square root you are looking for:\n";
		cin >> square;
	} while (square < 0);  // square roots are undefined for negative numbers

	guess = square / 2;

	do
	{
		previous = guess;
		guess = (guess + square / guess) / 2;
	} while (1 - guess / previous >= precision);

	cout << "Estimate of square root:" << guess << endl;
	return 0;
}