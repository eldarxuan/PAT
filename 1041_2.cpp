#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int sh, sh2;
    string zh, kh;
    string all[N][2];
    memset(all, 0, sizeof(all));
    for(int i = 0; i < N; i++){
        cin >> zh >> sh >> kh;
        sh2 = sh - 1;
        all[sh2][0] = zh;
        all[sh2][1] = kh;
    }
    int n, ch, ch2; 
    cin >> n;
    for(int j = 0; j < n; j++){
        cin >> ch;
        ch2 = ch - 1;
        cout << all[ch2][0] << " " << all[ch2][1] << "\n";
    }
    return 0;
}