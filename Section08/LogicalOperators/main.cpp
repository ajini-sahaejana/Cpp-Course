#include <iostream>

using namespace std;

int main() {
	
	int num{};
	const int lower{10};
	const int upper{20};
	
	cout << boolalpha;
	
	//cout << "Enter an integer - the bounds are " << lower << " and " << upper << ": ";
	//cin >> num;
	//bool within_bounds{false};
	//within_bounds = (num > lower && num < upper);
	//cout << num << " is between " << lower << " and " << upper << ": " << within_bounds << endl;
	
	//cout << "Enter an integer - the bounds are " << lower << " and " << upper << ": ";
	//cin >> num;
	//bool outside_bounds{false};
	//outside_bounds = (num < lower || num > upper);
	//cout << num << " is outside " << lower << " and " << upper << ": " << outside_bounds << endl;
	
	//cout << "Enter an integer - the bounds are " << lower << " and " << upper << ": ";
	//cin >> num;
	//bool on_bounds{false};
	//on_bounds = (num == lower || num == upper);
	//cout << num << " is on the bounds which are " << lower << " and " << upper << ": " << on_bounds << endl;
	
	//Determine if you need to wear a coat based on temperature and wind speed.
	bool wear_coat{false};
	double temperature{};
	int wind_speed{};
	
	const int wind_speed_for_coat{25};
	const double temperature_for_coat{45};
	
	cout << "Enter the current temperature in (F): ";
	cin >> temperature;
	cout << "Enter the windspeed in (Mph): ";
	cin >> wind_speed;
	
	wear_coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
	cout << "You need to wear a coat? " << wear_coat << endl;
	
	wear_coat = (temperature < temperature_for_coat && wind_speed > wind_speed_for_coat);
	cout << "You need to wear a coat? " << wear_coat << endl;
	
	cout << endl;
	return 0;
}