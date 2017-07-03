/* 
Programming project 5 in chapter 2

Write a program that finds solutions to the following cryptarithmetic puzzle:

TOO + TOO + TOO + TOO = GOOD

where each letter can be any digit from 0 to 9.

The solution proposed here is the naive brute-force one...
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	bool found = false;  // Have we found a solution?
	int too, good;
	int t, o, g, d;

	for (t = 0; t <= 9; t++)  // Loop on possible values of t
	{
		for (o = 0; o <= 9; o++)  // Loop on possible values of o
		{
			for (g = 0; g <= 9; g++)  // Loop on possible values of g
			{
				for (d = 0; d <= 9; d++)  // Loop on possible values of d
				{
					too = t * 100 + o * 10 + o;
					good = g * 1000 + o * 100 + o * 10 + d;

					if ((too * 4 == good) && 
						(t != o && t != g && t != d && o != g && o != d && g != d))
					// Cannot have two equal values
					{
						found = true;
						break;
					}
				}
				if (found)
					break;
			}
			if (found)
				break;
		}
		if (found)
			break;
	}

	if (found)
	{
		cout << "Solution found!\n"
			<< "TOO + TOO + TOO + TOO = GOOD is\n"
			<< too << " + " << too << " + " << too << " + " << too << " = " << good << endl
			<< "t:" << t << " o:" << o << " g:" << g << " d:" << d << endl;
	}
	else
		cout << "No solution\n";

	return 0;
}