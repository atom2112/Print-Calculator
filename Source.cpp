// ---------------------------------------------------------------
// Programming Assignment:	Course Project Week 4
// Developer:			          Adam Ross
// Date Written:			3/28/2021
// Purpose:				3D print cost calculator V4 
// ---------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <limits>
#include <fstream>
using namespace std;
void intro(), invalidChoice(), quit(), input();
char choice = ' ';
//Constant Variables
int const numRolls = 100;
int const filamentX = 100;
int const hoursX = 1000;
int const postHoursX = 1000;
//Define int variables
int totalAllFilament = 0;
int printTime = 0;
int totalRollLength;
int numRollsUsed;
int numPartsMade;
int numPartsMadeX;
int postTime = 0;
int totalTime;
//Define double variable
double rollSum = 0;
double filamentUsedCost;
double printTimeCost;
double postTimeCost;
double printCost;
double profit;
//Define double array
double rolls[numRolls];
double filament[filamentX];
//Define int array
int hours[hoursX];
int postHours[postHoursX];

int main()
{
	cout << "Welcome to 3D cost calculator" << endl;
	intro();
	while (choice != 'E' && choice != 'e')
	{
		cin >> choice;
		if (choice == 'Y' || choice == 'y')
		{
			input();
			// Rolls used array/sum
			cout << "How many rolls of filament were used? ";
			cin >> numRollsUsed;
			for (int x = 0; x < numRollsUsed; x++)
			{
				cout << "Input cost of each roll $ ";
				cin >> rolls[x];
				rollSum = rollSum + rolls[x];
			}
			// Part made array/sum
			cout << "How many parts were made? ";
			cin >> numPartsMade;
			for (int x = 0; x < numPartsMade; x++)
			{
				cout << "Input how much filament each part used in mm: ";
				cin >> filament[x];
				totalAllFilament = totalAllFilament + filament[x];
			}
			// Time array/sum
			for (int x = 0; x < numPartsMade; x++)
			{
				cout << "How long did each part take to print? ";
				cin >> hours[x];
				printTime = printTime + hours[x];
			}
			// Postprocessing Time Array
			for (int x = 0; x < numPartsMade; x++)
			{
				cout << "how long was spent processing each part? ";
				cin >> postHours[x];
				postTime = postTime + postHours[x];
			}
			//Calculations
			totalRollLength = numRollsUsed * 1000;
			filamentUsedCost = ((rollSum / totalRollLength) * totalAllFilament);
			printTimeCost = printTime * 0.50;
			postTimeCost = postTime * 0.75;
			printCost = filamentUsedCost + printTimeCost + postTimeCost;
			totalTime = printTime + postTime;

			cout << endl;
			cout << fixed << setprecision(2) << "Hours for production " << totalTime << "hrs" << endl;
			cout << endl;
			cout << fixed << setprecision(2) << "Total 3D print cost is $" << printCost << endl;
			cout << endl;
			ifsteam input("Reciept.txt");
			input >> printCost;
			ofstream output("reciept.txt");

			system("pause");
		}
		if (choice == 'P' || choice == 'p')
		{
			input();
			// Rolls used array/sum
			cout << "How many rolls of filament were used? ";
			cin >> numRollsUsed;
			for (int x = 0; x < numRollsUsed; x++)
			{
				cout << "Input cost of each roll $ ";
				cin >> rolls[x];
				rollSum = rollSum + rolls[x];
			}
			// Part made array/sum
			cout << "How many parts were made? ";
			cin >> numPartsMade;
			for (int x = 0; x < numPartsMade; x++)
			{
				cout << "Input how much filament each part used in mm: ";
				cin >> filament[x];
				totalAllFilament = totalAllFilament + filament[x];
			}
			// Time array/sum
			for (int x = 0; x < numPartsMade; x++)
			{
				cout << "How long did each part take to print? ";
				cin >> hours[x];
				printTime = printTime + hours[x];
			}
			// Postprocessing Time Array
			for (int x = 0; x < numPartsMade; x++)
			{
				cout << "how long was spent processing each part? ";
				cin >> postHours[x];
				postTime = postTime + postHours[x];
			}
			//Calculations
			totalRollLength = numRollsUsed * 1000;
			filamentUsedCost = ((rollSum / totalRollLength) * totalAllFilament);
			printTimeCost = printTime * 0.50;
			postTimeCost = postTime * 0.75;
			printCost = filamentUsedCost + printTimeCost + postTimeCost;
			totalTime = printTime + postTime;
			profit = printCost - filamentUsedCost;
			cout << endl;
			cout << fixed << setprecision(2) << "Total 3D print profit is $" << profit << endl;
			cout << endl;
			system("pause");
		}
		if (choice == 'B' || choice == 'b')
		{
			input();
			// Rolls used array/sum
			cout << "How many rolls of filament were used? ";
			cin >> numRollsUsed;
			for (int x = 0; x < numRollsUsed; x++)
			{
				cout << "Input cost of each roll $ ";
				cin >> rolls[x];
				rollSum = rollSum + rolls[x];
			}
			// Part made array/sum
			cout << "How many parts were made?? ";
			cin >> numPartsMade;
			for (int x = 0; x < numPartsMade; x++)
			{
				cout << "Input how much filament each part used in mm: ";
				cin >> filament[x];
				totalAllFilament = totalAllFilament + filament[x];
			}
			//Calculations
			totalRollLength = numRollsUsed * 1000;
			filamentUsedCost = ((rollSum / totalRollLength) * totalAllFilament);
			printTimeCost = printTime * 0.50;
			postTimeCost = postTime * 0.75;
			printCost = filamentUsedCost + printTimeCost + postTimeCost;
			totalTime = printTime + postTime;

			cout << endl;
			cout << fixed << setprecision(2) << "Filament cost was " << filamentUsedCost << endl;
			cout << endl;
			system("pause");
		}
		if (choice == 'D' || choice == 'd')
		{
			input();
			// Rolls used array/sum
			cout << "How many rolls of filament were used? ";
			cin >> numRollsUsed;
			for (int x = 0; x < numRollsUsed; x++)
			{
				cout << "Input cost of each roll $ ";
				cin >> rolls[x];
				rollSum = rollSum + rolls[x];
			}
			// Part made array/sum
			cout << "How many parts were made?? ";
			cin >> numPartsMade;
			for (int x = 0; x < numPartsMade; x++)
			{
				cout << "Input how much filament each part used in mm: ";
				cin >> filament[x];
				totalAllFilament = totalAllFilament + filament[x];
			}
			// Time array/sum
			for (int x = 0; x < numPartsMade; x++)
			{
				cout << "How long did each part take to print? ";
				cin >> hours[x];
				printTime = printTime + hours[x];
			}
			// Postprocessing Time Array
			for (int x = 0; x < numPartsMade; x++)
			{
				cout << "how long was spent processing each part? ";
				cin >> postHours[x];
				postTime = postTime + postHours[x];
			}
			//Calculations
			totalRollLength = numRollsUsed * 1000;
			filamentUsedCost = ((rollSum / totalRollLength) * totalAllFilament);
			printTimeCost = printTime * 0.50;
			postTimeCost = postTime * 0.75;
			printCost = filamentUsedCost + printTimeCost + postTimeCost;
			totalTime = printTime + postTime;

			cout << fixed << setprecision(2) << "Filament cost was " << filamentUsedCost << endl;
			cout << endl;
			cout << fixed << setprecision(2) << "Hours for production " << totalTime << endl;
			cout << endl;
			cout << fixed << setprecision(2) << "Total 3D print cost is $" << printCost << endl;
			system("pause");
		}
		if (choice == 'E' || choice == 'e')
		{
			cout << endl;
			quit();
			cout << endl;
			system("pause");
		}
		else
		{
			cout << endl;
			invalidChoice();
			intro();
		}
	}
	return 0;
}
void intro()
{
	cout << "Are you pricing for a client? Press Y" << endl;
	cout << "Are you looking to see your profit? Press P" << endl;
	cout << "are you looking for a bill of materials? Press B" << endl;
	cout << "If you want to see all the data. Press D" << endl;
	cout << "Press E to exit the program" << endl;


}
void invalidChoice()
{
	cout << "You have selected an invalid choice" << endl;
	cout << "Please select a new choice" << endl;


}
void quit()
{
	cout << "Happy Printing!" << endl;
}
void input()
{
	cout << "Please enter the following values to find the total totals of your 3D print" << endl;
}
