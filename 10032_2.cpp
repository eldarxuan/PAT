#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    int N,a,b;
    cin >> N;
    map<int, int> mp;
    for(int i = 0; i < N; i++){
        cin >> a >> b;
        mp[a] = mp[a] + b;
    }
    int max = 0;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        if (it->second > mp[max]) max = it->first;
    }
    cout << max << " " << mp[max] << endl;
    return 0;
}