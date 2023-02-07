#include <iostream>
using namespace std;

int arr1[4];
int arr2[4];
int result[8];
int main() {
	for (int i = 0; i < 4; i++)
	{
		cin >> arr1[i];
	}
	for (int i = 0; i < 4; i++)
	{
		cin >> arr2[i];
	}
	int t = 0;
	for (int i = 0; i < 4; i++)
	{
		if (arr1[i]<arr2[i])
		{
			result[t] = arr1[i];
			t++;
			result[t] = arr2[i];
			t++;
		}
		else
		{
			result[t] = arr2[i];
			t++;
			result[t] = arr1[i];
			t++;
		}
	}
	for (int i = 0; i < 8; i++)
	{
		cout << result[i]<<' ';
	}

	return 0;
}