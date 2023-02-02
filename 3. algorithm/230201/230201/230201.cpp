#include <iostream>
#include <cstring>
using namespace std;

string str;
int dat[256] = {};

int main() {
	cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		dat[str[i]]++;
	}

	cout << (int)'_';
	return 0;
}
