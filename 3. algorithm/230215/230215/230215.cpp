#include <iostream>
#include <vector>
using namespace std;

char parent[256];

void init() {
	for (char i = 'A'; i < 'Z'; i++)
	{
		parent[i] = i;
	}
}
char Find(char now)
{
	if (now == parent[now]) {
		return now; // root 
	}
	char ret = Find(parent[now]);
	parent[now] = ret; // 경로 압축 
	return ret;
}
void Union(char a, char b)
{
	char pa = Find(a);
	char pb = Find(b);
	if (pa == pb) {
		return;
	}
	parent[pb] = pa;
}

int main() 
{
	int n, k;
	cin >> n >> k;
	char a, b;
	for (int i = 0; i < n; i++)
	{

		cin >> a >> b;

		Union(a, b);
	}


	return 0;

}