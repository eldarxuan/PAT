#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
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
    int cnt2 = 0;
    vector<int> A;
    vector<int> B;
    int x;
    for(int i = 1; i <= N; i++){
        for(int j = i+1; j <= N; j++){
            if(a[abs(a[i-1])-1] * a[i-1] > 0){
                if(a[abs(a[j-1])] * a[j-1] < 0){
                    //panduan++;
                    //cnt++;
                    map<int,int>mp;
                    if(a[abs(a[i-1])] > 0){
                        mp[abs(a[i-1])] = 1;
                    }else{mp[abs(a[i-1])] = -1;}
                    if(a[abs(a[i-1])] > 0){
                        mp[abs(a[i-1])] = -1;
                    }else{mp[abs(a[i-1])] = 1;}
                    for(int z = 0; z < N && z != i-1 && z != j-1; z++){
                        if(a[abs(a[z])] > 0){
                            mp[abs(a[z])] = -1;
                        }else{mp[abs(a[z])] = 1;}
                        for(int k = 1; k <= N; k++){
                            if(mp[k] < 0) cnt++;
                            if(cnt > 2) break;
                            else {A.push_back(i);B.push_back(j);cnt2++;}
                        }
                        cnt = 0;
                    }
                }
            }else if(a[abs(a[i])] * a[i] < 0){
                if(a[abs(a[j])] * a[j] > 0){
                    map<int,int>mp;
                    if(a[abs(a[i-1])] > 0){
                        mp[abs(a[i-1])] = -1;
                    }else{mp[abs(a[i-1])] = 1;}
                    if(a[abs(a[i-1])] > 0){
                        mp[abs(a[i-1])] = 1;
                    }else{mp[abs(a[i-1])] = -1;}
                    for(int z = 0; z < N && z != i-1 && z != j-1; z++){
                        if(a[abs(a[z])] > 0){
                            mp[abs(a[z])] = -1;
                        }else{mp[abs(a[z])] = 1;}
                        for(int k = 1; k <= N; k++){
                            if(mp[k] < 0) cnt++;
                            if(cnt > 2) break;
                            else {A.push_back(i);B.push_back(j);cnt2++;}
                        }
                        cnt = 0;
                    }
                }
            }
        }
    }
    if(cnt2 == 1) cout << A[0] << " " << B[0];
    else if(cnt2 == 0) cout << "No Solution";
    else cout << A[0] << " " << B[0];
    cout << endl << "cnt2 = " << cnt2;
    return 0;
}