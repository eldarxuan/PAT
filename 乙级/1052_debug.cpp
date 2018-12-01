#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector< vector<string> > str;

int main(){
    #ifdef LOCAL
        freopen("a.in","r",stdin);
        freopen("b.out","w",stdout);
    #endif
    for(int k = 0; k < 3; k++){
        string line_s;
        getline(cin,line_s);
        vector<string> line_vec;
        int t1 = 0, t2 = 0;
        for(int i = 0; i < line_s.length(); i++){
            // a = line_s[i];
            if(line_s[i] == '[') {
                t1 = i;
            } 
            if(line_s[i] == ']') {
                t2 = i;
                string tmp = line_s.substr(t1+1, t2-t1-1);
                line_vec.push_back(tmp);
            }
        }
        str.push_back(line_vec);
    }
    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        int a,b,c,d,e;
        cin  >> a >> b >> c >> d >> e;
        if (i) cout << endl;
        if(a > str[0].size() || b > str[1].size()      // case2, 3 
            || c > str[2].size() 
            || d > str[1].size() || e > str[0].size()
            || a < 1 || b < 1 || c < 1 || d < 1 || e < 1
            ){
                cout << "Are you kidding me? @\\/@";
            }else{
                cout << str[0][a-1] << "(" << str[1][b-1] << str[2][c-1] << str[1][d-1] << ")" << str[0][e-1];
            }
    }
    return 0;
}