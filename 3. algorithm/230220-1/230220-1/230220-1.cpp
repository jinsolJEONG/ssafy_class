#include <iostream>
#include <queue>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    priority_queue<pair<int, int>> pq;
    pq.push({ A, 0 });
    int ans = -1;
    while (!pq.empty()) {
        int num = pq.top().first;
        int cnt = pq.top().second;
        pq.pop();
        if (num == B) {
            ans = cnt;
            break;
        }
        if (num * 2 <= B)pq.push({ num * 2, cnt + 1 });
        if (num * 10 + 1 <= B)pq.push({ num * 10 + 1, cnt + 1 });
    }

    cout << ans;

    return 0;
}
