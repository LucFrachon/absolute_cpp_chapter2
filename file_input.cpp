#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream input_stream;
	string player;
	int number_players, score;

	input_stream.open("scores.txt");

	input_stream >> number_players;
	cout << "Found " << number_players << " players.\n";

	for (int count = 1; count <= number_players; count++)
	{
		input_stream >> player;
		input_stream >> score;
		if (!input_stream)
			break;
		cout << player
			<< ", "
			<< score << endl;
	}

	return 0;
}