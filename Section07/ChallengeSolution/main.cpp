#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	vector <int> vector1;
	vector <int> vector2;
	
	vector1.push_back(10);
	vector1.push_back(20);
	vector2.push_back(100);
	vector2.push_back(200);
	vector1.push_back(30);
	vector1.push_back(40);
	vector2.push_back(300);
	vector2.push_back(400);
	
	cout << "Vector 01 data: " << endl;
	cout << vector1.at(0) <<"\t";
	cout << vector1.at(1) <<"\t";
	cout << vector1.at(2) <<"\t";
	cout << vector1.at(3) << endl;
	cout << "Vector 01 contains " << vector1.size() << " elements" << endl;
	cout << endl;
	cout << "Vector 02 data: " << endl;
	cout << vector2.at(0) <<"\t";
	cout << vector2.at(1) <<"\t";
	cout << vector2.at(2) <<"\t";
	cout << vector2.at(3) << endl;
	cout << "Vector 02 contains " << vector2.size() << " elements" << endl;
	
	vector <vector<int>> vector_2d;
	
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	
	cout << "\nData in Vector 2d: " << endl;
	cout << vector_2d.at(0).at(0) <<"\t";
	cout << vector_2d.at(0).at(1) <<"\t";
	cout << vector_2d.at(0).at(2) <<"\t";
	cout << vector_2d.at(0).at(3) <<"\n";
	cout << vector_2d.at(1).at(0) <<"\t";
	cout << vector_2d.at(1).at(1) <<"\t";
	cout << vector_2d.at(1).at(2) <<"\t";
	cout << vector_2d.at(1).at(3) <<"\n";
	
	vector1.at(0) = 1000;
	//vector_2d.at(0).at(0) = 1000;
	
	cout << "\nData in Vector 2d now: " << endl;
	cout << vector_2d.at(0).at(0) <<"\t";
	cout << vector_2d.at(0).at(1) <<"\t";
	cout << vector_2d.at(0).at(2) <<"\t";
	cout << vector_2d.at(0).at(3) <<"\n";
	cout << vector_2d.at(1).at(0) <<"\t";
	cout << vector_2d.at(1).at(1) <<"\t";
	cout << vector_2d.at(1).at(2) <<"\t";
	cout << vector_2d.at(1).at(3) <<"\n";
	
	cout << "\nVector 01 data: " << endl;
	cout << vector1.at(0) <<"\t";
	cout << vector1.at(1) <<"\t";
	cout << vector1.at(2) <<"\t";
	cout << vector1.at(3) <<"\n";
	cout << "Vector 01 contains " << vector1.size() << " elements" << endl;
	
	cout << endl;
	return 0;
}