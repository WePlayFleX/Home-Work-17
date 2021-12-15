#include <iostream>
#include <ctime>

using namespace std;

const int nMatr = 10;

int main()
{
	srand(time(0));

	int aMatr[nMatr][nMatr] = { {0} };

	for (int i = 0; i < nMatr; i++)
	{
		for (int j = 0; j < nMatr; j++)
		{
			aMatr[i][j] = rand() % 10;
			cout << aMatr[i][j] << "  ";
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;

	int temp = 0;

	for (int i = 0; i < nMatr; i++)
	{
		temp = aMatr[i][i];
		aMatr[i][i] = aMatr[i][10 - i - 1];
		aMatr[i][10 - i - 1] = temp;
	}

	for (int i = 0; i < nMatr; i++)
	{
		for (int j = 0; j < nMatr; j++)
		{
			cout << aMatr[i][j] << "  ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}