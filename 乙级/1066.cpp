#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    #ifdef LOCAL
        freopen("a.in","r",stdin);
        freopen("b.out","w",stdout);
    #endif
    int M, N, A, B, R;
    scanf("%d%d%d%d%d",&M,&N,&A,&B,&R);
    //cin >> M >> N >> A >> B >> R;
    int temp;
    for(int i = 0; i < M; i ++){
        if(i)cout << "\n";
        for(int j = 0; j < N; j++){
            scanf("%d",&temp);
            //cin >> temp;
            //cout << temp << endl;
            if(j)cout << " ";
            if(temp >= A && temp <= B){
                temp = R;
            }
            printf("%03d",temp);
            //if(j == N-1 && i !=M-1)cout << endl;
        }
    }
    return 0;
}