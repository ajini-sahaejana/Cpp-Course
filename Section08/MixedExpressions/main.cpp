#include <iostream>
 
using namespace std;

int main() {
	
	int total{};
	int num1{}, num2{}, num3{};
	const int count{3};
	double average{0.0};
	
	cout << "Enter 3 integers: ";
	cin >> num1 >> num2 >> num3;
	
	total = num1 + num2 + num3;
	average = static_cast<double>(total) / count;
	//average = (double)total / count; 		//Old C Style Cast
	
	cout << "The 3 numbers are: " << num1 << ", " << num2 << ", " << num3 << endl;
	cout << "The sum of the numbers are: " << total << endl;
	cout << "The average of the numbers are: " << average << endl;
	
	cout << endl;
	return 0;
}