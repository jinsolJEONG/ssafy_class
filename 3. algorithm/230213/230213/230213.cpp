#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
string strNum;

string reverse(string const& str)
{
	string rev(str.rbegin(), str.rend());
	return rev;
}

int main()
{
	int num, n;
	cin >> num >> n;
	for (int i = 0; i < n; i++)
	{
		num = num * 2;
		string str = to_string(num);
		str = reverse(str);
		num = stoi(str);
	}

	cout << num;

	return 0;
}
