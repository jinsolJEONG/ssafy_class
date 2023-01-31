#include<iostream>
#include<vector>
using namespace std;
int a, b;
int map[10][10] = {
	0,0,0,0,0,0,0,
	0,0,0,1,0,1,1,
	0,1,0,0,1,0,0,
	0,0,0,0,1,0,0,
	0,0,0,0,0,1,0,
	0,1,0,0,0,0,0,
	0,0,0,0,0,0,0,
};
int cnt = 0;
void dfs(int now) {
	
	for (int i = a; i < b; i++)
	{
		if (map[now][i] == 0)continue;
		cnt++;
		dfs(i);
		cnt++;
	}
	
}

int main() {
	cin >> a >> b;
	dfs(1);

		cout << cnt;


	return 0;
}