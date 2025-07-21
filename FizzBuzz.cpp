#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

static string fizzbuzz(int n, int& fizzBuzzCount, int& fizzCount, int& buzzCount) {
	if (n % 3 == 0 && n % 5 == 0)
	{
		fizzBuzzCount++;
		return "FizzBuzz";
	}
	else if (n % 3 == 0)
	{
		fizzCount++;
		return "Fizz";
	}
	else if (n % 5 == 0)
	{
		buzzCount++;
		return "Buzz";
	}
	else
		return to_string(n);
}

int main()
{
	int number;
	vector<int> numbers;
	string response;

	int fizzCount = 0;
	int buzzCount = 0;
	int fizzBuzzCount = 0;

	cout << "FizzBuzz Program" << endl;
	cout << "Enter a positive integer: ";
	cin >> number;

	if (number <= 0) {
		cout << "You must enter a positive number." << endl;
		return 1;
	}

	while (number > 0) {
		numbers.push_back(number);
		cout << "Do you want to enter another positive integer? (yes/no): ";
		cin >> response;

		transform(response.begin(), response.end(), response.begin(), ::tolower);
		if (response == "yes") {
			cout << "Enter a positive integer: ";
			cin >> number;
			if (number <= 0) {
				cout << "You must enter a positive number." << endl;
				return 1;
			}
		} else if (response == "no") {
			break;
		}
		else {
			cout << "Invalid response. Please enter 'yes' or 'no'." << endl;
			return 1;
		}
	}

	ofstream outputFile("fizzbuzz.txt");

	if (!outputFile) {
		cerr << "Error opening file for writing." << endl;
		return 1;
	}

	for (int i = 0; i < numbers.size(); i++) {
		string result = fizzbuzz(numbers[i], fizzBuzzCount, fizzCount, buzzCount);
		cout << result << endl;
		outputFile << result << endl;
	}

	cout << endl;

	cout << "Fizz count: " << fizzCount << endl;
	cout << "Buzz count: " << buzzCount << endl;
	cout << "FizzBuzz count: " << fizzBuzzCount << endl;
	cout << "Total numbers processed: " << numbers.size() << endl;

	outputFile << "Fizz count: " << fizzCount << endl;
	outputFile << "Buzz count: " << buzzCount << endl;
	outputFile << "FizzBuzz count: " << fizzBuzzCount << endl;
	outputFile << "Total numbers processed: " << numbers.size() << endl;

	outputFile.close();
	cout << endl;
	cout << "Results written to fizzbuzz.txt" << endl;
	return 0;
}
