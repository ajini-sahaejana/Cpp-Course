#include <iostream>

using namespace std;

int main() {
	
	int small_rooms {0};
	int large_rooms {0};
	const double price_per_small_room {25.00};
	const double price_per_large_room {35.00};
	const double sales_tax {0.06};
	const int estimate_expiry {30};
	
	cout << "Hello, Welcomes to Frank's Carpet Cleaning Service!\n" << endl;
	
	cout << "How many small rooms would you like cleaned? ";
	cin >> small_rooms;
	cout << "How many large rooms would you like cleaned? ";
	cin >> large_rooms;

	cout << "\nEstimate for carpet cleaning service" << endl;
	
	cout << "Number of Small Rooms: " << small_rooms << endl;
	cout << "Number of Large Rooms: " << large_rooms << endl;
	cout << "Price per Small Room: $" << price_per_small_room << endl;
	cout << "Price per Large Room: $" << price_per_large_room << endl;
	
	cout << "Cost: $" 
			<< (price_per_small_room * small_rooms) +
				  (price_per_large_room * large_rooms)
			<< endl;
	cout << "Tax: $"
			<< ((price_per_small_room * small_rooms) +
				  (price_per_large_room * large_rooms)) * sales_tax
			<< endl;
	
	cout << "=======================================" << endl;
	
	cout << "Total Estimate: $"
			<< ((price_per_small_room * small_rooms) + (price_per_large_room * large_rooms)) +
				  (((price_per_small_room * small_rooms) + (price_per_large_room * large_rooms)) * sales_tax)
			<< endl;
	cout << "This estimate is valid for " << estimate_expiry << " days." << endl;
	
	cout << endl;
	
	return 0;
}