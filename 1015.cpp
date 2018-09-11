#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
struct node{
    int num, de, cai;
};
//vector<node>vi[4];
int cmp(node a, node b){
    if((a.de + a.cai) != (b.de + b.cai)){
        return (a.de + a.cai) > (b.de + b.cai);
    }
    else if((a.de + a.cai) == (b.de + b.cai) && a.de != b.de){
        return a.de > b.de;
    }
    else{
        return a.num < b.num;
    }
}
int main()
{
    #ifdef LOCAL
        freopen("a.in","r",stdin);
        freopen("b.out","w",stdout);
    #endif
    vector<node> v[4];
    int N, L, H;
    //cin >> N >> L >> H;
    scanf("%d %d %d", &N, &L, &H);
    node temp;
    int cnt = 0;
    for(int i = 0; i < N; i++){
        //cin >> temp.num >> temp.de >> temp.cai;
        scanf("%d %d %d", &temp.num, &temp.de, &temp.cai);
        if(temp.de >= L && temp.cai >= L){
            cnt++;
            if(temp.de >= temp.cai && temp.de >= H && temp.cai >= H){
                v[0].push_back(temp);
            }
            else if(temp.de >= temp.cai && temp.de >= H && temp.cai <= H){
                v[1].push_back(temp);
            }
            else if(temp.de >= temp.cai){
                v[2].push_back(temp);
            }
            else{
                v[3].push_back(temp);
            }
        }

    }
    cout << cnt << endl;
    for(int i = 0; i < 4; i++){
        sort(v[i].begin(), v[i].end(), cmp);
        for(int j = 0; j <= v[i].size(); j++){
            cout << v[i][j].num << " " << v[i][j].de << " " << v[i][j].cai << endl;
        }
    }
    return 0;
}