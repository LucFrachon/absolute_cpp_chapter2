#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream input_stream;
	string player, best_player;
	int number_players, score, best_score = 0;

	input_stream.open("scores.txt");

	input_stream >> number_players;
	cout << "Found " << number_players << " players.\n";

	while (input_stream >> player)
	{
		input_stream >> score;
		
		if (score > best_score)
		{
			best_player = player;
			best_score = score;
		}
	}

	cout << best_player << ", " << best_score;

	return 0;
}