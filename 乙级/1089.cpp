#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    #ifdef LOCAL
        freopen("a.in","r",stdin);
        freopen("b.out","w",stdout);
    #endif
    int N;
    cin >> N;
    vector<int> a;
    int temp;
    for(int i = 0; i < N; i++){
        cin >> temp;
        a.push_back(temp);
    }
    int panduan = 0;
    int cnt = 0;
    vector<int> A;
    vector<int> B;
    for(int i = 1; i <= N; i++){
        for(int j = i+1; j <= N; j++){
            if(a[abs(a[i])] * a[i] > 0){
                if(a[abs(a[j])] * a[j] < 0){
                    panduan++;
                    cnt++;
                }
            }else if(a[abs(a[i])] * a[i] < 0){
                if(a[abs(a[j])] * a[j] > 0){
                    panduan++;
                    cnt++;
                }
            }
            if(panduan != 0){
                A.push_back(i);
                B.push_back(j);
            }
        }
    }
    if(cnt == 1) cout << A[0] << " " << B[0];
    else if(cnt == 0) cout << "No Solution";
    else cout << A[1] << " " << B[1];
    cout << endl << "cnt = " << cnt;
    return 0;
}