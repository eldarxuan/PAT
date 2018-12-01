#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    int N;
    cin >> N;
    string zh, sh, kh;
    string all[N][3];
    memset(all, 0, sizeof(all));
    for(int i = 0; i < N; i++){
        cin >> zh >> sh >> kh;
        all[i][0] = zh;
        all[i][1] = sh;
        all[i][2] = kh;//二维数组，其横向和竖向访问下标，都是从0开始
    }
    int n; 
    string ch;
    cin >> n;
    for(int j = 0; j < n; j++){
        cin >> ch;
        for(int i = 0; i < N; i++){
            if(ch == all[i][1]){
                cout << all[i][0] << " " << all[i][2] << "\n";
            }
        }
    }
    return 0;
}