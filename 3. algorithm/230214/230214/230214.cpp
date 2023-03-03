#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Edge {
	int node;
	int cost;
};
vector<Edge> map[100];

int used[100];
int n, m;
int cnt = 0;
void dfs(int lev, int sum) {
	if (lev == 6) {
		cout << "경로발견!"<<sum<< endl;
		cnt++;
		return;
	}
	for (Edge next : map[lev])
	{
		if (used[next.node] == 1)continue;
		used[next.node] = 1;
		dfs(next.node, sum + next.cost);
		used[next.node] = 0;
		// path 가 너무 많으면 안쓴다?
	}

}

int main() {
	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		int from, to, cost;
		cin >> from >> to >> cost;
		map[from].push_back({ to, cost });
	}

	used[1] = 1;//1번 지점은 이후에 다시 등장 안한다
	dfs(1, 0);
	cout << cnt;
}