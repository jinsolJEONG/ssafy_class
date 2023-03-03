#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> anagramGroup; 


    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;

        
        sort(word.begin(), word.end()); 
        anagramGroup[word]++;
    }


    int maxGroupSize = 0;
    //int k = anagramGroup.size();
    //for (int i = 0; i < k; i++)
    //{
    //    if (anagramGroup[i] > maxGroupSize) {
    //        maxGroupSize = anagramGroup[i];
    //    }
    //}

    for (auto group : anagramGroup) {
        if (group.second > maxGroupSize) {
            maxGroupSize = group.second;
        }
    }

    cout << maxGroupSize << endl;

    return 0;
}
