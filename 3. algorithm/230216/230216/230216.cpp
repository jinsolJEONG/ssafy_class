#include <iostream>
#include<cmath>
using namespace std;

//선언
int map[12][12];
int N;
int targetY, targetX;
int R;
//인풋
void input() {
	cin >> N;
	for (int i = 0; i <= N; i++)
	{
		for (int x = 0; x <= N; x++)
		{
			cin >> map[i][x];
		}
	}
}
//find
void findTarget() {
	for (int y = 0; y <= N; y++)
	{
		for (int x = 0; x <= N; x++)
		{
			if (map[y][x] == 2) {
				targetY = y;
				targetX = x;
				break;
			}
		}
	}
}
//계산
int cal() {
	int maxi = -1;
	for (int y = 0; y <= N; y++)
	{
		for (int x = 0; x <= N; x++)
		{
			if (map[y][x] == 1) {
				int cy = targetY - y;
				int cx = targetX - x;
				int D = cy * cy + cx * cx;
				//int D = (targetY - y)^2 + (targetX - x)^2;
				if (D > maxi)maxi = D;
			}
		}
	}
	double a = sqrt(maxi);
	return ceil(a);
}
int main()
{
	int T;
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		map[10][10] = { 0 };
		input();
		findTarget();
		cout <<"#"<<i<<' '<< cal()<< endl;


	}

	return 0;
}