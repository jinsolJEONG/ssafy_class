#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int h, w;
int dp[1000][1000];
int arr[1000][1000];
struct Node{
	int left, mid, right;
};
vector<Node>scores;

bool isOut(int r, int c) {
	return r < 0 || c < 0 || r >= w || c >= w;
}

int getResult(int nowY, int nowX) {
	// 기저
	if (nowY == h)return 0;
	if (dp[nowY][nowX] != 0)return dp[nowY][nowX];
	if (isOut(nowY, nowX))return 0;
	int result = -21e8;
	
	// 왼쪽
	int a = max(result, getResult(nowY+1, nowX-1) + scores[nowY].left);
	// 가운데
	int b = max(result, getResult(nowY, nowX) + scores[nowY].mid);
	// 오른쪽
	int c = max(result, getResult(nowY + 1, nowX + 1) + scores[nowY].right);

	result = max(max(a, b), c);

	//출력
	dp[nowY][nowX] = result;
	return result;
}

int main() {
	cin >> h >> w;
	for (int y = 0; y < h; y++)
	{
		for (int x = 0; x < w; x++)
		{
			cin >> arr[y][x];
		}
		
	}

	cout << getResult(0,0);

	return 0;
}