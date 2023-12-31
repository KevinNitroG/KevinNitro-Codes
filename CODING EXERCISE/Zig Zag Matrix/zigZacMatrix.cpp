#include <iostream>
#include <iomanip>

/*

example of MAX 5

1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25

*/

using namespace std;
#define MAX 5

int main()
{
	int array[MAX][MAX];

	// generate matrix
	for (int i = 0; i < MAX; ++i)
		for (int j = 0; j < MAX; ++j)
			array[i][j] = i * MAX + j + 1;

	// print out original matrix
	cout << "Ma tran ban dau:" << endl;
	for (int i = 0; i < MAX; ++i)
	{
		for (int j = 0; j < MAX; ++j)
			cout << setw(5) << array[i][j];
		cout << endl;
	}

	cout << endl;
	cout << "Zig Zag Matrix -> Array:";
	cout << endl;
	cout << endl;

	// print out zig zag matrix as array
	for (int i = 0; i <= (MAX - 1) * 2; ++i)
	{
		int j = i;
		int start, end;
		if (i < MAX)
		{
			start = 0;
			end = j;
		}
		else
		{
			start = j - MAX + 1;
			end = MAX - 1;
		}
		if (j % 2 == 0)
			for (int index = start; index <= end; ++index)
				cout << setw(5) << array[j - index][index];
		else
			for (int index = start; index <= end; ++index)
				cout << setw(5) << array[index][j - index];
	}

	return 0;
}