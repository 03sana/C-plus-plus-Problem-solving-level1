// Problem37-SumUntil-99.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

float ReadNumber(string Message) {

	float Number = 0;
	cout << Message << endl;
	cin >> Number;

	return Number;
}

float SumNumbers() {

	int Sum = 0, Number = 0, Counter = 1;

	do {
		Number = ReadNumber("Please enter Number " + to_string(Counter));
		
		if (Number == -99) {
			break;
		}

		Sum += Number;
		Counter++;
	} while (Number != -99);

	return Sum;
}
int main()
{
	cout << endl << "Result = " << SumNumbers() << endl;

}


//cout << "\n While Loop \n";

//
//int sum = 0;
//int num;

//cout << "enter a number";
//cin >> num;

//int i = 0;
//while (num != -99) {

//	sum = sum + num;

//	cout << "enter a number";
//	cin >> num;

//	i++;
//}

//cout << sum;

