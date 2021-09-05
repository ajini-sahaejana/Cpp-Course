#include <iostream>

using namespace std;

int main() {
	
	int number_of_rooms {0};	
	const double price_per_room {32.50};
	const double sales_tax {0.06};
	const int estimate_expiry {30};
	
	cout << "Hello, Welcomes to Frank's Carpet Cleaning Service!\n" << endl;
	cout << "How many rooms would you like cleaned? ";
	cin >> number_of_rooms;

	cout << "\nEstimate for carpet cleaning service" << endl;
	cout << "Number of Rooms: " << number_of_rooms << endl;
	cout << "Price per Room: $" << price_per_room << endl;
	cout << "Cost: $" << price_per_room * number_of_rooms << endl;
	cout << "Tax: $" << price_per_room * number_of_rooms * sales_tax << endl;
	
	cout << "=======================================" << endl;
	cout << "Total Estimate: $" << (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * sales_tax) << endl;
	cout << "This estimate is valid for " << estimate_expiry << " days." << endl;
	
	cout << endl;
	
	return 0;
}