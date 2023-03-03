#include <iostream>

using namespace std;

int N, K;
int map[100][100];

void input() {
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int x = 0; x < N; x++)
		{
			cin >> map[i][x];
		}
	}
	cin >> K;
}

int dir1[] = { -1, 1, 1, -1 };
int dir2[] = { -1, 1, -1, 1 };

//bool isOut(int y , int x) {
//	return x == 0 || y == 0 || x < N || y < N;
//}

int baldMort(int y, int x) {
	int sum = 0;
	for (int i = 1; i <= K; i++) {
		for (int j = 0; j < 4; j++) {
			int dy = y + dir1[j]*i;
			int dx = x + dir2[j]*i;
			if (dx >= 0 && dy >= 0 && dx < N && dy < N) {
				sum += map[dy][dx];
			}
		}
	}
	return sum;
}

int main()
{
	input();
	int maxCnt = -1;
	for (int y = 0; y < N; y++)
	{
		for (int x = 0; x < N; x++)
		{
			int cnt = baldMort(y, x);
			if (cnt > maxCnt) maxCnt = cnt;
		}
	}
	cout << maxCnt;

	return 0;
}
