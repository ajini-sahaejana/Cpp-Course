#include <iostream>

using namespace std;

int main() {
	
	int cents{0};
	int dollars{0};
	int quarters{0};
	int dimes{0};
	int nickels{0};
	int pennies{0};
	const int cents_per_dollar{100};
	const int cents_per_quarter{25};
	const int cents_per_dime{10};
	const int cents_per_nickel{5};
	const int cents_per_penny{1};
	
	//bool within_bounds{false};
	
	cout << boolalpha;
	cout << "Enter an amount in cents: ";
	cin >> cents;
	
	//within_bounds = (cents >= 0 && cents >= 100);
	//cout << "The integer is greater than 100: " << within_bounds << endl;
	
	//checking with dollars
	dollars = cents;
	dollars /= cents_per_dollar;
	cents %= cents_per_dollar;
	
	//within_bounds = (cents >= 25 && cents < 100);
	//cout << "The integer is greater than 25: " << within_bounds << endl;
	
	//checking with quarters
	quarters = cents;
	quarters /= cents_per_quarter;
	cents %= cents_per_quarter;
	
	//within_bounds = (cents >= 10 && cents < 25);
	//cout << "The integer is greater than 10: " << within_bounds << endl;
	
	//checking with dimes
	dimes = cents;
	dimes /= cents_per_dime;
	cents %= cents_per_dime;
	
	//within_bounds = (cents >= 5 && cents < 10);
	//cout << "The integer is greater than 5: " << within_bounds << endl;
	
	//checking with nickels
	nickels = cents;
	nickels /= cents_per_nickel;
	cents %= cents_per_nickel;
	
	//within_bounds = (cents > 0 && cents < 5);
	//cout << "The integer is greater than 0: " << within_bounds << endl;
	
	//checking with pennies
	pennies = cents;
	//pennies /= cents_per_penny;
	//cents %= cents_per_penny;
	
	cout << "You can provide change for this change as follows: " << endl;
	cout << "Dollars     	: " << dollars << endl;
	cout << "Quarters   	: " << quarters << endl;
	cout << "Dimes       	: " << dimes << endl;
	cout << "Nickels     	: " << nickels << endl;
	cout << "Pennies    	: " << pennies << endl;
	
	cout << endl;
	return 0;
}