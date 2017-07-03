#include <iostream>
#include <string>
using namespace std;

int main()
{
	int stories;
	double floor_price, amenities_rate, tax_rate;
	const double floor_increase = 0.02;

	do
	{
		cout << "Enter the number of stories (>= 1):\n";
		cin >> stories;
	} while (stories < 1);

	cout << "Enter the first floor base price:\n";
	cin >> floor_price;
	cout << "Enter the amenities rate and the tax rate (in decimals):\n";
	cin >> amenities_rate >> tax_rate;

	for (int floor = 1; floor <= stories; floor++)
	{
		cout << "FLOOR " << floor << ":\n";
		floor_price = floor_price * (1 + (floor - 1) * floor_increase);
		cout << "Base price: " << floor_price << endl;
		cout << "Cost of amenities: " << floor_price * amenities_rate << endl;
		cout << "Cost of tax: " << floor_price * tax_rate << endl;
	}

	return 0;
}