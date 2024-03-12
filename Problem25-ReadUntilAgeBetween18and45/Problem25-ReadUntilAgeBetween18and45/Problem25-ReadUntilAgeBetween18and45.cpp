// Problem25-ReadUntilAgeBetween18and45.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;


int ReadAge() {
	int Age;
	cout << "Please enter your age: \n";
	cin >> Age;
	return Age;
}

bool ValidateNumberInRange(int Number, int From, int To) {

	return (Number >= From && Number <= To);

}

int ReadUntilAgeBetween(int From, int To) {

	int Age = 0;

	do {

		Age = ReadAge();

	} while (!ValidateNumberInRange(Age, From, To));

	return Age;

}

void PrintResult(int Age) {


	cout << "your Age is:  " << Age << endl;
	
}

int main()
{

	PrintResult(ReadUntilAgeBetween(18,45));


}
