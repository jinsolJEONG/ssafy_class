#include <iostream>
#include <string>
using namespace std;


int main()
{
	string str;
	cin >> str;
	string k;
	int a, b, c;
	cin >> a >> b >> c;
	k = str.substr(a, b-a+1);
	for (int i = 0; i < c; i++)
	{
		cout << k;
	}
	return 0;
}