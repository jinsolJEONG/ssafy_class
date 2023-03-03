#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

struct Node {
    int y;
    int x;
};

int N;
int startY, startX;
int movecnt;
int map[110][110];

vector<Node> hole[11];

int qmffhr[5][4] = {
    {0,0,0,0},
    {1,3,0,2},
    {3,0,1,2},
    {2,0,3,1},
    {1,2,3,0},
};
int dy[4] = { -1,1,0,0 };
int dx[4] = { 0,0,-1,1 };

void dfs(int y, int x) {
    if (map[y][x] == -1 || (y == startY && x == startX)) return;
    // 빈공간
    if (map[y][x] == 0)dfs(y, x);
    // 블록 1~4
    else if (map[y][x] >= 1 && map[y][x] <= 4) {
        movecnt++;
        int nextdir = qmffhr[map[y][x]][];
        dfs();
    }
    // 벽인 경우 + 블록5
    else if (map[y][x] == 5) {} // return?
    // 웜홀인 경우
    else{ 
        if (hole[map[y][x]].y== y && hole[map[y][x]].x== x)
            dfs();
        else
            dfs();
    }
}



int main() {
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        //reset
        memset(map, 0, sizeof(map));
        memset(hole, 0, sizeof(hole));
        //input
        cin >> N;
        for (int j = 0; j <= N + 1; j++) {
            map[0][j] = 5;
            map[j][0] = 5;
        }
        for (int y = 1; y < N + 1; y++) {
            for (int x = 1; x < N + 1; x++) {
                cin >> map[y][x];
                //웜홀인 경우
                if (map[y][x] >= 6 && map[y][x] <= 10)
                    hole[map[y][x]].push_back({ y,x });
            }
        }
        //solve
        for (int y = 0; y < N + 1; y++)
        {
            for (int x = 0; x < N + 1; x++)
            {
                if (map[y][x] == 0) {
                    startY = y; startX = x;
                    for (int startdir = 0; startdir < 4; startdir++)
                    {
                        movecnt = 0;
                        dfs(y + dy[startdir], x + dx[startdir]);
                    }
                }
            }
        }
        //output
        cout << '#' << tc << ' ' << maxi << '\n';
    }
    return 0;
}