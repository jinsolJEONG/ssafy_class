#include <iostream>
#include <vector>
using namespace std;

int num[6];
char com[6];
int mini = 99;
int maxi = -99;

vector<int> vec;


int main()
{
	for (int i = 0; i < 6; i++)
	{
		cin >> num[i];
	}
	cin >> com;

	for (int i = 0; i < 6; i++)
	{
		if (com[i] == 'm') {
			mini = 99;
			for (int m = 0; m < 6; m++)
			{
				if (num[m] < mini) {
					int flag = 0;
					for (int j = 0; j < vec.size(); j++)
					{
						if (vec[j] == num[m]) {
							flag = 1;
							break; 
						}
					}
					if(flag==1)continue;
					mini = num[m];
				}
			}
			cout << mini;
			vec.push_back(mini);
		}

			if (com[i] == 'x') {
				maxi = -99;
				for (int x = 0; x < 6; x++)
				{
					if (num[x] > maxi) {
						int flag = 0;
						for (int j = 0; j < vec.size(); j++)
						{
							if (vec[j] == num[x]) {
								flag = 1;
								break;
							}
						}
						if (flag == 1)continue;
						maxi = num[x];
					}
				}
				cout << maxi;
				vec.push_back(maxi);
			}
	}

	return 0;
}
