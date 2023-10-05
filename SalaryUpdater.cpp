#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Anthony Cantu \t L1-3 \t L1-3.exe" << endl << endl;

	ifstream inData;
	ofstream outData;

	string firstName, lastName;
	double currentPay, payIncrease, newPay;
	double totalCurrentPay = 0, totalNewPay = 0;

	//inData.open("C:\\Users\\antca\\OneDrive\\Documents\\School\\Fall 2023\\CIS 022 - C++\\Labs\\Lab 1\\Programing Exercises\\L1-3\\L1-3DATA.txt");
	//outData.open("C:\\Users\\antca\\OneDrive\\Documents\\School\\Fall 2023\\CIS 022 - C++\\Labs\\Lab 1\\Programing Exercises\\L1-3\\L1-3DATA.dat");

	inData.open("L1-3DATA.txt");
	outData.open("L1-3DATA.dat");

	outData << fixed << showpoint << setprecision(2);
	cout << fixed << showpoint << setprecision(2);

	//First Line -------------------------------------------------
	inData >> lastName >> firstName >> currentPay >> payIncrease;
	
	totalCurrentPay += currentPay;
	newPay = (currentPay * (payIncrease / 100)) + currentPay;
	totalNewPay += newPay;

	outData << firstName << " " << lastName << " " << newPay;
	
	//Second Line ------------------------------------------------
	inData >> lastName >> firstName >> currentPay >> payIncrease;

	totalCurrentPay += currentPay;
	newPay = (currentPay * (payIncrease / 100)) + currentPay;
	totalNewPay += newPay;

	outData << firstName << " " << lastName << " " << newPay;

	//Third Line -------------------------------------------------
	inData >> lastName >> firstName >> currentPay >> payIncrease;

	totalCurrentPay += currentPay;
	newPay = (currentPay * (payIncrease / 100)) + currentPay;
	totalNewPay += newPay;

	outData << firstName << " " << lastName << " " << newPay;

	//Console Output ---------------------------------------------
	cout << "Current total salary: $" << totalCurrentPay << endl;
	cout << "Updated total salary: $" << totalNewPay << endl;

	inData.close();
	outData.close();

	char q;
	cout << "\nPress any key to Exit.";
	cin.ignore(2, '\n');
	cin.get(q);

	return 0;
}
