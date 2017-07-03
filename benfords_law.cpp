/*
This is my solution to programming project 12 about Benford's Law 
(adapted from a "Nifty Assignment" by Steve Wolfman 
(http://nifty.stanford.edu/2006/wolfman-pretid/)
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream input_stream;
	string str_num;
	float ones = 0, twos = 0, threes = 0, fours = 0, fives = 0,
		sixes = 0, sevens = 0, eights = 0, nines = 0;

	input_stream.open("sunspots.txt");
	
	while (input_stream >> str_num)
	{
		switch (str_num[0])
		{
		case '1':
			ones++;
			break;
		case '2':
			twos++;
			break;
		case '3':
			threes++;
			break;
		case '4':
			fours++;
			break;
		case '5':
			fives++;
			break;
		case '6':
			sixes++;
			break;
		case '7':
			sevens++;
			break;
		case '8':
			eights++;
			break;
		case '9':
			nines++;
			break;
		}
	}

	int total = ones + twos + threes + fours + fives + sixes + sevens + eights + nines;

	cout << "Percentage of times each number is the first digit:\n"
		<< "One: " << ones / total * 100 << endl
		<< "Two: " << twos / total * 100 << endl
		<< "Three: " << threes / total * 100 << endl
		<< "Four: " << fours / total * 100 << endl
		<< "Five: " << fives / total * 100 << endl
		<< "Six: " << sixes / total * 100 << endl
		<< "Seven: " << sevens / total * 100 << endl
		<< "Eight: " << eights / total * 100 << endl
		<< "Nine: " << nines / total * 100 << endl;


	return 0;
}