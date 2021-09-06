#include <iostream>

using namespace std;

int main() {
	
	int counter {10};
	int result {0};
	
	//cout << "Counter: " << counter << endl;
	//
	//counter = counter + 1;
	//cout << "Counter: " << counter << endl;
	//
	//counter++;
	//cout << "Counter: " << counter << endl;
	//
	//++counter;
	//cout << "Counter: " << counter << endl;


	//counter = 10;
	//result = 0;
	//
	//cout << "Counter: " << counter << endl;
	//result = ++counter;
	//cout << "Counter: " << counter << endl;
	//cout << "Result: " << result << endl;
	//
	//cout << endl;


	//counter = 10;
	//result = 0;
	//
	//cout << "Counter: " << counter << endl;
	//result = counter++;
	//cout << "Counter: " << counter << endl;
	//cout << "Result: " << result << endl;


	//counter = 10;
	//result = 0;
	//
	//cout << "Counter: " << counter << endl;	//10
	////counter = counter + 1;	//11
	//result = ++counter + 10;	//21
	//cout << "Counter: " << counter << endl;	//11
	//cout << "Result: " << result << endl;		//21
	//
	//cout << endl;


	counter = 10;	//11
	result = 0;		//20
	
	cout << "Counter: " << counter << endl;		//10
	result = counter++ + 10;	//20
	//counter = counter + 1;	//11
	cout << "Counter: " << counter << endl;		//11
	cout << "Result: " << result << endl;	//20
	
	
	cout << endl;
	return 0;
}