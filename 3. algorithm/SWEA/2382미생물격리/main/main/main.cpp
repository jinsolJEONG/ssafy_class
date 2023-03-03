#include <iostream>
#include <cstring>

using namespace std;

int N;
int map[16][16];
int used[16][16];

struct Node {
    int y, x;
};

void dfs(int y, int x) {
    if (true)
    {

    }
    
    for (int i = 0; i < 2; i++)
    {
        dfs(lev + 1);
    }
}

int main()
{
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        //reset
        memset(map, 0, sizeof(map));
        //input 
        cin >> N;
        for (int y = 0; y < N; y++)
            for (int x = 0; x < N; x++)
                cin >> map[y][x];
        //solve
        for (int y = 1; y < N; y++) {
            int i = 1;
            for (int x = 1; x <= i; x++) {
                i++;
                dfs(y,x);
            }
        }
        //ouput

    }

    return 0;
}
