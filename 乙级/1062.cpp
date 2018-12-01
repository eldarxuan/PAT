#include<iostream>
#include<vector>    
using namespace std;
int main()
{
    #ifdef LOCAL
        freopen("a.in","r",stdin);
        freopen("b.out","w",stdout);
    #endif
    char c;
    int N1, N2, M1, M2, K;
    vector<int>vi;
    cin >> N1 >> c >> M1;
    cin >> N2 >> c >> M2;
    cin >> K;
    vi.push_back(1);
    for(int i = 2; i <= K; i++){
        if(K % i != 0){
            vi.push_back(i);
            cout << vi[vi.size()-1] << endl;
        }
    }
    vi.push_back(K);
    /*for(int i = 0; i < vi.size(); i++){
        cout << vi[i] << endl;
    }//*/
    int j = 0;
    for(int i = 0; i < vi.size(); i++){
        //cout << "i = " << i << endl;
        if((vi[i] * M1) > (N1 * K) && (vi[i] * M2) < (N2 * K)){
            if(j != 0){
                cout << " ";
            }
            cout << vi[i] << c << K;
            j++;
        }
    }
    return 0;
}