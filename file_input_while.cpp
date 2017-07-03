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

	while (input_stream >> player)
	{
		input_stream >> score;
		cout << player
			<< ", "
			<< score << endl;
	}

	return 0;
}