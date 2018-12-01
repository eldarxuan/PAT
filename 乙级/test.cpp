#include<iostream>
using namespace std;
int main()
{
    #ifdef LOCAL
        freopen("a.in","r",stdin);
        freopen("b.oout","w",stdout);
    #endif
    int K;
    cin >> K;
    int temp;
    int sum = 0;
    int maxn = 0;
    for(int i = 0; i < K; i++){
        cin >> temp;
        //if(temp > 0) x = x + 1;
        sum += temp;
        if(sum > maxn) maxn = sum;
        else if(sum < 0) sum = 0;//最精彩的一步，位置放在循环的最后，小于零是直接置零重读
    }
    cout << maxn;
    return 0;
}