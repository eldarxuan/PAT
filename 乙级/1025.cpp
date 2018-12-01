#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    #ifdef LOCAL
        freopen("a.in","r",stdin);
        freopen("b.out","w",stdout);
    #endif
    int N, K, data;
    string adress1, adress2;
    int temp = 0;
    map<string, int>a;
    string x[100050];
    cin >> x[0] >> N >> K;
    //scanf("%d%d%d",&x[0], &N, &K);
    for(int i = 0; i < N; i++){
        cin >> adress1 >> data >> adress2;
        //scanf("%d%d%d", &adress1, &data, &adress2);
        if(adress2 == "-1"){
            x[N - 1] = adress1;
            a[adress1] = data;
        }else if(adress1 == x[temp]){
            x[temp + 1] = adress2;
            a[adress1] = data;
            temp++;
        }
    }
    int n = N/K;
    int cnt, cnt2;
    string A,B;
    for(int i = 0; i < n; i++){
        /*for(int j = 0; j < K; j++){
            cnt = i*K + j;
            cnt2 = i*K + 1 + (i+1)*K - cnt;
            A = x[cnt];
            B = x[cnt2];
            x[cnt2] = A;
            x[cnt] = B;
        }*/
        reverse(x + i*K, x + i*K + K - 1);
    }
    cout << "N = " << N << endl;
    for(int i = 0; i < N; i ++){
        if(i = N - 1){
            x[i+1] = -1;
        }
        //cout << x[i] << " " << a[x[i]] << " " << x[i+1] << endl;
    }
    return 0;
}