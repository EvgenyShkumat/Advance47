#include <iostream>
using namespace std;

int main() {
	int size;

	do
	{
		system("cls");
		cout << "Enter the amount of countries: ";
		cin >> size;
	} while (size <= 0);

	string* names = new string[size];
	int** medals = new int* [size];
	
	for (int i = 0; i < size; i++)
	{
		*(medals + i) = new int[3];
		system("cls");
		cout << "Enter the name of the " << i << " country: ";
		cin >> *(names + i);
		cout << "Enter amount of golden medals of " << *(names + i) << ": ";
		cin >> *(*(medals + i) + 0);
		cout << "Enter amount of silver medals of " << *(names + i) << ": ";
		cin >> *(*(medals + i) + 1);
		cout << "Enter amount of bronze medals of " << *(names + i) << ": ";
		cin >> *(*(medals + i) + 2);
	}


	return 0;
}