#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int main()
{
    #ifdef LOCAL
        freopen("a.in","r",stdin);
        freopen("b.out","w",stdout);
    #endif
    int N;
    cin >> N;
    int a[150];
    memset(a, 0, sizeof(a));
    for(int i = 1; i <= N; i++){
        cin >> a[i];
    }
    vector<int> A;
    vector<int> B;
    int cnt = 0;
    for(int i = 1; i <= N; i++){
        for(int j = i+1; j <= N; j++){
            int jia = 0;
            int jial = 0;
            for(int z = 1; z <= N; z++){
                if(z == i && z == j && a[z] < 0){
                    if(a[abs(a[z])] > 0){
                        jial++;
                    }
                    else if(a[z] < 0 && z != i && z != j){
                        cout << "happen" << endl;
                        
                        if(abs(a[z]) != i && abs(a[z]) != j){
                            jia++;
                        }
                    }
                }
            }
            jia += jial;
            if(jia == 2 && jial == 1){
                A.push_back(i);
                B.push_back(j);
                cnt++;
            }
        }
    }
    if(cnt == 0) cout << "No Solution";
    else if(cnt == 1) cout << A[0] << " " << B[0];
    else cout << A[0] << " " << B[0];
    return 0;
}