// Problem43-SecondsToDaysToHoursToMinutesToSeconds.cpp : This file contains the 'main' function. Program execution begins and ends there.


//HW FROM Lesson #20 - Arithmetic Operators
#include <iostream>
using namespace std;

struct strTaskDuration {

	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string Message) {

	int Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

strTaskDuration SecondsToTaskDuration(int TotalSeconds) {

	strTaskDuration TaskDuration;

	const int SecondsPerDay = 24 * 60 * 60;
	const int SecondsPerfHour = 60 * 60;
	const int SecondsPerMinute = 60;

	int Remainder = 0;

	TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
	Remainder = TotalSeconds % SecondsPerDay;

	TaskDuration.NumberOfHours = floor(Remainder / SecondsPerfHour);
	Remainder = Remainder % SecondsPerfHour;

	TaskDuration.NumberOfMinutes = floor(Remainder / SecondsPerMinute);
	Remainder = Remainder % SecondsPerMinute;

	TaskDuration.NumberOfSeconds = Remainder;

	return TaskDuration;
}

void PrintTaskDurationDetails(strTaskDuration TaskDuration) {

	cout << "\n";

	cout << TaskDuration.NumberOfDays << ":"
		<< TaskDuration.NumberOfHours << ":"
		<< TaskDuration.NumberOfMinutes << ":"
		<< TaskDuration.NumberOfSeconds << "\n";


}


int main()
{

	int TotalSeconds = ReadPositiveNumber("Please Enter Total Seconds?");
	PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));
	return 0;

}












//int SecondsPerDay = 24 * 60 * 60,
//	SecondsPerfHour = 60 * 60,
//	SecondsPerMinute = 60,
//	Remainder;

//	
//int TotalSeconds,NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;

//cout << "Please enter TotalSeconds: ";
//cin >> TotalSeconds;


//NumberOfDays = floor(TotalSeconds / SecondsPerDay);
//Remainder = TotalSeconds % SecondsPerDay;
//
//NumberOfHours= floor(Remainder / SecondsPerfHour);
//Remainder = TotalSeconds % SecondsPerfHour;
//
//NumberOfMinutes = floor(Remainder / SecondsPerMinute);
//Remainder = TotalSeconds % SecondsPerMinute;

//NumberOfSeconds = Remainder;

//cout << round(NumberOfDays) << ":" << round(NumberOfHours) << ":" << round(NumberOfMinutes) << ":" << round(NumberOfSeconds) << endl;

