#include <iostream>
#include <string>
using namespace std;


string convert_result_tostring(int** matrix, string* names ,int size) {
	string msg = "Team\t\tGolden\t\tSilver\t\tBronze\t\tTotal\t\tTotal points\n";

	for (int i = 0; i < size; i++)
	{
		msg += *(names + i) + "\t\t";

		for (int j = 0; j < 3; j++)
		{
			msg += to_string(*(*(matrix + i) + j)) + "\t\t";
		}
		
		msg += to_string(matrix[i][0] + matrix[i][1] + matrix[i][2]) + "\t\t";
		msg += to_string(7 * matrix[i][0] + 6 * matrix[i][1] + 5 * matrix[i][2]) + "\t\t";
		msg += "\n";
	}

	return msg;
}